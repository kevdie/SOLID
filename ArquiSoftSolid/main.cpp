#include "Particular.h"
#include "Publico.h"
int main()
{
	Cliente *clientes[2];
	Vehiculo* vehiculos[2];
	ClienteContado *contado=new ClienteContado;
	contado->setNombre("Juan");
	contado->setFechaNacimiento("20/20/20");
	contado->setDireccion("BlancoGalindo");
	contado->setFechaPago("10/10/10");
	contado->setTotalPagado(10000);
	clientes[0] = contado;
	//[0]->mostrar();
	ClienteCredito* credito = new ClienteCredito;
	credito->setNombre("Pedro");
	credito->setFechaNacimiento("5/5/5");
	credito->setDireccion("Av. Peru");
	credito->setMontoTotal(20000);
	credito->setPagosRealizados(5);
	credito->setTotalPagos(15);
	clientes[1] = credito;
	
	Particular* particular = new Particular;
	particular->setDescapotable(true);
	particular->setDueno(clientes[0]);
	particular->setNumPuertas(5);
	particular->setPlaca("jkd252");
	particular->calcularImpuesto();
	particular->mostrar();
	vehiculos[0] = particular;

	Publico* publico = new Publico;
	publico->setCatindadPasajeros(15);
	publico->setDueno(clientes[1]);
	publico->setNombreEmpresa("Sindicato 212");
	publico->setPlaca("555dsa");
	publico->calcularImpuesto();
	publico->mostrar();
	vehiculos[1] = publico;
	//vec[1]->mostrar();
	return 0;
}