#include <iostream>
using namespace std;


class Shape{
  protected :
 float  radius;
 float pi=3.143;
 
 public:
  
 void initaialize() 
{
	cout<<"Enter Radius"<<endl;
	cin>>radius;
	
	
} 
};

class Sphere :public Shape
{

	public:
	 float areaOfSphare()
	{
		float area= 4*pi*(radius*radius);
		return area;
	
	}
	
	
	 float volumeOfSphare()
	{
		float volume = 4/3*pi*radius*radius*radius ;
                    	return volume;
	
	}
};


class  Cylinder
{
	public:
	
	

}

int main()
{

	Sphere sp;
	
	sp.initaialize();
	
	cout<<sp.areaOfSphare()<<endl;
	
	cout<<sp.volumeOfSphare()<<endl;
}




