#include "GestorFalta.h"
using namespace Controller;
using namespace System::IO;
using namespace System;

GestorFalta::GestorFalta() {
	ListaFalta = gcnew List<Falta^>();
}
void GestorFalta::LeerFaltadesdetxt(){
	this->ListaFalta->Clear(); //Limpia la lista 
	array<String^>^ lineas = File::ReadAllLines("Falta.txt");
	String^ Separador = ";";
	for each (String ^ Lineacontacto in lineas) {
		array<String^>^ datos = Lineacontacto->Split(Separador->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ Tipo = datos[1];
		Falta^ ObjFalta = gcnew Falta(codigo,Tipo);
		this->ListaFalta->Add(ObjFalta);
	}
}
int GestorFalta::obtenercantidaddefalta() {
	return this->ListaFalta->Count;
}
Falta^ GestorFalta::obtenerunfalta(int indice) {
	return this->ListaFalta[indice];
}
Falta^ GestorFalta::obtenerfaltaxcodigo(int codigo) {
	Falta^objfaltabuscada = nullptr;

	for (int i = 0; i < this->ListaFalta->Count; i++) {
		if (this->ListaFalta[i]->codigo == codigo) {
			objfaltabuscada = this->ListaFalta[i];
			break;
		}
	}
	return objfaltabuscada;
}

void GestorFalta::addfalta(Falta^ f) {
	this->ListaFalta->Add(f);
}

Falta^ GestorFalta::obtenerfaltaxtipo(String^ tipo) {
	Falta^ objfaltabuscada = nullptr;
	int c = 3;

	for (int i = 0; i < this->ListaFalta->Count; i++) {
		String^ A = this->ListaFalta[i]->Tipo;
		int c=String::Compare(A, tipo);
		if (c==0) {
			objfaltabuscada = this->ListaFalta[i];
			break;
		}
	}
	return objfaltabuscada;
}