#pragma once
#include"Infraccion.h"
using namespace System; 
using namespace System::Collections::Generic;
namespace Model {
	[Serializable]
	public ref class Distrito
	{
	private:
		String^ Nombre;
		double DensidadPoblacional;
	public:
		Distrito();
		int CalcularGradodeRiesgo();
	};

};