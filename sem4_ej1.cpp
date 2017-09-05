#include <iostream>

using namespace std;

int main(){


	short number;
	long indice;

	do{cout<<"ingrese un numero entero mayor que 0 a operar: "<<endl;
	cin>>number;}while(number<=0);
	cout<<"El factorial de ["<<number<<"] es : "<<endl;
	indice=1;

	for(; number>0;indice *= number--);
	cout<<indice<<endl;
	
	return 0;
}