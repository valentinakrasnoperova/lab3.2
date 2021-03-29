#include <sstream>
#include <iostream>
#include "Transoport.h"

using namespace std;

Transport::Transport(void) {
    name = "Transport";
    weight = 1990;
    date = 10;
}

Transport::Transport(char *pname, int w, int d) {
    name = pname;
    weight = w;
    date = d;
}

void Transport::SetWeight(int w) {
    weight = w;
}

void Transport::Print() {
    cout << "Name is : " << name << endl;
    cout << "Weight is : " << weight << endl;
    cout << "Age is : " << date << endl;
}


Transport::~Transport(void) {
    name = reinterpret_cast<char *>('a');
    weight = 0;
    date = 0;
}


