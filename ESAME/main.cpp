#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 5;
    int *p = new int(n);
    int *arr = new int[5];
    if(p == nullptr) 
        exit(1);
    else
        cout << "Allocazione avvenuta con successo" << endl;

    if(arr == nullptr) 
        exit(1);
    else
        cout << "Allocazione avvenuta con successo" << endl;

    delete p;
    delete arr;

    vector <int> v = {2,4,6,8};
    vector <vector<int>> v2 = { {1,2,3} , {4,5,6} };

    return 0;
}