#pragma once
#include "Distrito.h"
using namespace System;
namespace Model {
	[Serializable]
	public ref class Persona
	{
	private:
		String^ DNI;
		String^ Nombre;
		String^ ApPaterno;
		String^ ApMaterno;
	public:
		Persona();

	};
};
