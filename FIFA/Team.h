#pragma once

#define Team_H

#include <iostream>
#include <string>
#include "Player.h"

using namespace std;


class Team
{
	public:

		Player x;
		
		string Tname;

		Player **equipo=new Player*[11];

		Team();
		~Team();

		Team(string Tname);
		
		void insertaPlayer(Player x);

		void imprimeEquipo(); 


};