#include<iostream>
using namespace std;
float circlearea (float r)
{
	float a;
	a=3.14*r*r;
	return a;
}
int main()
{
	float radius,area;
	cout<<"Enter radius:";
	cin>>radius;
	radius=circlearea (radius);
	cout<<"The area of the circle = "<<radius;
}
