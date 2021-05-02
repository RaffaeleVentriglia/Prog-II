//mediante operatori bitwise scrivere una funzione in c per invertire
//i 4 bit più significativi, lasciando gli altri inalterati.
//char, short, una int qualsiasi. Visualizzare i bit degli operandi e del risultato

#include <stdio.h>

void funzione(int, char []);

union word {
    int x;
    short y[2];
    char z[4];
};

int main(){
	union word p;

	p.z[0] = 64;
	printf("CHAR: ");
	funzione(sizeof(char), p.z);

	p.y[0] = 32000;
	printf("SHORT: ");
	funzione(sizeof(short), p.z);

	p.x = 4026565840;
	printf("INT: ");
	funzione(sizeof(int), p.z);

	return 0;
}

void funzione(int len, char ch[]){
	//Creazione della mask
	unsigned char mask = 0;
	for(int i = 0; i < 4; i++){
		mask = mask << 1 | 1;
	}
	mask <<= 4;
	ch[len-1] ^= mask;

	//Estrazione dei bit
	short bit[32] = {0};
	for(int i = 0; i < len; i++){
		char c = ch[i];
		for(int j = 0; j < 8; j++){
			bit[j + 8 * i] = c & 1;
			c >>= 1;
		}
	}

	//Stampa i bit
	for(int i = 8 * len - 1; i >= 0; i--){
		(i % 4 == 0) ? printf("%1d ", bit[i]) : printf("%1d", bit[i]);
	}
	putchar('\n');
}