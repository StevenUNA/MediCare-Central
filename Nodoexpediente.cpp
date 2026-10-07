#include "NodoExpediente.h"

NodoExpediente::NodoExpediente(ExpedienteConsulta *dato) {
	
	this->setdato(dato);
	this->sig=NULL;
	
}

NodoExpediente::~NodoExpediente(){
	
}

void NodoExpediente::setdato(ExpedienteConsulta *dato){
	this->dato=dato;
}
ExpedienteConsulta* NodoExpediente::getdato(){
	return this->dato;
}


void NodoExpediente::setsig(NodoExpediente *sig){
	this->sig=sig;
}
NodoExpediente* NodoExpediente::getsig(){
	return this->sig;
}

