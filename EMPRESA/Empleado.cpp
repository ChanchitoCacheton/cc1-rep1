#include "Empleado.h"


using namespace std;

Empleado::Empleado(){

	name="";
	salario=0.0;


}

Empleado::Empleado(string pn,float ps,Fecha pi){


	name=pn;

	salario=ps;

	ingreso=pi;


}


void Empleado::setName(string pn){ name=pn;}
void Empleado::setSalario(float ps){ salario=ps;}
void Empleado::setFecha(Fecha pi){ ingreso=pi;}


int Empleado::getSalario(){ return salario;}

Fecha Empleado::getFecha(){ return ingreso;}

void Empleado::printEmp(){

	cout<<name<<endl;
	cout<<salario<<endl;
	printFecha();



}
