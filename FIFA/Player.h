#pragma once

#define _Player_H
#include <iostream>
#include <string>

using namespace std;

class Player{


	public:

	int num,aggro;
	string name,pos;

	Player();
	Player(string name, int number , string pos, int aggro);


	void setName(string name);
	void setNumber(int num);
	void setPosition(string pos);
	void setAggro(int aggro);

	void print();

};
