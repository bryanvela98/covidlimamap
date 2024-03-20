#include "GestorPolicia.h"
#include "GestorCivil.h"

using namespace Controller;
using namespace System::IO;
using namespace System;

GestorPolicia::GestorPolicia() {
	ListaPolicia = gcnew List<Policia^>();
	ListaBuscada3 = gcnew List<Civil^>();
}

void GestorPolicia::Leerpoliciasdesdetxt() {
	this->ListaPolicia->Clear(); //Limpia la lista 
	array<String^>^ lineas = File::ReadAllLines("Policias.txt");
	String^ Separador = ";";
	for each (String ^ Lineacontacto in lineas) {
		array<String^>^datos=Lineacontacto->Split(Separador->ToCharArray());
		String^ Usuario = datos[0];
		int Password = Convert::ToInt32(datos[1]);
		String^ DNI = datos[2];
		String^ Nombre = datos[3];
		String^ ApPaterno = datos[4];
		String^ ApMaterno = datos[5];
		String^ DistritoVigila = datos[6];
		Policia^ ObjPolicia = gcnew Policia( Usuario, Password, DNI, Nombre,  ApPaterno,  ApMaterno,  DistritoVigila);
		this->ListaPolicia->Add(ObjPolicia);
	}
}
int  GestorPolicia::obtenercantidaddePolis() {
	return this->ListaPolicia->Count;
}

Policia^ GestorPolicia::obtenerunpoli(int indice) {
	return this->ListaPolicia[indice];
}