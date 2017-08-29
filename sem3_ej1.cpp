#include <iostream>
#include <math.h>

using namespace std;

int main(){

	int numero;

	cout<<" ingrese un numero entero : "<<endl;
	cin>>numero;

	float raiz= sqrt(numero);

	cout<<" El numero es : "<<numero<<endl;

	cout<<" La raiz del numero es : "<<raiz<<endl;


	if(raiz-int(raiz)!=0){

		cout<<" el numero no tiene raiz cuadrada exacta "<<endl;

	}
		else{
				if(int(raiz)%2==0){
					cout<<"El numero es multiplo de dos "<<endl;
				}
				else
					cout<<"El numero no es multiplo de dos"<<endl;

		}


	return 0;

}