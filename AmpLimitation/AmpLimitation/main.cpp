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

    cout << "Calculate you limitation values to protect your speakers. \n \n \n";
    
    cout << "Enter power rating in Watts of your amplifier: \n";
    cin >> potenciaWatts;
    cout << endl;
    
    cout << "Enter the impedance (Z) at which the amplifier is working: \n";
    cin >> impedancia;
    cout << endl;
    
    vMax = sqrt(potenciaWatts*impedancia);
    cout << "Maximium voltage capacity: " << vMax << endl;
    cout << endl;
   
    
    cout << "Enter voltage gain in dB: ";
    cin >> gananciaVoltaje;
    cout << endl;
    
    //antilog = pow(10,gananciaVoltaje/20);
    //factorMultiplicacion = exp(antilog);
    factorMultiplicacion = pow(10,gananciaVoltaje/20);
    sensibilidad = vMax/factorMultiplicacion;
    
    dBuSensi = 20*log10(sensibilidad/0.775);
    
    cout << "Sensitivity: " << sensibilidad << "v \n";
    cout << "Limitation Threshold: " << dBuSensi << endl;
    cout << endl;
    cout << endl;
    
    
    return 0;
    
}
