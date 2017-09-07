#include <iostream>

using namespace std;


bool esBisiesto(int year){


	return  (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
   
}


int main(){

	 int a;

     cout<<"Ingresa anio"<<endl;
     cin>>a;

     cout<<esBisiesto(a);
     
	return 0;

}