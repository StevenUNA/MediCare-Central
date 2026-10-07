#ifndef PACIENTE_H
#define PACIENTE_H

#include <iostream>
#include <sstream>
using namespace std;

class Paciente {
private:

string *cedula;
string *nombre;
int *nivelUrgencia;

public:
Paciente ();
Paciente (string *cedula, string *nombre, int *nivelUrgencia)

void setCedula(string *cedula);
void setNombre(string *nombre);
void setNivelUrgencia(int *nivelUrgencia);

string getCedula();
string getNombre();
int getNivelUrgencia();
string toString();

virtual ~Paciente();
};

#endif
