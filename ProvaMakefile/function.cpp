#include "header.h"

void algoritmi(int choice){
	switch(choice){
		case 1:
			int n, j, el_da_ins;
			int arr[100];
			cout << "Questo algoritmo ha bisogno di un array da poter ordinare" << endl;
			cout << "Numero di  elementi che si vogliono inserire: ";
			cin >> n;
			for(int i = 0; i < n; i++){
				cout <<"Inserisci elemento: ";
				cin >> arr[i];
			}
			for(int i = 1; i < n; i++){
				el_da_ins = arr[i];
				j = i - 1;
				while(j >= 0 && el_da_ins < arr[j]){
					arr[j + 1] = arr[j];
					j--;
				}
				arr[j + 1] = el_da_ins;
			}
			for(int i = 0; i < n; i++)
				cout << arr[i] << endl;
			break;
		default:
			cout << "Numero inesistente, sei un coglione" << endl;
			break;
	}
}
