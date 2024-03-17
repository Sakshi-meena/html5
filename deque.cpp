#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;

d.push_back(2);
cout<<endl;
d.push_front(1);

// for(int i:d)
// {
//     cout<<i<<" ";
// }
// cout<<endl;

// d.pop_back();
// for(int i:d)
// {
//     cout<<i<<" ";

// }
cout<<endl;
cout<<"index at 1 "<<d.at(1);
cout<<endl;

cout<<"first "<<d.front();
cout<<endl;
cout<<"last "<<d.back();
cout<<endl;
cout<<"empty or not "<<d.empty();

cout<<"before pop "<<d.size();
cout<<endl;
d.pop_back();
cout<<"after pop "<<d.size();

}