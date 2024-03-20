#include "Falta.h"
using namespace Model;

Falta::Falta(int codigo,String^Tipo) {
	this->Tipo = Tipo;
	this->codigo = codigo;
}