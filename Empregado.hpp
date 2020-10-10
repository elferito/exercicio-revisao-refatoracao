#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

//magical number
const double HORARIO_DIARIO_REGULAR = 8;
const double PESO_HORAS_EXTRA = 0.5;

class Empregado {
  public: 

    double salarioHora;  
    double quotaMensalVendas;  

    double pagamentoMes(double horasTrabalhadas) {
 
      double _horasTrabalhadas = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORARIO_DIARIO_REGULAR) {
        double horasExtras = horasTrabalhadas - HORARIO_DIARIO_REGULAR;
        _horasTrabalhadas += horasExtras * PESO_HORAS_EXTRA;
      }
	    return _horasTrabalhadas * salarioHora;
    }
	
};

#endif
