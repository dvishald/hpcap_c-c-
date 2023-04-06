//virtual function

#include <iostream>  
using namespace std;  
class A  
{  
   int x=5;  
    public:  
    virtual void display()  
    {  
        std::cout << "Value of x is : " << x<<endl;  
    }  
};  
class B: public A  
{  
    int y = 10;  
    public:  
    void display()  
    {  
        std::cout << "Value of y is : " <<y<<endl;  
    }  
};  


class C: public B 
{  
    int z= 12;  
    public:  
    void display()  
    {  
        std::cout << "Value of z is : " <<z<<endl;  
    }  
};  
int main()  
{  
    A *a;  
    C c;  
    a = &c;  
    a->display(); 
   
   //B b;
    //a=&b;
   // a->display(); 
    return 0;  
}  
