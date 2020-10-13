#include "ClienteContado.h"

int ClienteContado::getTotalPagado()
{
	return totalPagado;
}

void ClienteContado::setTotalPagado(int totalPagado)
{
	this->totalPagado = totalPagado;
}

string ClienteContado::getFechaPago()
{
	return fechaPago;
}

void ClienteContado::setFechaPago(string fechaPago)
{
	this->fechaPago = fechaPago;
}

void ClienteContado::mostrar()
{
	cout << "CLIENTE AL CONTADO" << endl;
	Cliente::mostrar();
	cout << "Monto total pagado: " << totalPagado << endl;
	cout << "Fecha pagado" << fechaPago << endl;
}
