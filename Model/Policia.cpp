#include "Policia.h"
#include "Persona.h"
using namespace Model;

Policia::Policia(String^ Usuario, int Password, String^ DNI, String^ Nombre, String^ ApPaterno, String^ ApMaterno, String^ DistritoVigila) {
	this->Usuario = Usuario;
	this->Password = Password;
	this->DNI=DNI;
	this->Nombre= Nombre;
	this->ApPaterno= ApPaterno;
	this->ApMaterno= ApMaterno;
	this->DistritoVigila = DistritoVigila;
	List< Civil^>^ Listaciviles=gcnew::List<Civil^>();
};
void Policia::IngresarInfracionaCivil(){

};
int Policia::VerRiesgodistrito(){
	return 0; 

};
int Policia::VerRiesgoCivil(){

	return 0;

};

int Policia::Vernumerodefaltas() {

	return 0;

};