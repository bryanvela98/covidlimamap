#pragma once
using namespace System::Collections::Generic;
using namespace Model;
using namespace System;

namespace Controller {
	public ref class GestorCivil
	{
	private:
		List<Civil^>^ ListaCiviles;
		
	public:
		GestorCivil();
		void LeerCivilesdesdetxt();
		int obtenercantidaddeCiviles();
		Civil^ obteneruncivil(int indice);
		List<Civil^>^ BuscacivilxDNI(String^ Dni);
		List<Civil^>^ ListaBuscada;
		void agregarcivil(Civil^ c);
		void quitarcivil(int cod);
		Civil^ Buscacivilxcodigoinfraccion(int codigo);
		void Escribirenciviles();
		List<Civil^>^ BuscacivilxNombre(String^ Dni);
		List<Civil^>^ BuscacivilxApellidomatero(String^ Dni);
		List<Civil^>^ BuscacivilxApelidopaterno(String^ Dni);
		List<Civil^>^ Buscacivilxnombreyapelldiomaterno(String^ d1, String^ d2);
		List<Civil^>^ Buscacivilxnombreyapelldiopaterno(String^ Dni, String^d2);
		List<Civil^>^ Buscacivilxnombreyapelldiomaternoypaterno(String^ Dni, String^ d2, String^ d3);
		List<Civil^>^ Buscacivilxnombreyapelldiomaternoypaternoydni(String^ Dni, String^ d2, String^ d3, String^ d4);
		void serializar();
		void deserializar();
	};

};