#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "olive.c"

//░░▓▓, p-pawn ,r-rook ,k-knight ,b-bishop, 
//		K-King ,Q-Queen;
const char Field[8][8][8] = {
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
};
char blackPieces[8][8][8] = {
	{"r","k","b","Q","K","b","k","r"},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
};
char whitePieces[8][8][8] = {
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"","","","","","","",""},
	{"r","k","b","K","Q","b","k","r"},
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

void printField(char in[][8][8]){

	printf("\n  a b c d e f g h\n");

	for (int n = 1; n < 9; ++n){

		printf("%i ",9-n);

		for (int i = 0; i < 8; ++i){

			switch(strcmp( ,))
			printf(in[n-1][i]);///    <<<<----------###
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
