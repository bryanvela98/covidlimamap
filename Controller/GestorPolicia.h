#pragma once
using namespace System::Collections::Generic;
using namespace Model;


namespace Controller {
	public ref class GestorPolicia
	{
	private:
		List<Policia^>^ ListaPolicia;
	public:
		GestorPolicia();
		void Leerpoliciasdesdetxt();
		int obtenercantidaddePolis();
		Policia^ obtenerunpoli(int indice);
		List<Civil^>^ ListaBuscada3;
	};
};
