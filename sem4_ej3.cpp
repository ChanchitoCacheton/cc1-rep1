#include <iostream>
#include <math.h>
using namespace std;

void calculaPotencia(int num){


	int n1= num*2;
	int raiz= sqrt(n1);

	if(raiz%2==0){

		cout<<" el numero ["<<num<<"] es potencia de dos"<<endl;

	}
	else{
		cout<<" el numero ["<<num<<"] no es potencia de dos"<<endl;
	}
	

}

int main(){
	
	int numero;
	cout<<"ingrese un numero: "<<endl;
	cin>>numero;

	calculaPotencia(numero);

	return 0;
}