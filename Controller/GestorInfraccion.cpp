#include "GestorInfraccion.h"
#include "GestorFalta.h"

using namespace Controller;
using namespace System::IO;
using namespace System;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorInfraccion::GestorInfraccion() {
	ListaInfraccion = gcnew List<Infraccion^>();
	ListaBuscada2 = gcnew List<Infraccion^>();

}
void GestorInfraccion::LeerInfracciondesdetxt() {
	this->ListaInfraccion->Clear(); //Limpia la lista 
	array<String^>^ lineas = File::ReadAllLines("Infraccion.txt");
	String^ Separador = ";";
	for each (String ^ Lineacontacto in lineas) {
		array<String^>^ datos = Lineacontacto->Split(Separador->ToCharArray());
		int Condigo = Convert::ToInt32(datos[0]);
		String^ Fecha = datos[1];
		String^ Distrito = datos[2];
		int codigofalta = Convert::ToInt32(datos[3]);
		GestorFalta^ objGestorFalta = gcnew GestorFalta();
		objGestorFalta->LeerFaltadesdetxt();
		Falta^ ObjFalta = objGestorFalta->obtenerfaltaxcodigo(codigofalta);
		Infraccion^ ObjInfraccion = gcnew Infraccion(Condigo, Fecha, Distrito, ObjFalta);
		this->ListaInfraccion->Add(ObjInfraccion);
	}
}
	int GestorInfraccion::obtenercantidaddeInfracciones() {
		int a= this->ListaInfraccion->Count;
		return a;
	}
Infraccion^ GestorInfraccion::obtenerunainfraccion(int indice) {
	return this->ListaInfraccion[indice];
}

Infraccion^ GestorInfraccion::Obtenerinfraccionxcodigo(int cod) {
	Infraccion^ infraccionbuscada = nullptr;
	for (int i = 0; i < this->ListaInfraccion->Count; i++) {
		if (this->ListaInfraccion[i]->Codigo == cod) {
			infraccionbuscada = this->ListaInfraccion[i];
			break;
		}
	}
	return infraccionbuscada;
}

void GestorInfraccion::addinfraccion(Infraccion^ i) {
	this->ListaInfraccion->Add(i);
}
void GestorInfraccion::EscribirInfraccion() {
	array<String^>^ lineasarchivo = gcnew array<String^>(this->ListaInfraccion->Count);
	for (int i = 0; i < this->ListaInfraccion->Count; i++) {
		Infraccion^ Objcivil = this->ListaInfraccion[i];
		lineasarchivo[i] = Objcivil->Codigo + ";" + Objcivil->Fecha + ";" + Objcivil->Distrito + ";" + Objcivil->ObjFalta->codigo;
	}
	File::WriteAllLines("Infraccion.txt", lineasarchivo);
}

List<Infraccion^>^ GestorInfraccion::BuscarinfraccionesxDistrito(String^ Distirito) {
	Infraccion^ InfraccionBUscado = nullptr;
	for (int i = 0; i < ListaInfraccion->Count; i++) {
		if (this->ListaInfraccion[i]->Distrito == Distirito) {
			InfraccionBUscado = this->ListaInfraccion[i];
			this->ListaBuscada2->Add(InfraccionBUscado);
		}
	}
	return ListaBuscada2;

}
int GestorInfraccion::Codigomasalto() {
	int a = 0;
	int b;
	for (int i = 0; i < ListaInfraccion->Count; i++) {
		if (this->ListaInfraccion[i]->Codigo > a) {
			b=this->ListaInfraccion[i]->Codigo;
			a=this->ListaInfraccion[i]->Codigo;
		}
	}
	return b;
}

void GestorInfraccion::quitarinfraccion(int cod) {
	for (int i = 0; i < ListaInfraccion->Count; i++) {
		if (this->ListaInfraccion[i]->Codigo == cod) {
			this->ListaInfraccion->RemoveAt(i);
			break;
		}

	}

}

void GestorInfraccion::serializar() {
	Stream^ objStream = File::Open("Infraccion.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaInfraccion);
	objStream->Close();

}
void GestorInfraccion::deserializar() {
	Stream^ objStream = File::Open("Infraccion.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaInfraccion = dynamic_cast<List<Infraccion^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();

}

int GestorInfraccion::catiBuscarinfraccionesxDistrito(String^ Distrito) {
	int a = 0;
	for (int i = 0; i < ListaInfraccion->Count; i++) {
		if (this->ListaInfraccion[i]->Distrito == Distrito) {
			a++;
		}
	}
	return a;

}

Color GestorInfraccion::Elegircolor(int c) {
	Color Elcolor;
	if (c >= 0 && c <=3) {
		Elcolor = Color::Green;
	}
	if (c >= 3 && c <= 6) {
		Elcolor = Color::Yellow;
	}
	if (c >= 6 && c <= 9) {
		Elcolor = Color::Orange;
	}
	if (c >= 9) {
		Elcolor = Color::Red;
	}
	return Elcolor;

}