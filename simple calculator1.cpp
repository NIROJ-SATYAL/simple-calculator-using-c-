#include<iostream>
using namespace std;
int sum( int x, float y);
int diff(int x,int y);
int mul(int x,int y);
float div(int x, float y);
int main()
{
	int x,y,s,d,m;
	float D;
	
	cout<<"enter the value of x and y";
	cin>>x>>y;
s=sum(x,y);

	d=diff(x,y);
	
	m=mul(x,y);
	
		D=div(x,y);
		
		
		cout<<"sum="<<s<<endl<<"diff="<<d<<endl<<"mul="<<m<<endl<<"div="<<D;
		return(0);
	
}
int sum( int x,float y)
{
	int sum;
	sum=x+y;
	return sum;
}
int diff(int x,int y)

	
	{
		int diff;
	
	diff=x-y;
	return(diff);
	
}
int mul(int x,int y)
{
	int mul;
		mul=x*y;
	return mul;
}
float div(int x,float y)
{
	float div;
	div=x/y;
	return(div);

}
