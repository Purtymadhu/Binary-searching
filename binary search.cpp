#include<iostream>
using namespace std;
int main()
{
	int n,i,found=0,key;
	cout<<"Enter number of elements you want in an array:";
	cin>>n;
	int arr[n];
	cout<<"Enter sorted elements only:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int low= 0;
	int high=n-1;
	cout<<"Enter number you want to be searcH";
	cin>>key;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(key<arr[mid])
		{
			high=mid-1;
		}
		else if(key>arr[mid])
		{
			low=mid+1;
		}
		else if(key==arr[mid])
		{
			cout<<"Element found at location:"<<mid<<" ="<<key;
			found=1;
			break;
		}
	}
			if(!found)
			{
				cout<<"Sorry the Element is not present in an array:";
			}
			
}
