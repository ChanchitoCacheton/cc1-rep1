#include "Empresa.h"

using namespace std;

Empresa::Empresa(){


	nameEmp="";
	RUC=000000;
	nEmpleados=0;


}

Empresa::~Empresa(){

			delete [] arr;
}

Empresa::Empresa(string pn ,int pr,int pnumemp){

	nameEmp=pn;

	RUC=pr;


	nEmpleados=pnumemp;
}

void Empresa::setNameEmp(pn){

	nameEmp=pn;


}
void setRUC(int pr){


	RUC=pr;
}


void Empresa::agregarEmpleados(){

	for (int i = 0; i < nEmpleados; ++i)
	{
		cin>>arr[i];
	}

}

void Empresa::aumentarsaldo(){


	for(int i= 0;i<nEmpleados;i++){

		arr[i]->setSalario(salario+salario*.10);



	}
}


int Empresa::getNameEmp(){ return nameEmp;}
int Empresa::getRUC(){ return RUC;}

void Empresa:print(){


	for (int i = 0; i < nEmpleados; ++i)
	{
		cout<<"la empresa : ["<<name<<"] posee :"<<endl;
		cout<<"RUC no. :"<<RUC<<endl;
		cout<<"total de empleados : "<<nEmpleados<<endl;

		cout<<"PERSONAL :"<<endl;
		cout<<"trabajador ["<<i<<"] :"<<endl;
		arr[i].printEmp();
	}

}


