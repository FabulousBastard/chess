#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

//░░▓▓
char test;

const char Field[][8][8] = {
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
	{"▓▓","░░","▓▓","░░","▓▓","░░","▓▓","░░"},
	{"░░","▓▓","░░","▓▓","░░","▓▓","░░","▓▓"},
};

char currentGame[8][8][8];
char currentMove[5] = "white";
char move[56];

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

void getMove(){
	printf("%s makes a move: \n", currentMove);
	//fgets(currentMove, 5, stdin);
}

void gameLoop(){
	while(!gameOver){
		printField(currentGame);
		getMove();
	}

}

int main(){
	
	setUp();
	//gameLoop();
	printField(currentGame);	
	getMove();
	printf("%s",currentMove);

	return 0;
}