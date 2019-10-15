#include <iostream>
#include<iomanip>

using namespace std;
#define MAX 100
int main()
{
	int array[MAX];
	int n;
	cout<<"输入个数N：";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>array[i];
	}
	//判断最大值
	int sum=0;
	int max=array[0];
	for(int j=0;j<n;j++)
	{
		sum=sum+array[j];
		if(sum<array[j])//如果加上当前元素之后的和比当前元素还小，则舍弃之前元素
		{
			sum=array[j];
		}
		if(sum>max)
		{
		max=sum;
		}
	}
	
	cout<<"输出max:"<<max<<endl;
	
	return 0;
}
