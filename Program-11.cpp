#include<iostream>
#include<conio.h>
using namespace std;
void swap(int&x, int&y);
int main()
{
	int a,b;
	cout<<"Enter an integer:";
	cin>>a;
	cout<<"Enter an integer:";
	cin>>b;
	cout<<"Values before swapping..."<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"Swapping the values..."<<endl;
	swap(a,b);
	cout<<"Values after swapping:"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
void swap(int&x,int&y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
