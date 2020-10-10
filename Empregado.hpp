#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

//magical number: horas diarias regulares de trabalho e o peso das horas extras respectivamente
const double HORARIO_DIARIO_REGULAR = 8;
const double PESO_HORAS_EXTRA = 0.5;

class Empregado {
  public: 

    //Essa funçao seta o salario por hora trabalhada
    void setSalarioHora(double _salarioHora) {

      salarioHora = _salarioHora;

    } 

    //Essa funçao seta o nome do empregado
    void setNome(std::string _nome) {

      nome = _nome;

    } 

    //Essa funçao geta o salario por hora trabalhada
    double getSalarioHora() {

      return salarioHora;

    }  

    //Essa funçao seta o nome do empregado
    std::string getNome() {

      return nome;

    } 

    //essa funçao retorna o salario do empregado
    double pagamentoMes(double horasTrabalhadas) {
 
      double _horasTrabalhadas = horasTrabalhadas;
	  
	    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HORARIO_DIARIO_REGULAR) {
        double horasExtras = horasTrabalhadas - HORARIO_DIARIO_REGULAR;
        _horasTrabalhadas += horasExtras * PESO_HORAS_EXTRA;
      }
	    return _horasTrabalhadas * salarioHora;
    }

  private:

  double salarioHora;   
  std::string nome;  
	
};

#endif
