#include<iostream>
#include<condition_variable>
#include<thread>
#include<mutex>
using namespace std;

mutex m;
mutex m1;
condition_variable cv;
condition_variable cv1;
bool ready = true;
bool processed = false;
bool observeReady = false;
bool processedRead = false;
bool temp = true;
std::string data;
void write()
{
	for(int i =0;i<10;i++)
	{
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
	std::unique_lock<std::mutex> lock(m);
	cv.wait(lock,[]{return ready;});

	cout<<"Processing done by Writer:"<<endl;

	data = data + "Added by Writer Thread";

	cout<<"****************************************"<<endl;

	processed = true;
	ready = false;
	temp = true;

	lock.unlock();
	cv.notify_all();
	}
       
}


void read()
{
	
	for(int i =0;i<10;i++)
	{
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
	std::unique_lock<std::mutex> lock(m);
	std::unique_lock<std::mutex> lock1(m1);
	cv.wait(lock,[]{return processed;});
	cv1.wait(lock1,[]{return temp;});

	cout<<"Data processed by reader thread-1"<<endl;
	cout<<data<<endl;

	cout<<"****************************************"<<endl;

	observeReady = true;
	temp = false;

    lock1.unlock();

	lock.unlock();
	cv1.notify_one();
	}
}

void observe()
{
	
	for(int i =0;i<10;i++)
	{
    std::this_thread::sleep_for(std::chrono::milliseconds(200));
	std::unique_lock<std::mutex> lock1(m1);
	cv1.wait(lock1,[]{return observeReady;});

	cout<<"Data processed by reader thread-2"<<endl;
	cout<<data<<endl;

	cout<<"****************************************"<<endl;

	processed = false;
	ready = true;
	observeReady = false;

    lock1.unlock();
	//lock.unlock();
	cv.notify_one();
	cv1.notify_one();
	}
}

int main()
{
	std::thread t1(write);
	std::thread t2(read);
	std::thread t3(observe);
	t1.join();
	t2.join();
	t3.join();
	return 0;
}