#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <long> p = {1,5,8,10};
    int num;
    p.pop_back();
    p.push_back(25);
    p.push_back(16);
    for(auto n : p){
        cout << n << endl;
    }

    // utilizzo di cin all'interno del while
    while(cin >> num){
        p.push_back(num);
    } cin.clear();  // pulizia del buffer di input

    cout << p.max_size() << endl;
    return 0;
}