//
// Created by danie on 11/10/2022.
//

#ifndef EJERCICIO_POLIMORFISMO_SEMICIRCULO_H
#define EJERCICIO_POLIMORFISMO_SEMICIRCULO_H

#include "FiguraGeometrica.h"
#include <iostream>
#include <cmath>

class SemiCirculo: public FiguraGeometrica {
private:
    float radio;
public:

    SemiCirculo();
    virtual ~SemiCirculo() = default;
    SemiCirculo(double radioSemi);
    void dibujarFigura() override;
    float calcularArea() override;
    float calcularPerimetro() override;
};


#endif //EJERCICIO_POLIMORFISMO_SEMICIRCULO_H
