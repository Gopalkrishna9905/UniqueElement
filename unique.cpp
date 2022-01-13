#include<iostream>
using namespace std;


int  unique(int arr[],int n)
{
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans = ans^arr[i];
	}
  return ans;
	
}


int main()
{
	int arr[5]={1,2,1,2,3};
	int n= sizeof(arr)/sizeof(arr[0]);
	cout<<unique(arr,n)<<endl;
	return 0;
}
