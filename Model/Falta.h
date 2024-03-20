#pragma once

using namespace System;
namespace Model {
	[Serializable]
	public ref class Falta
	{
	public:
		int codigo;
		String^ Tipo;
	public:
		Falta(int codigo, String^ Tipo);
	};
};