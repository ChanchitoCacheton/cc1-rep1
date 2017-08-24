//numero primo

#include <iostream>

using namespace std;

int main(){

	int numero;
	int indice;
	cout<<"ingrese un numero entero :"<<endl;
	cin>>numero;


	for (int i=1;i<(numero+1);i++){

		if(numero%i==0){

			indice++;
		}


	}


	if(indice!=2){

		cout<<"el numero no es primo"<<endl;
	}
		else
			cout<<"el numero es primo"<<endl;


	return 0;
}