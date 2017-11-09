#include "Player.h"
#include <iostream>
#include <string>

using namespace std;

Player::Player(){

	name="";
	pos="";
	num=0;
	aggro=0;


}

Player::Player(string pn,int pnum,string ppos,int pa){

	name=pn;
	num=pnum;
	pos=ppos;
	aggro=pa;

}

void Player::setName(string pn){ name=pn;}

void Player::setNumber(int pnum){ num=pnum;}

void Player::setPosition(string ppos){ pos=ppos;}

void Player::setAggro(int pa){ aggro=pa;}

void Player::print(){ 

	cout<<name<<endl;
	cout<<num<<endl;
	cout<<pos<<endl;
	cout<<aggro<<endl;

 }