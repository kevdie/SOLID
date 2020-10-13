#include "ClienteCredito.h"

int ClienteCredito::getTotalPagos()
{
	return totalPagos;
}

void ClienteCredito::setTotalPagos(int totalPagos)
{
	this->totalPagos = totalPagos;
}

int ClienteCredito::getPagosRealizados()
{
	return pagosRealizados;
}

void ClienteCredito::setPagosRealizados(int pagosRealizados)
{
	this->pagosRealizados = pagosRealizados;
}

int ClienteCredito::getMontoTotal()
{
	return montoTotal;
}

void ClienteCredito::setMontoTotal(int montoTotal)
{
	this->montoTotal = montoTotal;
}

void ClienteCredito::mostrar()
{
	cout << "CLIENTE A CREDITO" << endl;
	Cliente::mostrar();
	cout << "Total Pagos: " << totalPagos << endl;
	cout << "Pagos Realizados: " << pagosRealizados << endl;
	cout << "Monto total: " << montoTotal << endl;
}
