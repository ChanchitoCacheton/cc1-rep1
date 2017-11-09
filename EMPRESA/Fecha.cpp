#include "Fecha.h"
#include <iostream>
#include <string>

using namespace std;

Fecha::Fecha(){

	dia=0;
	mes=0;
	anio=0;


}

Fecha::Fecha(int pd,int pm,int pa){
	
	dia=pd;
	mes=pm;
	anio=pa;
}


void Fecha::setDia(int pd){

	 dia=pd;

}
void Fecha::setMes(int pm){

	mes=pm;
}
void Fecha::setAnio(int pa){

	anio=pa;
}


int Fecha::setDia(){ return dia;}
int Fecha::setMes(){ return mes;}
int Fecha::setAnio(){ return anio;}

void Fecha::printFecha(){



	cout<<"la fecha indicada es :"<<endl;

	cout<<dia<<"/"<<mes<<"/"<<anio<<endl;



}