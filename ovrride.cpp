 #include<iostream>
 
 using namespace std;
   class A
   {
   	public:
   	virtual void show()
   	{
   		cout<<"from A\n";
   	}
   };
   
   class B :public A
   {
   	public:
   	void show()
   	{
   	
   		cout<<"from B\n";
   	}
   
   };
   
   		int main()
   		{
   			 A *a1;
   			 B b1;
   			 
   			 a1= &b1; 
   			 a1->show();
   			return 0;
   		}
   		
   		
   		
   		
   
