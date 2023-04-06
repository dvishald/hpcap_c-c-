#include<iostream>
using namespace std;

class student{

  int sub1;
  int sub2;
  int sub3;

 

  public:
    void set_marks(int a, int b, int c)
    {
        sub1=a;
        sub2=b;
        sub3=c;
	
    }
    void get_marks(){
    cout<<" marks of subject1" <<" "<<sub1 <<endl;
    cout<<" marks of subject2" <<" "<<sub2 <<endl;
    cout<<" marks of subject3" <<" "<<sub3 <<endl;
}

   student ()
  { 
    sub1=00;
    sub2=00;
    sub3=90;
	
	cout<<"initiate cocstructer"<<endl;
    }
    
     student (int a)
    { 
    	sub1=a;
     	sub2=a;
    	sub3=a;
    }
    
    
     student (int a,int b, int c)
    { 
    	sub1=a;
     	sub2=b;
    	sub3=c;
    }
	
	
	~student()
	{
		cout<<"from distructor"<<endl;	
	}
   
    
};

 
    int main()
    {
        student s1;
        s1.set_marks(29,28,27);
        s1.get_marks();
        {
        	student *s2 = new student(90);
        	s2->get_marks();
        	cout<<"marks of new student"<<endl;
        }
        
        student *s3= new student(10,23,30) ;
        s3->get_marks();
        
    }
