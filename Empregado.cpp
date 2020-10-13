#include <string>
#include "Empregado.hpp"

void Empregado::setSalarioHora(double _salarioHora) {
    salarioHora = _salarioHora;
    } 

void Empregado::setNome(std::string _nome) {
    nome = _nome;
    } 

double Empregado::getSalarioHora() {
    return salarioHora;
    }  

std::string Empregado::getNome() {
    return nome;
    } 

double Empregado::pagamentoMes(double horasTrabalhadas){	  
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    if (horasTrabalhadas > HORARIO_DIARIO_REGULAR) {
      double horasExtras = horasTrabalhadas - HORARIO_DIARIO_REGULAR;
      horasTrabalhadas += horasExtras * PESO_HORAS_EXTRA;
    }
	return horasTrabalhadas * salarioHora;
};
