#include <iostream>
#include <stack>
#define MAX 5
using namespace std;

void showstack(stack <int>);
void showstackReference(stack <int> &);

int main(){
    stack <int> s;
    cout << "s.size(): " << s.size() << endl;
    if(s.empty()){
        cout << "Stack vuoto" << endl;
    } else {
        cout << "Stack non vuoto" << endl;
    }
    for(int i = 1; i <= MAX; i++){
        s.push(i);
    }
    if(!s.empty()){
        showstack(s);
        showstackReference(s);
    }
    cout << "s.size(): " << s.size() << endl;

    return 0;
}

void showstack(stack <int> s){
    while(!s.empty()){
        cout << s.top() << "\t";
        s.pop();
    }
    cout << endl;
}

void showstackReference(stack <int> &s){
    while(!s.empty()){
        cout << s.top() << "\t";
        s.pop();
    }
    cout << endl;
}