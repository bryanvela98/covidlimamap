#include "Infraccion.h"
using namespace Model;


Infraccion::Infraccion(int Condigo, String^ Fecha, String^ Distrito, Falta^ ObjFalta) {
	this->Fecha = Fecha;
	this->Codigo = Condigo;
	this->Distrito = Distrito;
	this->ObjFalta = ObjFalta;
};

