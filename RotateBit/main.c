#include <stdio.h>

char rotate(char, int);

int main(int argc, char *argv[]){
	int shift;
	char V;
	printf("Inserire la lettera: ");
	fflush(stdin);
	scanf("%c", &V);
	printf("Inserire i bit da voler shiftare: ");
	fflush(stdin);
	scanf("%d", &shift);
	printf("Prima della rotazione: %c\nDopo la rotazione: %c\n", V, rotate(V,shift));
	return 0;
}

char rotate(char character, int number){
	if(number > 0){
		char mask = character << (8 * sizeof(character) - number);
		character >>= number;
		character |= mask;
	} else if(number < 0){
		char mask = character >> (8 * sizeof(character) - number);
		character <<= number;
		character |= mask;
	}
	return character;
}
