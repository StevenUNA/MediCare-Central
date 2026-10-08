#ifndef LISTAPACIENTE_H
#define LISTAPACIENTE_H
#include "NodoPaciente.h"
class listaPaciente {
public:
	listaPaciente();
	~listaPaciente();
	bool vacio(); 
	int contar(); 
	void insertar_X_nivelUrgencia (int nivelUrgencia, Paciente *dato); 
	string ListarPaciente();
	
private:
	NodoPaciente *cabeza, *actual;
	
};

#endif

