#include <iostream>
#include <string>
using namespace std;

class Auto {
protected:
    bool state = false;
    float speed = 0.0;
    string type;
public:
    explicit Auto(string type);
    string getType();
    void setState(bool s);
    bool getState();
    void accelera(float v);
    void decelera(float v);
    void azzera();
    float getSpeed();
};

Auto::Auto(string type) {
    this -> type = std::move(type);
}

string Auto::getType() {
    return this -> type;
}

void Auto::setState(bool s) {
    this -> state = s;
}

bool Auto::getState() {
    return this -> state;
}

void Auto::accelera(float v) {
    this -> speed += v;
}

void Auto::decelera(float v) {
    this -> speed -= v;
}

void Auto::azzera(){
    this -> speed = 0;
}

float Auto::getSpeed() {
    return this -> speed;
}