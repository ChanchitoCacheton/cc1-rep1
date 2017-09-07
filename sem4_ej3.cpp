#include <iostream>
#include <math.h>
using namespace std;

bool calculaPotencia(int num){


	int n1= num*2;
	int raiz= sqrt(n1);

	if(raiz%2==0){

		return true;

	}
	return false;
	

}

int main(){
	
	int numero;
	cout<<"ingrese un numero: "<<endl;
	cin>>numero;

	cout<<calculaPotencia(numero);

	return 0;
}