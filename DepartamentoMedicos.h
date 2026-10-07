#ifndef DEPARTAMENTOSMEDICOS_H
#define DEPARTAMENTOSMEDICOS_H

#include "ListaPaciente.h"

#include <iostream>
#include <sstream>
using namespace std;

class DepartamentosMedicos {
public:
	DepartamentosMedicos();
	DepartamentosMedicos(string codigo,string especialidad,string Jefe);
	
	void setcodigoArea(string codigo);
	void setnombreEspecialidad(string especialidad);
	void  setmedicoJefe(string Jefe);
	
	string getcodigoArea();
	string getnombreEspecialidad();
	string getmedicoJefe();
	ListaPaciente* getListaPaciente();
	
	~DepartamentoMedicos();
private:
	string *codigoArea;
	string *nombreEspecialidad;
	string *medicoJefe;
	*ListaPacientes listaPacientes;
	
};

#endif

