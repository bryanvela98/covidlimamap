#pragma once
using namespace System::Collections::Generic;
using namespace Model;
using namespace System;

namespace Controller {
	public ref class GestorFalta
	{
	private:
		List<Falta^>^ ListaFalta;
	public:
		GestorFalta();
		void LeerFaltadesdetxt();
		int obtenercantidaddefalta();
		Falta^ obtenerunfalta(int indice);
		Falta^ obtenerfaltaxcodigo(int codigo);
		void addfalta(Falta^ f);
		Falta^ obtenerfaltaxtipo(String^ tipo);
	};

};