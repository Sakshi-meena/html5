#include<iostream>
#include<list>
using namespace std;

int main()
{
    

    list<int>l;
    list<int>n(5,100);

    cout<<"print n"<<endl;
    for(int i:n)
    {
        cout<<i<<" ";
    }

    cout<<endl;


    l.push_back(2);
    l.push_front(1);

    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"before eras "<<l.size();
    cout<<endl;
    l.pop_back();
    cout<<"after eras "<<l.size();


}