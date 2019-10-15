#include <iostream>
#include<iomanip>

using namespace std;
#define MAX 100
int main()
{
	int a[20000];
	int k=0;
	for(int i=2;i<=20000;i++)
	{
		if(i==2) 
		{
			a[k]=i;
			k++;
		}
		else
		{
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
		    break;
			}
			else if(j+1==i)
			{
				a[k]=i;
				k++;
			}
		}
    	}
	}
	cout<<"Êä³öËØÊý£º"<<endl;
	for(int d=0;d<k;d++)
	 {
		cout<<a[d]<<" ";
	 	if((d+1)%5==0)
	 	cout<<endl;
	 }
	
	return 0;
}
