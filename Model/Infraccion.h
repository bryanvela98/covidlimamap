#pragma once
#include "Falta.h"
using namespace System;
namespace Model {
	[Serializable]
	public ref class Infraccion
	{
	public:
		String^ Fecha;
		int Codigo;
		String^ Distrito;
		Falta^ ObjFalta;
	
	public:
		Infraccion(int Condigo, String^ Fecha,String^ Distrito,Falta^ObjFalta);
	};

};