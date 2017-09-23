#include <iostream>

using namespace std;

int sumPuntero(int *pa,int n){


	int sum=0;
	for(int i=0;i<n;i++){
		//pa=&arr[i];
		sum=sum + *(pa+i);
	}

	return sum;
}

int main(){
	int arr[3]={1,2,3};
	cout<<sumPuntero(arr,3)<<endl;
	
	return 0;
}