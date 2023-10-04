#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//░░▓▓

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

enum players {white, black};

char currentGame[8][8][8];
int currentPlayer = white;
char move[15];

bool gameOver = false;

void setUp(){
	memcpy(currentGame, Field, sizeof(Field));
}

void printField(char in[][8][8]){

	printf("\n  a b c d e f g h\n");

	for (int n = 1; n < 9; ++n){

		printf("%i ",9-n);

		for (int i = 0; i < 8; ++i){

			printf(in[n-1][i]);
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
	
	//fgets(move, 9, stdin);

}

void gameLoop(){
	while(!gameOver){
		printField(currentGame);
		getMove();
		changePlayer();
	}

}

int main(){
	
	//setUp();
	//printField(currentGame);
	//----------------------	
	//getMove();
	printf("black makes a move: \n");	
	fgets(move, sizeof(move), stdin);
	printf("test: %s \n", move);	
	fgets(move, sizeof(move), stdin);
	

	
	return 0;
}