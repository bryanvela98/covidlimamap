#pragma once
using namespace System::Collections::Generic;
using namespace Model;

namespace Controller {
	public ref class GestorPersona
	{
	private:
		List<Persona^>^ ListaPersonas;
	public:
		GestorPersona();
	};

};