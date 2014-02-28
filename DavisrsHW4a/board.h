//Class Board header:
#include "stdafx.h"
#include "card.h"
#include <iostream>

#pragma once

using namespace std;

class board{
	friend ostream &operator<<(ostream &out, const board c);//overloaded << output operator
public:
	board();// default constructor of 4x4 16 cards
	board(int size);// overload constructor of custom number of cards
	board (board &p); // copy constructor
	~board();//destructor
	board & operator = (board &p);//overloaded assignment operator

	//inspector methods
	const int getRows();// method for returning the number of rows of this board
	const int getCols();// method for returning the number of columns of this board
	const int getFaceDown();// method for returning the number of cards that are face down
	const int getSize();// method for returning the number of cards in the deck
	//mutator methods
	void Deal();//method for placing cards face down randomly on the board
	//miscellaneous  methods
	const void printBoard();//displays the board... somehow
	const void printAll();//Shows the answer
	void turnOver(int x, int y);// method for flipping a card in row x, col y

private:// data members
	int numFaceDown;
	int numRow, numCol;
	card** grid;
};