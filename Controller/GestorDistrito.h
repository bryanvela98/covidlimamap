#pragma once
using namespace System::Collections::Generic;
using namespace Model;

namespace Controller {
	public ref class GestorDistrito
	{
	private:
		List<Distrito^>^ ListaDistrito;
	public:
		GestorDistrito();
	};

};