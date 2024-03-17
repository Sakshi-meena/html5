#include<iostream>
#include<vector>
using namespace std;

int main()
{
vector<int>a(5,1);

cout<<"print a"<<endl;
    vector<int>last(a);
    for(int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;

vector<int>v;
cout<<"size-> "<<v.capacity()<<endl;

v.push_back(1);
cout<<"size-> "<<v.capacity()<<endl;

v.push_back(2);
cout<<"size-> "<<v.capacity()<<endl;

v.push_back(3);
cout<<"size-> "<<v.capacity()<<endl;
cout<<"size-> "<<v.size()<<endl;

cout<<"element at 2nd index-> "<<v.at(2)<<endl;

cout<<"first element-> "<<v.front()<<endl;
cout<<"last element->  "<<v.back()<<endl;

cout<<"before pop"<<endl;

for(int i:v)
{
    cout<<i<<" ";
}
cout<<endl;

v.pop_back();

cout<<"after pop "<<endl;
for(int i:v)
{
    cout<<i<<" ";
} cout<<endl;

cout<<"before clear size "<<v.size();

v.clear();

cout<<"after clear size" <<v.size();

}