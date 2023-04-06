#include<iostream>
	
	using namespace std;
	
		class Circle
		{
			
			float radius;
			public:
			Circle(float r)
			{
				radius=r;
			}	
			
				float getArea()
				{
					float area=3.1437*radius*radius;
					return area;
					
				}
				
				
				float getRadius()
				{
					return radius;
				}
		} ;
	
	
	
		int main()	
			{
			
				cout<<  "Enter Radius of Circle"<<endl;
				float rad;
				cin>>rad;
				Circle c (rad);
				
				
				cout<<"area of circle is :"<<c.getArea();
				
				cout<< "radius is"<<c.getRadius() <<endl;
				return 0;
			}
