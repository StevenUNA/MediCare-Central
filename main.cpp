#include <iostream>
#include <string>
#include "GestorHospitalario.h"
#include "DepartamentoMedicos.h"
#include "Paciente.h"
#include "ExpedienteConsulta.h"

using namespace std;

int main() {

	GestorHospitalario gestor;
	cout << "==================================================" << endl;
	cout << "               MEDICARE CENTRAL   " << endl;
	cout << "==================================================" << endl;
	
	
	DepartamentoMedicos *dep1 = new DepartamentoMedicos("PED-01", "Pediatria", "Andrea Gomez");
	DepartamentoMedicos *dep2 = new DepartamentoMedicos("TRA-02", "Traumatologia", "Eduardo Perez");
	
	
	dep1->getListaPaciente()->insertarPaciente(new Paciente("10101", "Lucia Perez", 2));
	dep1->getListaPaciente()->insertarPaciente(new Paciente("10202", "Carlos Ruiz", 3));
	dep1->getListaPaciente()->insertarPaciente(new Paciente("10303", "Sofia Mora", 1));
	
	dep2->getListaPaciente()->insertarPaciente(new Paciente("20101", "Mateo Rojas", 4));
	dep2->getListaPaciente()->insertarPaciente(new Paciente("20202", "Valeria Soto", 2));
	dep2->getListaPaciente()->insertarPaciente(new Paciente("20303", "Andres Blanco", 5));
	
	
	gestor.registrarDepartamento(dep1);
	gestor.registrarDepartamento(dep2);
	cout << "Departamentos y listas de espera registrados en el gestor" << endl;
	
	
	Paciente *pacienteExpediente = new Paciente("10101", "Lucia Perez", 2);
	gestor.emitirExpediente("EXP-001", "Control pediatrico general. Sin complicaciones", "Acetaminofen 5ml c/8h", pacienteExpediente);
	cout << " Expediente de consulta emitido y guardado en la lista historica" << endl;
	
	
	cout << "\n----------------------------------------" << endl;
	cout << " RECORRIDOS Y REPORTES" << endl;
	cout << "------------------------------------------" << endl;
	

	gestor.imprimirPacientesDepartamento("PED-01");
	
	cout << endl;
	

	gestor.imprimirPacientesDepartamento("TRA-02");
	
	cout << "\n==================================================" << endl;
	cout << "           DEMOSTRACION FINAL      " << endl;
	cout << "==================================================" << endl;
	
	return 0;
}
