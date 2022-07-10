#ifndef NAVE_HPP
#define NAVE_HPP

#include "Ponto2D.hpp"

class Nave {
private:
    Ponto2D _posicao;
    double _forca;
    double _energia;

public:
    Nave(Ponto2D posicao, double forca = 1);
    void mover(double dx, double dy);
    double calcular_distancia(Nave *nave);
    Nave *determinar_nave_mais_proxima(Nave **naves, int n);
    void atacar(Nave **naves, int n);
    void imprimir_status();
};

#endif // !NAVE_HPP