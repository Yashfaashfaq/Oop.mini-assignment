#include<iostream>
#include<math.h>
using namespace std;

class Area
{
	public:
		int area(int length, int width)
		{
			return length*width;
		}
		int area(float PI, int radius)
		{
			return (3.14*radius*radius);
		}
};
int main()
{
	Area obj;
	cout<<"area of rectangle is:"<<obj.area(5,5)<<endl;
	cout<<"area of circle is:"<<obj.area(6,5);
}
