#ifndef NODOPACIENTE_H
#define NODOPACIENTE_H
#include "Paciente.h"
class NodoPaciente {
public:
	
	
	NodoPaciente (Paciente *dato);
	
	void setDato (Paciente *dato); 
	void setSig (NodoPaciente *Sig);
	
	Paciente *getDato(); 
	NodoPaciente *getSig(); 
	
	~NodoPaciente();
private:
	Paciente *dato;
	NodoPaciente *Sig;
};

#endif
