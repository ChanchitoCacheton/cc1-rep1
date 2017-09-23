#include <iostream>

using namespace std;


int mystrlen(char *p){


	int len=0;

	for(;*p!='\0';p++){
		len++;
	}

	return len;

}

int def(char *s){

	char *p=s;
	while(*p='\0'){

		p++;

	}

	return p-s;

}
int main(){

	char cadena[]="ciencia";
	cout<<mystrlen(cadena)<<endl;




}