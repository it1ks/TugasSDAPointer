#include <iostream>
using namespace std;
//RivaldiRamadhan
//G1A021096
//Table2

int main ()
{
    int a, b, c;
    int *p1, *p2, *p3;

    a = 10 ;
    cout<<"a= "<< a <<endl;
    b = 15 ;
    cout<<"b= "<< b <<endl;
    c = 27 ;
    cout<<"c= "<< c <<endl;
    p1 = &a ;
    cout<<"p1 = "<<&a<<endl;
    p2 = &b ;
    cout<<"p2 = "<<&b<<endl;
    *p1 = c ;
    cout<<"*p1 = "<<c<<endl;
    a = *p2 ;
    cout<<"a = "<<*p2<<endl;
    cout<<"*p2 = "<< a <<endl;
    b = 6 ;
    cout<<"b = 6"<<endl;
    p3 = &b ;
    cout<<"p3 = "<<&b<<endl;
    p3 = &c ;
    cout<<"p3 = "<<&c<<endl;
    *p1 = *p3 ;
    cout<<"*p1 = "<<*p3<<endl;
    cout<<"*p3 = "<<*p1<<endl;

}