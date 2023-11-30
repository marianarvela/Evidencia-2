
// Mariana Villareal
#include <iostream>
#include <cmath>
using namespace std;
class Triangulo {
private:
    double unox;
    double unoy;
    double dosx;
    double dosy;
    double tresx;
    double tresy;

public:
    Triangulo(double, double, double, double, double, double);
    void perimetro();
    void area();
};

Triangulo::Triangulo(double _unox, double _unoy, double _dosx, double _dosy, double _tresx, double _tresy) {
    unox = _unox;
    unoy = _unoy;
    dosx = _dosx;
    dosy = _dosy;
    tresx = _tresx;
    tresy = _tresy;
}

void Triangulo::perimetro() {
    double a = sqrt(pow(dosx - unox, 2) + pow(dosy - unoy, 2));
    double b = sqrt(pow(tresx - dosx, 2) + pow(tresy - dosy, 2));
    double c = sqrt(pow(unox - tresx, 2) + pow(unoy - tresy, 2));
    double p = a + b + c;
    cout << "Tu perimetro es " << p << endl;
}

void Triangulo::area() {
    double a = sqrt(pow(dosx - unox, 2) + pow(dosy - unoy, 2));
    double b = sqrt(pow(tresx - dosx, 2) + pow(tresy - dosy, 2));
    double c = sqrt(pow(unox - tresx, 2) + pow(unoy - tresy, 2));
    double s = (a + b + c) / 2;
    double total = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Tu area es " << total << endl;
}

int main() {
    Triangulo Triangulo1(0, 0, 50, 30, 25, 10);
    Triangulo1.perimetro();
    Triangulo1.area();

    return 0;
}
