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
    void setSalarioHora(double _salarioHora);

    //Essa funçao seta o nome do empregado
    void setNome(std::string _nome);

    //Essa funçao geta o salario por hora trabalhada
    double getSalarioHora();

    //Essa funçao seta o nome do empregado
    std::string getNome();

    //essa funçao retorna o salario do empregado
    double pagamentoMes(double horasTrabalhadas);

  private:

  double salarioHora;   
  std::string nome;  
	
};

#endif
