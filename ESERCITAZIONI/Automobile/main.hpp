#include <iostream>
#include <string>
using namespace std;
class Automobile {
    protected:
        bool state = false;
        float speed = 0.0;
        string type;
    public:
        Automobile(string type) {
            this -> type = type;
        };
        // void setType(string t) {this -> type = t;};
        string getType() {return this -> type;};
        void setState(bool s) { this -> state = s;};
        bool getState() {return this -> state;};
        void Accelera(float v) { this -> speed += v;};
        void Decelera(float v) { this -> speed -= v;};
        float getSpeed() {return this -> speed;};
};