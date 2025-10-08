#include<iostream>
using namespace std;

class Base
{
    public:
        int i , j ;

        void fun()
        {
            cout<<"Inside Base Fun"<<"\n";
        }
        void gun()
        {
            cout<<"Inside Base gun"<<"\n";
        }
        virtual void sun()
        {
            cout<<"Inside Base sun"<<"\n";
        }
        virtual void bun()
        {
            cout<<"Inside Base bun"<<"\n";
        }
};

class Derived : public Base
{
    public:
        int x;
        void gun()
        {
            cout<<"Inside Derived gun"<<"\n";
        }
        void sun()
        {
            cout<<"Inside Derived sun"<<"\n";
        }
        void run()
        {
            cout<<"Inside Derived run"<<"\n";
        }
        void mun()
        {
            cout<<"Inside Derived mun"<<"\n";
        }


};

int main()
{
    

    /*Base*bp2 = new Derived();           //upcasting
    
    bp2->fun();             //Base fun
    bp2->gun();             //Base gun
    bp2->sun();             //Base sun
    //bp2->run();             //Error
   // bp2->mun();             //Error
    bp2->bun();             //Base bun*/

    cout<<sizeof(Base)<<"\n";   //16bytes
    cout<<sizeof(Derived)<<"\n";    //2bytes 
   
    return 0;
}