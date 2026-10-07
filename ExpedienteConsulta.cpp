#include "ExpedienteConsulta.h"

ExpedienteConsulta::ExpedienteConsulta() {
folio = new string();
diagnostico = new string();
recetaMedica = new string();
paciente = NULL;
}

ExpedienteConsulta::ExpedienteConsulta(string *folio, string *diagnostico, string *recetaMedica, Paciente *paciente) {
this -> folio = folio;
this -> diagnostico = diagnostico;
this -> recetaMedica = recetaMedica;
this -> paciente = paciente;
}

void ExpedienteConsulta::setFolio (string *folio) {this -> folio = folio;}
void ExpedienteConsulta::setDiagnostico (string *diagnostico) {this -> diagnostico = diagnostico;}
