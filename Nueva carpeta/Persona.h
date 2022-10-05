//Implementacion de las classe persona

#include<iostream>
using namespace std;

class Persona{
	//Atributos
	private:
		string nombre;
		int edad;
		string CI;
		
	//Metodos 
	public:
		Persona(string _nombre, int _edad){//metodo constructor 1
			nombre=_nombre;
			edad= _edad;
		}
		
		Persona(string _CI){//metodo 
			CI= _CI;
		}
		
		void correr( ){
			cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y corriendo una marato "<<endl;
					}
					
		void correr(int Km){
			cout<<"He corrido"<<Km<<"Kilometros"<<endl;
		}
};