#include "Civil.h"
#include"Infraccion.h"
using namespace Model;

Civil::Civil(String^ DNI, String^ Nombre, String^ ApPaterno, String^ ApMaterno,int codigoinfraciion,Infraccion^objInfraccion,int cp) {
	this->DNI = DNI;
	this->Nombre = Nombre;
	this->ApPaterno = ApPaterno;
	this->ApMaterno = ApMaterno;
	this->codigoinfraciion = codigoinfraciion;
	this->objInfraccion = objInfraccion;
	this->cp = cp;
};
Civil::Civil(String^ DNI, String^ Nombre, String^ ApPaterno, String^ ApMaterno, int codigoinfraciion, Infraccion^ objInfraccion) {
	this->DNI = DNI;
	this->Nombre = Nombre;
	this->ApPaterno = ApPaterno;
	this->ApMaterno = ApMaterno;
	this->codigoinfraciion = codigoinfraciion;
	this->objInfraccion = objInfraccion;
	this->cp = cp;
};

int Civil::Verriesgodistrito() {
	return 0;
};
int Civil::verRiesgoCivil() {
	return 0;
};
int Civil::CalcularGradoderiesgo(int Peligrosidad) {
	return 0;
};