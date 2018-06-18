#ifndef TELEFONO_H
#define TELEFONO_H
#include "Persona.h"
#include <string.h>
class Telefono: public Persona
{
	private:
		int numero;
	public:
		Telefono(){this->numero=000000;};
		int *getNumero(){return this->numero=new int[5];}
		int getNumero(int i){return numero[i];}
	protected:
};

#endif
