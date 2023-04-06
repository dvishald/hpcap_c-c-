#include<iostream>
	
	using namespace std;
	class  Ravan
	{
	public:
		void show()
			{
			cout<<"Hello World!"<<endl;
			}
			void show(char *name) 
			{
			cout<<"Hello "<<name<<endl;
			}
	
			void show (char *name, int count)
			 {
			for(int i=0; i<count; i++)
			cout<<"Hello "<<name<<endl;
			}
	};
	
	int main()
	 {
	
	
	Ravan r;
	char name[] = "Tejaa";
	r.show();
	r.show(name);
	r.show(name, 5);
	return 0;
	
	}
