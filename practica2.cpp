#include <iostream>

using namespace std;

int calculaSum(int arr[],int n){
	//int sum;

	if(n==1){
		return arr[0];
	}
	else
		return arr[n-1] + calculaSum(arr,n-1);
		
}
int main(){

	int n=5;
	int arr[]={1,2,3,4,5};

	cout<<endl;
	cout<<"la suma de los elementos del arreglo: "<<calculaSum(arr,n)<<endl;



}