#include<iostream>
#include "DiaAnio.h"

using namespace std;

//se comprueba la igualdad en las fechas
bool DiaAnio::igual(DiaAnio& d){
	if(dia==d.dia && mes==d.mes){
		return true;
	} 
	
	else{
		return false;
	}
}

void DiaAnio::visualizar(){
	cout<<"Se  muetran fechas: "<<endl;
	cout<<"Mes: "<<mes<<"\nDia: "<<dia<<endl;
	
}