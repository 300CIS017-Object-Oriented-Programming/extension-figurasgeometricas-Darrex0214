//
// Created by danie on 11/10/2022.
//

#include "SemiCirculo.h"

SemiCirculo::SemiCirculo()
{
    radio = 0;
    nombreFigura = "SemiCirculo";
}

SemiCirculo::SemiCirculo(double radioSemi): SemiCirculo() {
    this->radio = radioSemi;
}

void SemiCirculo::dibujarFigura() {
    cout << nombreFigura;
    cout <<"\n";
    for(int i = 0; i <= 10; i++){
        for(int j = 0; j <= 5; j++){
            if(pow(j - 5, 2.0) + pow(i - 5, 2.0) <= pow(5, 2.0)){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}

float SemiCirculo::calcularArea() {
    area = (3.1416 * (radio*radio)) /2 ;
    return area;
}

float SemiCirculo::calcularPerimetro() {
    perimetro = ((2 * 3.1416 * radio)/2) + (2 * radio);
    return perimetro;
}