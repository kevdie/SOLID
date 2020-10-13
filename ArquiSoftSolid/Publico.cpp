#include "Publico.h"

void Publico::calcularImpuesto()
{
	impuesto = cantidadPasajeros * 50;
}

int Publico::getCantidadPasajeros()
{
	return cantidadPasajeros;
}

void Publico::setCatindadPasajeros(int cantidadPasajeros)
{
	this->cantidadPasajeros = cantidadPasajeros;
}

string Publico::getNombreEmpresa()
{
	return nombreEmpresa;
}

void Publico::setNombreEmpresa(string nombreEmpresa)
{
	this->nombreEmpresa = nombreEmpresa;
}

void Publico::mostrar()
{
	cout << "VEHICULO PUBLICO" << endl;
	Vehiculo::mostrar();
	cout << "Cantidad pasajeros: " << cantidadPasajeros << endl;
	cout << "Nombre de la empresa: " << nombreEmpresa << endl;
}
