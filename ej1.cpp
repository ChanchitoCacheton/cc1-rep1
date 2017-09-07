//numero primo

#include <iostream>

using namespace std;


void esPrimo(int num){

	int indice=0;

	for (int i=1;i<(num+1);i++){

		if(num%i==0){

			indice++;
		}


	}


	if(indice!=2){

		cout<<"el numero no es primo"<<endl;
	}
		else
			cout<<"el numero es primo"<<endl;



}


int main(){

	int numero;
	int indice;
	cout<<"ingrese un numero entero :"<<endl;
	cin>>numero;

	esPrimo(numero);


	return 0;
}