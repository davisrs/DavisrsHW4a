#include "stdafx.h"
#include "card.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//parameters
bool faceUp;
int value, row, col;

card::card(){// default constructor --position(0,0) face down, number 0 on its face
	faceUp=false;
	value=0;
	row=col=0;
}
void card::setPosition(int x, int y){//method for setting card position on grid
	row=x;
	col=y;
}

//inspector methods
const int card::get_row(){// method for returning the row of this card
	return row;
}
const int card::get_col(){// method for returning the column of this card
	return col;
}

//mutator methods
const int card::myNumber(){//method for returning the number on the face of the card
	return value;
}

//miscellaneous  methods
const void card::display(){// method to display the number on the card's face
}
void card::putNumber(int n){//method for setting number value of card
}
void card::turnover(){
	if (faceUp=true){
		faceUp=false;}
	else
	{
		faceUp=true;
	}
}

card::card (card &p){// copy constructor
	// copy constructor
	int row = p.get_row();
	int col = p.get_col();
	int value = p.myNumber();
	p.setPosition(row, col);
}
card & card::operator = (card &p){//overloaded assignment operator
	// overloading of =
	return card(p);
}
