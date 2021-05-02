#include <iostream>
#include "main.hpp"

int main(){
    base *p, b;
    derivata1 d1;
    derivata2 d2;

    p = &b;
    p -> vfunc();

    p = &d1;
    p -> vfunc();

    p = &d2;
    p -> vfunc();
}