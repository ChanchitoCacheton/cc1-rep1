#include <iostream>

using namespace std;


void calculaFactorial(short num){

	long indice;


	cout<<"El factorial de ["<<num<<"] es : "<<endl;
	indice=1;

	for(; num>0;indice *= num--);
	cout<<indice<<endl;


}


int main(){


	short number;
	

	do{cout<<"ingrese un numero entero mayor que 0 a operar: "<<endl;
	cin>>number;}while(number<=0);
	
	calculaFactorial(number);
	
	return 0;
}