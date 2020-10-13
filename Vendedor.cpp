#include <string>
#include "Empregado.hpp"

//magical number: constante do numero de meses que um ano possui
const double MESES_EM_ANO = 12;

class Vendedor : public Empregado {

  public:

	//Essa funçao seta a quota de vendas mensais   
	void setQuotaMensalVendas(double _quotaMensalVendas) {
	  quotaMensalVendas = _quotaMensalVendas;
	}

	//Essa funçao geta a quota de vendas mensais  
	double getQuotaMensalVendas() {
	  return quotaMensalVendas;
	}
 	  
	//Essa funçao retorna a quota total anual do vendedor
	double quotaTotalAnual() {
	  return getQuotaMensalVendas() * MESES_EM_ANO;
	}

	//Essa funçao printa as informações a respeito do nome, salario e projetos do vendedor
    void printSaida(double mesSalario) {
  	  std::cout << "Nome: " << getNome() << std::endl;
  	  std::cout << "Salario Mes: " << pagamentoMes(mesSalario) << std::endl;  
  	  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  	  std::cout << std::endl;
    }

  private:

	double quotaMensalVendas;

};
