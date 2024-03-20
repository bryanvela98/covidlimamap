#pragma once
#include "Persona.h"
#include "Infraccion.h"
using namespace System;
using namespace System::Collections::Generic;
namespace Model {
	[Serializable]
	public ref class Civil :public Persona
	{
	public:
		String^ DNI;
		String^ Nombre;
		String^ ApPaterno;
		String^ ApMaterno;
		int codigoinfraciion;
		Infraccion^ objInfraccion;
		int cp;
	public:
		Civil(String^ DNI,String^ Nombre,String^ ApPaterno, String^ ApMaterno,int codigoinfraciion,Infraccion^ objInfraccion,int cp);
		Civil(String^ DNI, String^ Nombre, String^ ApPaterno, String^ ApMaterno, int codigoinfraciion, Infraccion^ objInfraccion);
		int Verriesgodistrito();
		int verRiesgoCivil();
		int CalcularGradoderiesgo(int Peligrosidad);
	};

};