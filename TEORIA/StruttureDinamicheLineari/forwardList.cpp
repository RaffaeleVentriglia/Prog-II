#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;

void showForwardList(forward_list <int>);

int main(){
    forward_list <int> flist;
    forward_list <int>::iterator it;  // iteratore sulla lista

    if(flist.empty())
        cout << "Lista vuota" << endl;
    else
        cout << "Lista non vuota" << endl;
    flist.push_front(10);
    cout << "La lista contiene: ";
    showForwardList(flist);
    flist.push_front(20);
    cout << "La lista contiene: ";
    showForwardList(flist);
    flist.push_front(30);
    cout << "La lista contiene: ";
    showForwardList(flist);

    it = flist.insert_after(flist.begin(), {1,3,5,7});
    cout << "La lista contiene: ";
    showForwardList(flist);

    cout << "*it: " << *it << endl;
    it = flist.insert_after(it, 7);
    cout << "La lista contiene: ";
    showForwardList(flist);

    it = flist.begin();
    advance(it, 3);
    cout << "*it: " << *it << endl;
    
    it = flist.insert_after(it, 9);
    cout << "La lista contiene: ";
    showForwardList(flist);
    cout << "*it: " << *it << endl;

    flist.pop_front();
    cout << "La lista contiene: ";
    showForwardList(flist);

    it = flist.begin();
    cout << "*it: " << *it << endl;
    flist.erase_after(it, flist.end());
    cout << "La lista contiene: ";
    showForwardList(flist);
    return 0;
}

void showForwardList(forward_list <int> flist){
    for(int &r : flist){
        cout << r <<"\t";
    } cout << endl;
}