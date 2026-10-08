#include "listaPaciente.h"

listaPaciente::listaPaciente() {
	cabeza=actual=NULL;
}

listaPaciente::~listaPaciente() {
	while (cabeza!=NULL){
		this->actual=cabeza;
		cabeza=cabeza->getSig();
		delete actual;
	}
	
}


bool listaPaciente::vacio ( ) {
	return cabeza==NULL;
	
}

int listaPaciente::contar ( ) {
	actual=cabeza;
	int cont=0;
	while (actual!=NULL) {
		actual=actual->getSig();
		cont++;
	}
	return cont;
}

void listaPaciente::insertar_X_nivelUrgencia (int nivelUrgencia , Paciente * dato) {
	NodoPaciente *nuevo = new NodoPaciente(dato);
	
	if (vacio() || nivelUrgencia < cabeza->getDato()->getNivelUrgencia()) {
		nuevo->setSig(cabeza);
		cabeza = nuevo;
		cout << "Inserción exitosa\n";
	}
	

	actual = cabeza;
	
	while (actual->getSig() != NULL && actual->getSig()->getDato()->getNivelUrgencia() <= nivelUrgencia) {
		actual = actual->getSig();
	}
	
	nuevo->setSig(actual->getSig()); 
	
	actual->setSig(nuevo);
	
	cout << "Inserción exitosa\n";
}

string listaPaciente::ListarPaciente ( ) {
	string cadena="";
	actual=cabeza; 
	if(vacio()){
		return "0";  
	}
	else{
		//cadena="";
		while(actual!=NULL){  
			cadena=cadena + actual->getDato()-> toString() + "\n"; 
			actual=actual->getSig(); 
		}
		return cadena; 
	}
}

