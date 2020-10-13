#pragma once
#include <iostream>
using namespace std;
class Cliente
{
private:
	string nombre;
	string fechaNacimiento;
	string direccion;
public:
	string getNombre();
	void setNombre(string nombre);
	string getFechaNacimiento();
	void setFechaNacimiento(string fechaNacimiento);
	string getDireccion();
	void setDireccion(string direccion);
	virtual void mostrar();
};

