#include<iostream>
#include"Alumno.h"

using namespace std;

void Alunmo::pedirDatos(){
	cout<<"Digite la calificacion de Matematica: ";
	cin>>calMate;
	
		cout<<"Digite la calificacion de Matematica: ";
	cin>>calProgra;
	
}

void Alunmo::mostrarNotas(){
	cout<<"Nota de Matematica :"<<calMate<<endl;
	cout<<"Nota de Programacion :"<<calProgra<<endl;
	cout<<"Promedio: "<<(calMate+calProgra)/2<<endl;
}