#include<iostream>
using namespace std;
int main()
{
	int ar[10]={10,20,30,40,50,60,70,80,90,100};
	int start, end, mid, loc, num;
	start=0;
	end=9;
	loc=-1;
	cout<<"enter the num";
	cin>>num;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(num==ar[mid])
		{
			loc=mid;
			break;
		}
		else if(num<ar[mid])
		{
			end= mid-1;
		}
		else if(num>ar[mid])
		{
			start=mid+1;
		}

	}
		if(loc!=-1){
			cout<<"num is found"<<loc;
		}
		else
		{
			cout<<"num not found";
		}
}
