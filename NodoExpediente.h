#ifndef NODOEXPEDIENTE_H
#define NODOEXPEDIENTE_H

#include "ExpedienteConsulta"

class NodoExpediente {
public:
	NodoExpediente();
	
	NodoExpediente(ExpedienteConsulta *dato);
	~NodoExpediente();
	
	void setdato(ExpedienteConsulta *dato);
	ExpedienteConsulta *getdato();
	
	void setsig(NodoExpediente *sig);
	NodoExpediente *sig;
	
private:
	ExpedienteConsulta *dato;
	NodoExpediente *sig;
};

#endif

