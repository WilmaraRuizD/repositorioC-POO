class Alumno{
	
	float calMate,calProgra,promedio;
	
	//metodos
	
	public:
		Alumno(){//constructo1
		calMate=_calMate;
		calProgra=_calProgra;
			
		}
		Alumno(){    //constructo por defecto
			
		}
	void pedirDatos();
	void mostrarNotas();
};