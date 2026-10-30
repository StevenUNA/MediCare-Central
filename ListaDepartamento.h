#ifndef LISTADEPARTAMENTO_H
#define LISTADEPARTAMENTO_H

#include "NodoDepartamento.h"

class ListaDepartamento {
	
public:
	
	ListaDepartamento();
	~ListaDepartamento();
	bool vacio();
	int contar();
	void InsertarDepartamento(DepartamentoMedicos *dato);
	
	string listaDepartamento();
	
private:
	
	NodoDepartamento *cabeza,*actual,*cola;
	
};

#endif

