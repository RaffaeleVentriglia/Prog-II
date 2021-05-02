#include <stdio.h>

char char_low_up(char);

int main(int argc, char *argv[]){
	//char t = *argv[1];
	char t;
	printf("Inserire il carattere: ");
	fflush(stdin);
	scanf("%c", &t);
	char_low_up(t);
	return 0;
}

char char_low_up(char t){
	int conv = 32;
	printf("Carattere convertito: %c\n", t^conv);
}