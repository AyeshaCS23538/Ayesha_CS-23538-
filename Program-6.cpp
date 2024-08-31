#include <iostream>
using namespace std;
void chk_number(int n)
{
    int c=0,i;
    for(i=2;i<n;i++)
    {
    	if(n%i==0)
    	c=1;
	}
    if(n%2==0&&c==0)
    cout<<n<<"is a prime even number.";
    else if(n%2!=0&&c==0)
    cout<<n<<"is an odd prime number.";
    else if(n%2&&c!=0)
    cout<<n<<"is only an even number, not prime.";
    else if(n%2!=0)
    cout<<n<<"is only an odd number, not prime";
    else
    cout<<"is not a prime number.";
}
int main()
{
	int n;
	cout<<"Enter a number:";
	cin>>n;
	cout<<"Nature of number:"<<endl;
	cout<<"-----------------------"<<endl;
	chk_number(n);
	return 0;
	
}



