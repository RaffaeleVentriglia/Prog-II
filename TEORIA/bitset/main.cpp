#include <iostream>
#include <bitset>
using namespace std;

int main(){
	bitset <8> A = 'A', a = 'a', B = 'B', b = 'b', r;
	bitset <8> Bits; 
	cout << "Bits: " << Bits << endl;
	Bits.set (4); 
	cout << "Bits: " << Bits << endl;
	Bits.set (); 
	cout << "Bits: " << Bits << endl;
	Bits.flip (3); 
	cout << "Bits: " << Bits << endl;
	Bits.flip (); 
	cout << "Bits: " << Bits << endl;

	int I = (int) Bits.to_ulong();
	cout << "I = Bits: " << I << endl;

	r = A^a;
	cout << "A^a: " << r << endl;
	cout << "Dec: " << r.to_ulong() << endl;

	r = A&B;
	cout << "A&B: " << r << endl;
	cout << "Dec: " << r.to_ulong() << endl;

	r = A << 2;
	cout << "Dec: " << r.to_ulong() << endl;

	r = a >> 3;
	cout << "Dec: " << r.to_ulong() << endl;

	cout << "r.size() : " << r.size() << endl;
	cout << "r.count() : " << r.count() << endl;

	return 0;
}
