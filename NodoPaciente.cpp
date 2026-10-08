#include "NodoPaciente.h"


NodoPaciente::NodoPaciente (Paciente * dato) {
	this->setDato(dato);
	this->Sig=NULL;
}

void NodoPaciente::setDato (Paciente * dato) {
	this ->dato=dato; 
}

void NodoPaciente::setSig (NodoPaciente * Sig) {
	this ->Sig=Sig; 
}

Paciente * NodoPaciente::getDato ( ) {
	return this ->dato; 
}

NodoPaciente * NodoPaciente::getSig ( ) {
	return this ->Sig;
	
}

NodoPaciente::~NodoPaciente ( ) {
	delete dato;
}

