#include<iostream>
#include<string.h>
using namespace std;


class person{
    public:
    char name[10];
    int age ;
    float salary;
    
    person(){
   	 cout<<"constructor initialized"<<endl; 
    }

};

int main()
{
    person p1;
    p1.age= 24;
    strcpy(p1.name,"Rama");
    p1.salary =11000;

    person p2;

    p2.age=20;
    strcpy(p2.name, "Rani");
    p2.salary= 8000;

    cout<< p1.name <<" "<<p1.age<<" "<<p1.salary<<endl;

    cout<<p2.name<< " "<<p2.age<<" "<<p2.salary<<endl;
    return 0;
}
