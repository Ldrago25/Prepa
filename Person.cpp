#include "Person.h"

Person::Person()
{
	edad=10;
	strcpy(n,"Brandon");
}

Person::Person(int edad,char n[])
{
	this->edad=edad;
	strcpy(this->n,n);	
}

void Person::setM(char n[])
{
	strcpy(this->n,n);	
}

char* Person::getM(){
	return n;
}

void Person::mostrar()
{
	cout<<endl<<"..::: "<<this->getM()<<" :::..."<<endl;
	cout<<endl<<"..::: "<<edad<<" :::..."<<endl;
}
