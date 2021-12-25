
// C++ program for illustration
// of map::find() function
//#include <bits/stdc++.h>
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
 
int main()
{
 
    // Initialize container
    map<int, int> mp;
 
    // Insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });
 
   
 
    // find() function finds the position
    // at which 3 is present
    auto itr = mp.find(2);
    if (itr == mp.end())
    {
        cout<<"Element is not available in the map"<<endl;
    }
    else
    {
        cout<<"Element is available in the map"<<endl;
    }
     cout << "Elements from position of 3 in the map are : \n";
    cout << "KEY\tELEMENT\n";

    for (auto itr = mp.find(3); itr != mp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
    cout<<"Iter second is:\t"<<itr->second<<endl;
    cout<<"Iter first is:\t"<<itr->first<<endl;
    return 0;
}