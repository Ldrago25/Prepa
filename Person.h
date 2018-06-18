#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string.h>
using namespace std;
class Person
{
	int edad;
	char n[10];
	public:
		Person(int edad,char n[]);
		Person();
		void setM(char n[]);
		char* getM();
		void mostrar();
		
	protected:
};

#endif
