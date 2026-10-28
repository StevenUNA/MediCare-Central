#ifndef GESTORHOSPITALARIO_H
#define GESTORHOSPITALARIO_H

#include <iostream>
#include <sstream>
#include "ListaDepartamentos.h"
#include "ListaExpedientes.h"
#include "DepartamentoMedico.h"
#include "Paciente.h"
#include "ExpedienteConsulta.h"

using namespace std;

class GestorHospitalario {
private:
ListaDepartamentos *departamentos;          
ListaExpedientes *expedientesHistoricos;    

public:
GestorHospitalario();
virtual ~GestorHospitalario();

   
void registrarDepartamento(DepartamentoMedico *dep);
void ingresarPacienteADepartamento(string codigoArea, Paciente *pac);
void emitirExpediente(string folio, string diagnostico, string recetaMedica, Paciente *pac);
void imprimirPacientesDepartamento(string codigoArea);


ListaDepartamentos* getDepartamentos();
ListaExpedientes* getExpedientesHistoricos();
};

#endif
