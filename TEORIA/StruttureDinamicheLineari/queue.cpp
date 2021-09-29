#include <iostream>
#include <queue>
using namespace std;

void showqueueReference(queue <int>&);
void showqueue(queue <int>);

int main(){
    queue <int> q;
    cout << "q.size(): " << q.size() << endl;
    if(q.empty()){
        cout << "Coda vuota" << endl;
    } else {
        cout << "Cosa non vuota" << endl;
    }
    q.push(10);
    cout << "q.push(10) ==> la coda q contiene: ";
    showqueue(q);
    q.push(20);
    cout << "q.push(20) ==> la coda q contiene: ";
    showqueue(q);
    q.push(30);
    cout << "q.push(30) ==> la coda q contiene: ";
    showqueue(q);

    return 0;
}

void showqueueReference(queue <int> &q){
    while(!q.empty()){
        cout << q.front() << "\t";
        q.pop();
    }
    cout << endl;
}

void showqueue(queue <int> q){
    while(!q.empty()){
        cout << q.front() << "\t";
        q.pop();
    }
    cout << endl;
}