#include <iostream>
#include <string>

#include "Team.h"

using namespace std;

Team::Team(){

	Tname="";
	

}

Team::~Team(){

	for (int i = 0; i < 11; ++i)
	{
		delete []equipo[i];	}
	delete []equipo;

}

Team::Team(string pname){

	Tname=pname;



	
}

void Team::insertaPlayer(Player x){

	

	for (int i = 0; i < 11; ++i)
	{
		equipo[i]=&x;
	}

}

void Team::imprimeEquipo(){


	cout<<"Los integrantes del equipo ["<<Tname<<"] son:"<<endl;

	for (int i = 0; i < 11; ++i)
	{
		equipo[i]->print();

	}



}
