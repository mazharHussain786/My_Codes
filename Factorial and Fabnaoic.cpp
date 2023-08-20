#include<iostream>
using namespace std;
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fact(n-1);
}

int fab(int num)
{
	if(num==1 or num==0)
	{
		return num;
	}
	return fab(num-1)+fab(num-2);
	
}



int main()
{
	cout<<fab(5);
	
}