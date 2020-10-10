#include <string>
#include "Empregado.hpp"

//magical number
const double MESES_EM_ANO = 12;

class Vendedor : public Empregado {

  public:
    std::string nome;  	  
	
	double quotaTotalAnual() {
	  return quotaMensalVendas * MESES_EM_ANO;
	}
	
};
