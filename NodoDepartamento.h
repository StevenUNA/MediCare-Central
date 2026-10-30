#ifndef NODODEPARTAMENTO_H
#define NODODEPARTAMENTO_H
#include "DepartamentoMedicos.h"

class NodoDepartamento {
public:
	NodoDepartamento();
	
	NodoDepartamento(DepartamentoMedicos *dato);
	~NodoDepartamento();
	
	void setDato(DepartamentoMedicos *dato);
	DepartamentoMedicos *getDato();
	
	void setSig(NodoDepartamento *sig);
	NodoDepartamento *getSig();
	
private:
	DepartamentoMedicos *dato;
	NodoDepartamento *sig;
	
};

#endif

