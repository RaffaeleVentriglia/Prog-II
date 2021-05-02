#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> p = {1,5,8,10};
    p.pop_back();
    p.push_back(25);
    p.push_back(16);
    for(auto n : p){
        cout << n << endl;
    }
    return 0;
}