#include "NodoDepartamento.h"

NodoDepartamento::NodoDepartamento(DepartamentoMedicos *dato) {
	
	this->setDato(dato);
	this->sig=NULL;
	
}

NodoDepartamento::~NodoDepartamento(){
	
}

void NodoDepartamento::setDato(DepartamentoMedicos *dato){
	this->dato=dato;
}

DepartamentoMedicos* NodoDepartamento::getDato(){
	return this->dato;
}

void NodoDepartamento::setSig(NodoDepartamento *sig){
	this->sig=sig;
}

NodoDepartamento *NodoDepartamento::getSig(){
	return this->sig;
}
