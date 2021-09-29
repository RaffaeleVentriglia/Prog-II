/*
    Gli articoli venduti da un negozio sono caratterizzati da un codice a barre,
    una descrizione e un prezzo unitario.
    Scrivere una classe Articolo adatta a memorizzare tali informazioni,
    includendo opportuni costruttori e metodi di accesso alle informazioni
    (dal codice a barre).
    Il negozio desidera suddividere gli articoli in alimentari e non alimentari.
    Agli articoli alimentari è associato un anno di scadenza, a quelli non
    alimentari il materiale principale di cui sono fatti.
    Definire inoltre un metodo sconta() che
    • sconti l’articolo del 5% se il cliente possiede la tessera fedeltà;
    • agli articoli alimentari, applichi lo sconto del 20% se l’anno di scadenza
    coincide con quello attuale;
    • agli articoli non alimentari, applichi lo sconto del 10% se il materiale è
    riciclabile (vetro, carta o plastica).
    Realizzare un programma che simuli la produzione dello scontrino della
    spesa di un cliente, chiedendo l’inserimento da tastiera di 3 articoli
    alimentari e 2 articoli non alimentari, calcoli il loro prezzo unitario
    (eventualmente scontato) e l’importo totale da pagare.
*/

#include "main.hpp"

int main(){

    string codice;
    string descrizione;
    float prezzo;
    //nonAlimentari n1;
    alimentari a1;

    cout << "Inserire codice a barre: ";
    getline(cin, codice);
    cout << "Inserire descrizione prodotto (vetro, plastica, carta o altro materiale): ";
    getline(cin, descrizione);
    cout << "Inserire il prezzo: ";
    cin >> prezzo;
    a1.setInfo(codice, descrizione, prezzo);
    a1.getInfo();
    return 0;
}