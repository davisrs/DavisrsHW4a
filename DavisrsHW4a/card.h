//Class Card header:
#include "stdafx.h"
#pragma once

using namespace std;

class card{
public:
	card();// default constructor --position(0,0) face down, number 0 on its face
	card (card &p); // copy constructor
	card & operator = (card &p);//overloaded assignment operator
	void setPosition(int x, int y);//method for setting card position on grid
	//inspector methods
	const int get_row();// method for returning the row of this card
	const int get_col();// method for returning the column of this card
	const int myNumber();//method for returning the number on the face of the card
	//mutator methods
	void putNumber(int n);//method for setting number value of card
	void turnover();// method for flipping a card bool
	//miscellaneous  methods
	const void display();// method to display the number on the card's face	

private:// data members
	bool faceUp;
	int value, row, col;
};