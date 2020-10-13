#include "Vehiculo.h"

Cliente* Vehiculo::getDueno()
{
	return dueno;
}

void Vehiculo::setDueno(Cliente* dueno)
{
	this->dueno = dueno;
}

string Vehiculo::getPlaca()
{
	return placa;
}

void Vehiculo::setPlaca(string placa)
{
	this->placa = placa;
}

int Vehiculo::getImpuesto()
{
	return impuesto;
}

void Vehiculo::mostrar()
{
	dueno->mostrar();
	cout << "placa: " << placa << endl;
	cout << "impuesto: " << impuesto << endl;
}
