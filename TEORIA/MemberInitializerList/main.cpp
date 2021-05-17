#include <iostream>
using namespace std;

class Complex {
    double Reale;
    double Immaginaria;
    public:
        Complex() : Reale(0), Immaginaria(0){};
        Complex(double, double);
        Complex(Complex &z);

        double getReal() { return this -> Reale; };
        double getImag() { return this -> Immaginaria; };
};

Complex::Complex(double a, double b) : Reale(a), Immaginaria(b){};
Complex::Complex(Complex &z) : Reale(z.Reale), Immaginaria(z.Immaginaria){};


class point {
    int x;
    int y;
    public:
        point(int i = 0, int j = 0) : x(i), y(j){};
        int getX() const {return x;}
        int getY() const {return y;}
};

int main(){
    Complex z1;
    cout << "z1: " << z1.getReal() << " + i*" << z1.getImag() << endl;
    Complex z2(1.5, 3.5);
    cout << "z2: " << z2.getReal() << " + i*" << z2.getImag() << endl;
    Complex z3(z2);
    cout << "z3: " << z3.getReal() << " + i*" << z3.getImag() << endl;


    point t0;
    cout << "x: " << t0.getX() << " y: " << t0.getY() << endl;
    point t1(10);
    cout << "x: " << t1.getX() << " y: " << t1.getY() << endl;
    point t2(10, 15);
    cout << "x: " << t2.getX() << " y: " << t2.getY() << endl;
    return 0;
}