#include "Paciente.h"

Paciente::Paciente() {
cedula = new string();
nombre = new string();
nivelUrgencia = new int();
}

Paciente::Paciente(string *cedula, string *nombre, int *nivelUrgencia){
  this -> cedula = cedula;
  this -> nombre = nombre;
  this -> nivelUrgencia = nivelUrgencia;
}

void Paciente::setCedula(string *cedula) {this -> cedula = cedula;}
void Paciente::setNombre(string *nombre) {this -> nombre = nombre;}
void Paciente::setNivelUrgencia(int *nivelUrgencia) {this -> nivelUrgencia = nivelUrgencia;}

string Paciente::getCedula() { return *cedula; }
string Paciente::getNombre() { return *nombre; }
int Paciente::getNivelUrgencia() { return *nivelUrgencia; }

string Paciente::toString(){
  stringstream ss;
ss << "==== Informacion del paciente ====" << endl;
	ss << "Cedula: " << *cedula << endl;
	ss << "Nombre: " << *nombre << endl;
	ss << "Nivel de Urgencia: " << *nivelUrgencia << endl;

	return ss.str();
}

Paciente::~Paciente() {
delete cedula;
delete nombre;
delete nivelUrgencia;
}

