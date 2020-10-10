#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {

  public:

    //Essa funçao seta o numero de projetos do engenheiro
    void setProjetos(int _projetos) {

      projetos = _projetos;

    }

    //Essa funçao geta o numero de projetos do engenheiro
    int getProjetos() {

      return projetos;

    }
  
    //Essa funçao printa as informações a respeito do nome, salario e projetos do engenheiro
    void printSaida(double mesSalario) {

      std::cout << "Nome: " << getNome() << std::endl;
      std::cout << "Salario Mes: " << pagamentoMes(mesSalario) << std::endl;
      std::cout << "Projetos: " << getProjetos() << std::endl;
      std::cout << std::endl;

    }

  private: 

	  int projetos;
	
};
