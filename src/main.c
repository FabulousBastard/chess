#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "olive.c"

//░▓, p-pawn ,r-rook ,k-knight ,b-bishop, 
//		K-King ,Q-Queen;

enum pieces {wp = 10, wr, wk, wb, wK, wQ};

const char Field[8][8] = {
	{"▓","░","▓","░","▓","░","▓","░"},
	{"░","▓","░","▓","░","▓","░","▓"},
	{"▓","░","▓","░","▓","░","▓","░"},
	{"░","▓","░","▓","░","▓","░","▓"},
	{"▓","░","▓","░","▓","░","▓","░"},
	{"░","▓","░","▓","░","▓","░","▓"},
	{"▓","░","▓","░","▓","░","▓","░"},
	{"░","▓","░","▓","░","▓","░","▓"},
};
int pieces[8][8][8] = {
	{rook,knight,bishop,Queen,King,bishop,knight,rook},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0},
	{wp,wp,wp,wp,wp,wp,wp,wp},
	{wr,wk,wb,wK,wQ,wb,wk,wr},
};

};
char currentGame[8][8][8];

enum players {white, black};

int currentPlayer = white;

char moveFrom[2];
char moveTo[2];



bool gameOver = false;

void setUp(){
	memcpy(currentGame, Field, sizeof(Field));
}

void printField(char in[8][8][8]){

	printf("\n  a b c d e f g h\n");

	for (int y = 1; y < 9; ++y){

		printf("%i ",9-y);

		for (int x = 0; x < 8; ++x){

			switch(blackPieces){
				case
			}
			printf(in[y-1][x]);///    <<<<----------###
		}
		printf("\n");
	} 
}

void changePlayer(){
	switch(currentPlayer){

		case 0:
			currentPlayer = 1;
			break;
		case 1:
			currentPlayer = 0;
			break;
	}
}


void getMove(){
	if (currentPlayer == white)
	{
		printf("white makes a move: \n");	
	}else if(currentPlayer == black){
		printf("black makes a move: \n");	
	}
	
	fgets(moveFrom, 2, stdin);

	printf(" to: ");

	fgets(moveTo, 2, stdin);
}

void makeMove(){
	/* 1.check if (from) contains a piece and that it is friendly, if yes = continue;
	   2.replace (from) with a square from Field;
	   3.check if (to) has a enemy piece, if yes = kill it, if friendly piece = illegal move;
	   4.put (from) piece at (to) square;
	*/
}

void gameLoop(){
	while(!gameOver){
		printField(currentGame);
		getMove();
		changePlayer();
	}

}

int main(){
	
	setUp();
	gameLoop();
	//----------------------	
	
	

	
	return 0;
}
