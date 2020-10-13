#include "Cliente.h"

string Cliente::getNombre()
{
	return nombre;
}

void Cliente::setNombre(string nombre)
{
	this->nombre = nombre;
}

string Cliente::getFechaNacimiento()
{
	return fechaNacimiento;
}

void Cliente::setFechaNacimiento(string fechaNacimiento)
{
	this->fechaNacimiento = fechaNacimiento;
}

string Cliente::getDireccion()
{
	return direccion;
}

void Cliente::setDireccion(string direccion)
{
	this->direccion = direccion;
}

void Cliente::mostrar()
{
	cout << "Nombre: " << nombre << endl;
	cout << "Fecha de nacimiento: " << fechaNacimiento << endl;
	cout << "Direccion: " << direccion << endl;
}
