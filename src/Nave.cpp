#include "Nave.hpp"
#include <iostream>

Nave::Nave(Ponto2D posicao, double forca) {
    this->_posicao = posicao;
    this->_forca = forca;
    this->_energia = 100;
}

void Nave::mover(double dx, double dy) {
    this->_posicao.modify_position(dx, dy);
}

double Nave::calcular_distancia(Nave *nave) {
    return this->_posicao.calcular_distancia(nave->_posicao);
}

Nave *Nave::determinar_nave_mais_proxima(Nave **naves, int n) {
    double distance = 999999;
    int position = 0;

    for (int i = 0; i < n; i++) {
        if (this->calcular_distancia(naves[i]) < distance && this->calcular_distancia(naves[i]) != 0) {
            distance = this->calcular_distancia(naves[i]);
            position = i;
        }
    }

    return naves[position];
}

void Nave::atacar(Nave **naves, int n) {
    Nave *atacada = this->determinar_nave_mais_proxima(naves, n);
    double distance = this->calcular_distancia(atacada);
    double dano = (100 / distance) * this->_forca;

    if (dano > 30) {
        atacada->_energia -= 30;
    } else {
        atacada->_energia -= dano;
    }

    if (atacada->_energia <= 50) {
        std::cout << "Energia baixa!" << std::endl;
    }
}

void Nave::imprimir_status() {
    this->_posicao.print_position();
    std::cout << this->_energia << std::endl;
}