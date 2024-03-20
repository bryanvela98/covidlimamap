#pragma once
using namespace System::Collections::Generic;
using namespace Model;
using namespace System;
using namespace Drawing; 

namespace Controller {
	public ref class GestorInfraccion
	{
	private:
		List<Infraccion^>^ ListaInfraccion;
	public:
		GestorInfraccion();
		void LeerInfracciondesdetxt();
		int obtenercantidaddeInfracciones();
		Infraccion^ obtenerunainfraccion(int indice);
		Infraccion^ Obtenerinfraccionxcodigo(int cod);
		void addinfraccion(Infraccion^ i);
		void EscribirInfraccion();
		List<Infraccion^>^ BuscarinfraccionesxDistrito(String^ Distirito);
		List<Infraccion^>^ ListaBuscada2;
		int Codigomasalto();
		void quitarinfraccion(int cod);
		void serializar();
		void deserializar();
		int catiBuscarinfraccionesxDistrito(String^ Distrito);
		Color Elegircolor(int c);
	};
};
