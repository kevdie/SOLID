#pragma once
#include <iostream>
#include "ClienteContado.h"
#include "ClienteCredito.h"
using namespace std;

class Vehiculo
{
protected:
	Cliente* dueno;
	string placa;
	int impuesto;
public:
	Cliente* getDueno();
	void setDueno(Cliente* dueno);
	string getPlaca();
	void setPlaca(string placa);
	int getImpuesto();
	virtual void mostrar();
	virtual void calcularImpuesto() = 0;

};

