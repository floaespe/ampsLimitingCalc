//
//  main.cpp
//  AmpLimitation
//
//  Created by Felipe Loáiciga Espeleta on 12/23/16.
//  Copyright © 2016 Felipe Loáiciga Espeleta. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <tgmath.h>
using namespace std;


int main() {
    
    double potenciaWatts, impedancia;
    double vMax, sensibilidad, factorMultiplicacion, gananciaVoltaje;
    double dBuSensi;

    cout << "Calculo de limitación para un altavoz \n \n \n";
    
    cout << "Indique la potencia en Watts del amplificador: \n";
    cin >> potenciaWatts;
    cout << endl;
    
    cout << "Indique la impedancia a la cual está trabajando el amplificador: \n";
    cin >> impedancia;
    cout << endl;
    
    vMax = sqrt(potenciaWatts*impedancia);
    cout << "Máxima capacidad de voltaje: " << vMax << endl;
    cout << endl;
   
    
    cout << "Indique la ganancia de voltaje en dB: ";
    cin >> gananciaVoltaje;
    cout << endl;
    
    //antilog = pow(10,gananciaVoltaje/20);
    //factorMultiplicacion = exp(antilog);
    factorMultiplicacion = pow(10,gananciaVoltaje/20);
    sensibilidad = vMax/factorMultiplicacion;
    
    dBuSensi = 20*log10(sensibilidad/0.775);
    
    cout << "Sensibilidad: " << sensibilidad << "v \n";
    cout << "Umbral limitación: " << dBuSensi << endl;
    cout << endl;
    cout << endl;
    
    
    return 0;
    
}
