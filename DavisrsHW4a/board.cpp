#include "stdafx.h"
#include "board.h"
#include "card.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

//parameters
int numFaceDown;
int numRow, numCol;
int numCards;
card** grid;

board::board(){// default constructor of 4x4 16 cards
	numRow=4;
	numCol=4;
	grid = new card*[numRow];
	for(int i = 0; i < numRow; i++)
		grid[i] = new card[numCol];
	for (int i = 0; i < numRow; i++){
		for (int j = 0; j < numCol; j++)
			grid[i][j] = card();
	}
}
board::board(int size){// overload constructor of custom number of cards given number of cards in deck
	int x;
	x = static_cast <int> (sqrt(numCards));
	grid = new card*[numRow];
	for(int i = 0; i < numRow; i++)
		grid[i] = new card[numCol];
	for (int i = 0; i < numRow; i++){
		for (int j = 0; j < numCol; j++)
			grid[i][j] = card();
	}
}
board::board (board &p){ // copy constructor
    int numFaceDown;
	int numRow, numCol;
	card** grid;
	numFaceDown=p.getFaceDown();
	numRow=p.getRows();
	numCol=p.getCols();
	grid=p.grid;
}
board::~board(){//destructor
}
board & board::operator = (board &p){//overloaded assignment operator

}

//inspector methods
const int board::getRows(){// method for returning the number of rows of this board
	return numRow;
}
const int board::getCols(){// method for returning the number of columns of this board
	return numCol;
}
const int board::getFaceDown(){// method for returning the number of cards that are face down
}
const int board::getSize(){// method for returning the number of cards in the deck
	return numCards;
}
//mutator methods
void board::Deal(){//method for placing cards face down randomly on the board
}
//miscellaneous  methods
const void board::printBoard(){//displays the board... somehow
}
const void board::printAll(){//Shows the answer
}
void board::turnOver(int x, int y){// method for flipping a card in row x, col y
}
