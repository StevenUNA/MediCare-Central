#include "GestorHospitalario.h"


GestorHospitalario::GestorHospitalario() {
departamentos = new ListaDepartamentos();
expedientesHistoricos = new ListaExpedientes();
}


GestorHospitalario::~GestorHospitalario() {
delete departamentos;
delete expedientesHistoricos;
}


void GestorHospitalario::registrarDepartamento(DepartamentoMedico *dep) {
if (departamentos != NULL) {
departamentos->insertarDepartamento(dep);
}
}


void GestorHospitalario::ingresarPacienteADepartamento(string codigoArea, Paciente *pac) {
if (departamentos != NULL) {
DepartamentoMedico *dep = departamentos->buscarDepartamento(codigoArea);
if (dep != NULL && dep->getListaPacientes() != NULL) {
dep->getListaPacientes()->insertarPaciente(pac);
} else {
cout << "Error: No se pudo encontrar el departamento con codigo " << codigoArea << endl;
}
}
}


void GestorHospitalario::emitirExpediente(string folio, string diagnostico, string recetaMedica, Paciente *pac) {
ExpedienteConsulta *nuevoExpediente = new ExpedienteConsulta(
new string(folio),
new string(diagnostico),
new string(recetaMedica),
pac
);
    
if (expedientesHistoricos != NULL) {
expedientesHistoricos->insertarExpediente(nuevoExpediente);
}
}


void GestorHospitalario::imprimirPacientesDepartamento(string codigoArea) {
if (departamentos != NULL) {
DepartamentoMedico *dep = departamentos->buscarDepartamento(codigoArea);
if (dep != NULL) {
cout << "=========================================" << endl;
cout << " Departamento: " << dep->getNombreEspecialidad() << " (Area: " << dep->getCodigoArea() << ")" << endl;
cout << " Medico Jefe: " << dep->getMedicoJefe() << endl;
cout << "=========================================" << endl;
            
if (dep->getListaPacientes() != NULL) {
cout << dep->getListaPacientes()->ListarPacientes() << endl;
}
} else {
cout << "Departamento no encontrado en el sistema." << endl;
}
}
}



ListaDepartamentos* GestorHospitalario::getDepartamentos() {
return departamentos;
}

ListaExpedientes* GestorHospitalario::getExpedientesHistoricos() {
return expedientesHistoricos;
}
