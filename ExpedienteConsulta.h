#ifndef EXPEDIENTECONSULTA_H
#define EXPEDIENTECONSULTA_H

#include <iostream>
#include <sstream>
#include "Paciente.h"
using namespace std;

class ExpedienteConsulta {

private:

string *folio;
string *diagnostico;
string *recetaMedica;
Paciente *paciente

public:

ExpedienteConsulta();
ExpedienteConsulta(string *folio, string *diagnostico, string *recetaMedica, Paciente *paciente);

void setFolio(string *folio);
void setDiagnostico(string *diagnostico);
void setRecetaMedica(string *recetaMedica);
void setPaciente(Paciente *paciente);

string getFolio();
string getDiagnostico();
string getRecetaMedica();
Paciente* getPaciente();

string toString();

virtual ~ExpedienteConsulta();

};
#endif


}
