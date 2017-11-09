#include <iostream>
#include <string>
#include "Player.h"
#include "Team.h"
using namespace std;

int main(){

	Player a("Gallese",1,"portero",8);
	Player b("Guerrero",10,"delantero",10);
	b.print();
	a.print();

	Team x("Los mancos");

	x.insertaPlayer(a);
	x.insertaPlayer(b);
	x.imprimeEquipo();



	return 0;
}