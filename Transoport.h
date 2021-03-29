#pragma once

#include <iostream>
#include <string>


using namespace std;


class Transport {
private:
    char *name;
    int weight;
    int date;
public:
    Transport(void);

    Transport(char *pname, int w, int d);

    void SetWeight(int w);

    void Print();

    ~Transport(void);
};

class Auto : public Transport {

public:
    Auto() : Transport() {
    };

    Auto(char *pname, int w, int d) : Transport(pname, w, d) {
    };
};

class Gruz : public Transport {

public:
    Gruz(void) : Transport() {
    }

    Gruz(char *pname, int w, int d) : Transport(pname, w, d) {
    }
};

class Paroxod : public Transport {

public:
    Paroxod(void) : Transport() {
    }

    Paroxod(char *pname, int w, int d) : Transport(pname, w, d) {
    }
};

class Plane : public Transport {

public:
    Plane(void) : Transport() {
    };

    Plane(char *pname, int w, int d) : Transport(pname, w, d) {
    };
};