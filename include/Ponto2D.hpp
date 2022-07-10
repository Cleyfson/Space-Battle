#ifndef PONTO2D_HPP
#define PONTO2D_HPP

#include <cmath>

class Ponto2D {
private:
    double _x;
    double _y;

public:
    Ponto2D(int x = 0, int y = 0);
    double calcular_distancia(const Ponto2D &ponto);
    void modify_position(double dx, double dy);
    void print_position();
};

#endif // !PONTO2D_HPP