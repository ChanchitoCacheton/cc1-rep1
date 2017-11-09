
#pragma once


#define Empleado_H
#include <iostream>
#include <string>
#include "Fecha.h"

using namespace std;


class Empleado{
	
	private:

		string name;
		float salario;
		Fecha ingreso;

	public:	

		Empleado();

		Empleado(string name,float salario,Fecha ingreso);

		void setName(string name);
		void setSalario(float salario);
		void setFecha(Fecha ingreso);

		int getSalario();
		Fecha getFecha();



		void printEmp();





};