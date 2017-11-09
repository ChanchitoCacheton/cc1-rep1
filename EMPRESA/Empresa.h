#pragma once

#define Empresa_H

#include <iostream>
#include <string>

#include "Empleado.h"

using namespace std;
enum Departamentos{ logistica,almacen,rrhh };
class Empresa{
	
	private:
		string nameEmp;

		int RUC;

	public:

		int nEmpleados;

		
		Empleado *arr=new Empleado[nEmpleados];

		Empresa();

		Empresa(string nameEmp,int RUC,int nEmpleados);


		
		void setNameEmp(string nameEmp);
		void setRUC(int RUC);



		int getNameEmp();
		int getRUC();

		void print();
		void agregarEmpleados();
		void aumentarsaldo();




};