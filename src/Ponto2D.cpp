#include "Ponto2D.hpp"
#include <iostream>

Ponto2D::Ponto2D(int x, int y) {
    this->_x = x;
    this->_y = y;
}

double Ponto2D::calcular_distancia(const Ponto2D &ponto) {
    double dx = pow((this->_x - ponto._x), 2);
    double dy = pow((this->_y - ponto._y), 2);
    return sqrt(dx + dy);
}

void Ponto2D::modify_position(double dx, double dy) {
    this->_x += dx;
    this->_y += dy;
}

void Ponto2D::print_position() {
    std::cout << this->_x << " " << this->_y << " ";
}
