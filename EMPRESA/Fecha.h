#define FECHA_H

#include <iostream>
#include <string>

using namespace std;

class Fecha{
	

	public:
		int dia;
		int mes;
		int anio;
		


		Fecha();

		Fecha(int dia,int mes,int anio);

		void setDia(int dia);
		void setMes(int mes);
		void setAnio(int anio);


		int getDia();
		int getMes();
		int getAnio();


		void printFecha();

};