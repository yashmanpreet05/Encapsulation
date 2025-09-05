#include<iostream>
using namespace std;
class encapsulation 
{
    int d; // data is hidden from user because it is private!!
    public:
     void getdata(int a) // function to set the value 
     {
        d=a;
     }
     int display() // function to return the value 
     {
        return d;
     }
};
int main()
{
    int a;
    cout<<"enteer the value of a:";
    cin>>a;
    encapsulation r; // object of class 
    r.getdata(a);// function calling 
    cout<<" your value is :"<<r.display(); // displaying output 
    return 0;
}
