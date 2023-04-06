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
	
		class Circle : public Shape
		{
		
			public:
			
			Circle(){}
			Circle(float r)
			{
				radius=r;
			}	
			
				float getPerimeter()
				{
					float area=2*3.1437*radius;
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
				
				
				cout<<"perimeter of circle is :"<<c.getPerimeter();
				
				//cout<< "radius is"<<c.getRadius() <<endl;
				return 0;
			}
