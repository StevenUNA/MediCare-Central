#include "ListaDepartamento.h"

ListaDepartamento::ListaDepartamento() {
	
	cabeza=actual=NULL;
	
}

ListaDepartamento::~ListaDepartamento(){
	while (cabeza!=NULL){
		this->actual=cabeza;
		cabeza=cabeza->getSig();
		delete actual;
	}
}

int ListaDepartamento::contar(){
	
	actual=cabeza;
	int cont=0;
	
	while (actual!=NULL){
		actual=actual->getSig();
		cont++;
		
	}
	return cont;
}

string ListaDepartamento::listaDepartamento( ){
	
	string cadena="";
	actual=cabeza;
	
	if (vacio() ){
		
		return "0";
	
	}
	
	else{
		while(actual!=NULL){
			
			cadena=cadena + actual->getDato()-> toString() + "\n";
			actual=actual->getSig();
		}
		return cadena;
	}
}
bool ListaDepartamento::vacio ( ) {
	
	return cabeza==NULL;
	
}

void ListaDepartamento::InsertarDepartamento (DepartamentoMedicos *dato){
	
	NodoDepartamento *aux=new NodoDepartamento (dato);
	
	if (vacio() ){
		cabeza=aux;
	}
	else{
		actual=cabeza;
		while (actual->getSig() !=NULL){
			actual=actual->getSig();
		}
		
		actual->setSig(aux);
	}
}
