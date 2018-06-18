#include <iostream>
#include "Person.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Person **p= new Person *[2];
	
	
	for(int i=0; i<2; i++)
	{
		p[i]=new Person(10,"Brandon");
		p[i]->mostrar();	
	}
	
	return 0;
}

/* 
clase papa heredando de hijo.

	Persona *o=new Profesor();
	Profesor *pro=(Profesor)p;
	
	vector <Persona*> p;
	Profesor *profesor= new Profesor("ALdana");
	p.push_back(profesor);
	
	
	for(int i=0; i<p.size(); i++)
	{
		cout<<endl<<"nombre: "<<p.at(i)->getM()<<endl;	
	}
	*/
	
