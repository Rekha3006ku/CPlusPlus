#include<iostream>
using namespace std;
class Base   //8byte
{
    public:
        int i,j;

        void fun()
        {
            cout<<"inside Base fun\n";
        }

};
class Derived : public Base         //12byte
{
    public:
        int x;

        void gun()
        {
            cout<<"inside derived gun\n";
        }

};
int main()
{
    Base bobj;
    Derived dobj;

    bobj.fun();
    dobj.fun();
    dobj.gun();
    return 0;
}