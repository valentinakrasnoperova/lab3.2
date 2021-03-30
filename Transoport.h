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

class Lorry : public Transport {

public:
    Lorry(void) : Transport() {
    }

    Lorry(char *pname, int w, int d) : Transport(pname, w, d) {
    }
};

class Steamboat : public Transport {

public:
    Steamboat(void) : Transport() {
    }

    Steamboat(char *pname, int w, int d) : Transport(pname, w, d) {
    }
};

class Plane : public Transport {

public:
    Plane(void) : Transport() {
    };

    Plane(char *pname, int w, int d) : Transport(pname, w, d) {
    };
};