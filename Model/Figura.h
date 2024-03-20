#pragma once
using namespace System;
using namespace System::Drawing;
namespace Model {
	public ref class Figura
	{
	public:
		int iniciox;
		int inicioy;
		int finx;
		int finy;
		int tipof;
		Color objcolor;
	public:
		Figura(int iniciox,
			int inicioy,
			int finx,
			int finy,
			int tipof,
			Color objcolor);
	};

}