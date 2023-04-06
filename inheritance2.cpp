#include<iostream>
	
	using namespace std;
	
	
	class Shape	
	{
			
	   protected :
	   float radius;
	   
	   public:
	   
	   void initialize ()
	   {
	   	cout << "enter radius"<<endl;
	   	
	   	cin>>radius;
	   }
	};
	
	
	class Constant 
	 
	{
		public:
		float getPi()
		{
			return 22/7;
		}
	
		
	};

		class Circle : public Shape ,public Constant
		{
		
			public:
			
			Circle(){}
				Circle(float r)
				{
				
				
				radius=r;
				}	
			
				float getPerimeter()
				{
					float area=2*getPi()*radius;
					return area;
					
				}
				
				
				
				float getRadius()
				{
					return radius;
				}
		} ;
	
	
	
		int main()	
			{
			
				//cout<<  "Enter Radius of Circle"<<endl;
				//float rad;
				//cin>>rad;
				//Circle c (rad);
				Circle c;
				
				c.initialize();
				
				
				cout<<"perimeter of circle is :"<<c.getPerimeter()<<endl;
				
				//cout<< "radius is"<<c.getRadius() <<endl;
				return 0;
			}
