#include "GestorCivil.h"
#include"GestorInfraccion.h"
using namespace Controller;
using namespace System::IO;
using namespace System;
using namespace System::Runtime::Serialization::Formatters::Binary;

GestorCivil::GestorCivil() {
	ListaCiviles = gcnew List<Civil^>();
	ListaBuscada = gcnew List<Civil^>();
}

void GestorCivil::LeerCivilesdesdetxt() {
	this->ListaCiviles->Clear(); //Limpia la lista 
	array<String^>^ lineas = File::ReadAllLines("Civiles.txt");
	String^ Separador = ";";
	for each (String ^ Lineacontacto in lineas) {
		array<String^>^ datos = Lineacontacto->Split(Separador->ToCharArray());
		String^ DNI = datos[0];
		String^ Nombre = datos[1];
		String^ ApPaterno = datos[2];
		String^ ApMaterno = datos[3];
		int codigoinfraccion = Convert::ToInt32(datos[4]);
		GestorInfraccion^ objGestorInfraccion = gcnew GestorInfraccion();
		objGestorInfraccion->LeerInfracciondesdetxt();
		Infraccion^ ObjInfraccion = objGestorInfraccion->Obtenerinfraccionxcodigo(codigoinfraccion);
		Civil^ ObjCivil = gcnew Civil(DNI, Nombre, ApPaterno, ApMaterno, codigoinfraccion,ObjInfraccion);
		this->ListaCiviles->Add(ObjCivil);
	}
}
int  GestorCivil::obtenercantidaddeCiviles() {
	return this->ListaCiviles->Count;
}

Civil^ GestorCivil::obteneruncivil(int indice) {
	return this->ListaCiviles[indice];
}

List<Civil^>^ GestorCivil::BuscacivilxDNI(String^ Dni) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->DNI == Dni) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}

void GestorCivil::agregarcivil(Civil^ c) {

	this->ListaCiviles->Add(c);
}
void GestorCivil::quitarcivil(int cod) {
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->codigoinfraciion == cod) {
			this->ListaCiviles->RemoveAt(i);
			break;
		}
	
	}

}

Civil^ GestorCivil::Buscacivilxcodigoinfraccion(int codigo) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->codigoinfraciion == codigo) {
			CivilBUscado = this->ListaCiviles[i];
		}
	}
	return CivilBUscado;
}

void GestorCivil::Escribirenciviles() {
	array<String^>^ lineasarchivo = gcnew array<String^>(this->ListaCiviles->Count);
	for (int i = 0; i < this->ListaCiviles->Count; i++) {
		Civil^ Objcivil = this->ListaCiviles[i];
		lineasarchivo[i] = Objcivil->DNI + ";" + Objcivil->Nombre + ";" + Objcivil->ApPaterno + ";" + Objcivil->ApMaterno + ";" + Objcivil->codigoinfraciion;
	}
	File::WriteAllLines("Civiles.txt", lineasarchivo);
}


List<Civil^>^ GestorCivil::BuscacivilxNombre(String^ Dni) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Dni) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}
List<Civil^>^ GestorCivil::BuscacivilxApellidomatero(String^ Dni) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->ApMaterno == Dni) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}


List<Civil^>^ GestorCivil::BuscacivilxApelidopaterno(String^ Dni) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->ApPaterno == Dni) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}

List<Civil^>^ GestorCivil::Buscacivilxnombreyapelldiomaterno(String^ d1, String^ d2) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == d1 && this->ListaCiviles[i]->ApMaterno == d2) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}


List<Civil^>^ GestorCivil::Buscacivilxnombreyapelldiopaterno(String^ Dni, String^ d2) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre == Dni && this->ListaCiviles[i]->ApPaterno == d2) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}
List<Civil^>^ GestorCivil::Buscacivilxnombreyapelldiomaternoypaterno(String^ Dni, String^ d2, String^ d3) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->Nombre ==Dni && this->ListaCiviles[i]->ApPaterno == d2 && this->ListaCiviles[i]->ApMaterno == d3) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}
List<Civil^>^ GestorCivil::Buscacivilxnombreyapelldiomaternoypaternoydni(String^ Dni, String^ d2, String^ d3, String^ d4) {
	Civil^ CivilBUscado = nullptr;
	deserializar();
	for (int i = 0; i < ListaCiviles->Count; i++) {
		if (this->ListaCiviles[i]->DNI == Dni && this->ListaCiviles[i]->ApPaterno == d3 && this->ListaCiviles[i]->ApMaterno == d4 && this->ListaCiviles[i]->ApMaterno == d2) {
			CivilBUscado = this->ListaCiviles[i];
			this->ListaBuscada->Add(CivilBUscado);
		}
	}
	return ListaBuscada;
}

void GestorCivil::serializar() {
	Stream^ objStream = File::Open("Civiles.bin", FileMode::Create);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	objFormateador->Serialize(objStream, this->ListaCiviles);
	objStream->Close();

}
void GestorCivil::deserializar() {
	Stream^ objStream = File::Open("Civiles.bin", FileMode::Open);
	BinaryFormatter^ objFormateador = gcnew BinaryFormatter();
	this->ListaCiviles = dynamic_cast<List<Civil^>^>(objFormateador->Deserialize(objStream));
	objStream->Close();

}