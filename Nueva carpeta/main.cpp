//sobre carga de metodos de una clase 
#include <iostream>
#include <conio.h>
#include "Persona.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Persona* persona1 =new Persona("Wilmara", 29);
	
	persona1->correr();
	
	Persona* persona2=new Persona("123445");
	persona2->correr(4);	
	getch();
	return 0;
}