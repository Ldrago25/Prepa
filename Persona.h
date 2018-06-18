#ifndef PERSONA_H
#define PERSONA_H
#include "Telefono.h"
#include <string.h>
class Persona: public Telefono
{
	private:
		int edad;
		Telefono *telefono;
	public:
		Persona(){this->edad=5; telefono = new telefono();};
		getTelefono(){this->telefono;}
		Telefono * getTelefono(){return this->telefono;}
	protected:
};

#endif
