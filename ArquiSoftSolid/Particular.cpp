#include "Particular.h"

bool Particular::getDescapotable()
{
	return descapotable;
}

void Particular::setDescapotable(bool descapotable)
{
	this->descapotable = descapotable;
}

int Particular::getNumPuertas()
{
	return numPuertas;
}

void Particular::setNumPuertas(int numPuertas)
{
	this->numPuertas = numPuertas;
}

void Particular::mostrar()
{
	string esDescapotable = "no";
	if (this->descapotable)
	{
		esDescapotable = "si";
	}
	cout << "VEHICULO PARTICULAR" << endl;
	Vehiculo::mostrar();
	cout << "Descapotable: " << esDescapotable<<endl;
	cout << "Numero de puertas: " << numPuertas << endl;
	cout << endl;
}

void Particular::calcularImpuesto()
{
	int extra = 0;
	if (descapotable)
	{
		extra = extra + 100;
	}
	impuesto = (numPuertas * 20) + extra;
}
