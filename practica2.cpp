#include <iostream>

using namespace std;

int calculaSum(int arr[],int n){
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];	
	}	

	return sum;
}
int main(){

	int n=5;
	int arr[]={1,2,3,4,5};

	cout<<calculaSum(arr,n);



}