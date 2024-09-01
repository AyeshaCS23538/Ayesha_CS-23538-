#include<iostream>
using namespace std;
int n;
void fun();
int main()
{
	cout<<"Enter  a number:";
	cin>>n;
	
	cout<<"Value of n before function call: "<<n<<endl;
	fun();
	cout<<"value of g after function call: "<<n<<endl;
	return 0;
}
void fun()
{
	n=n*2;
}
