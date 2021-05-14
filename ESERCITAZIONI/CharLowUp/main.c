#include <stdio.h>
#include <ctype.h>

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
	if(!isalpha(t)){
		return t;
	}
	return t^32;
}