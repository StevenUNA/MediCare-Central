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
void ExpedienteConsulta::setRecetaMedica(string *recetaMedica) {this->recetaMedica = recetaMedica;}
void ExpedienteConsulta::setPaciente(Paciente *paciente) {this->paciente = paciente;}

string ExpedienteConsulta::getFolio() { return *folio; }
string ExpedienteConsulta::getDiagnostico() { return *diagnostico; }
string ExpedienteConsulta::getRecetaMedica() { return *recetaMedica; }
Paciente* ExpedienteConsulta::getPaciente() { return paciente; }


string ExpedienteConsulta::toString() {
    stringstream ss;
    ss << "==== Expediente de Consulta ====" << endl;
    ss << "Folio: " << *folio << endl;
    ss << "Diagnostico: " << *diagnostico << endl;
    ss << "Receta Medica: " << *recetaMedica << endl;
    
    if (paciente != NULL) {
        ss << "--- Paciente Atendido ---" << endl;
        ss << paciente->toString() << endl;
    } else {
        ss << "Paciente: No asignado" << endl;
    }
    
    return ss.str();
}


ExpedienteConsulta::~ExpedienteConsulta() {
    delete folio;
    delete diagnostico;
    delete recetaMedica;
}
