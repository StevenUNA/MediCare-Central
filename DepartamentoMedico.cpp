#include "DepartamentosMedicos.h"

using namespace std;

DepartamentosMedicos::DepartamentosMedicos() {
	
	this->codigoArea= "";
	this->nombreEspecialidad= "";
	this->medicoJefe= "";
	this->ListaPaciente = new ListaPaciente();
	
}

DepartamentosMedicos::DepartamentosMedicos(string codigo,string especialidad,string Jefe){
	
	this->codigoArea=codigo;
	this->nombreEspecialidad=especialidad;
	this->medicoJefe=Jefe;
	this->ListaPacientes= new ListaPacientes();
	
}

DepartamentosMedicos::~DepartamentosMedicos(){
	
	if(this->ListaPacientes != nullptr){
		delete this->ListaPacientes;
		this->ListaPacientes=nullptr;
	}
	
}

void DepartamentosMedicos::setcodigoArea (string codigo) {
	this->codigoArea=codigo;
}

void DepartamentosMedicos::setnombreEspecialidad (string especialidad) {
	this->nombreEspecialidad=especialidad;
}

void DepartamentosMedicos::setmedicoJefe (string Jefe) {
	this->medicoJefe=Jefe;
}

string DepartamentosMedicos::getcodigoArea ( ) {
	return this->codigoArea;
}

string DepartamentosMedicos::getnombreEspecialidad ( ) {
	return this->nombreEspecialidad;
}

string DepartamentosMedicos::getmedicoJefe ( ) {
	return this->medicoJefe;
}

ListaPaciente * DepartamentosMedicos::getListaPaciente ( ) {
	return this->ListaPaciente;
}

