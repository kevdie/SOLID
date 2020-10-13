#pragma once
#include "Cliente.h"
class ClienteCredito :
	public Cliente
{
private:
	int totalPagos;
	int pagosRealizados;
	int montoTotal;
public:
	int getTotalPagos();
	void setTotalPagos(int totalPagos);
	int getPagosRealizados();
	void setPagosRealizados(int pagosRealizados);
	int getMontoTotal();
	void setMontoTotal(int montoTotal);
	void mostrar();
};

