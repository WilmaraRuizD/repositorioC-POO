//implementacion de la classe 

class DiaAnio{
	
	//Atrivutos
	private:
		int dia,mes;
		
	//metodos
	public:
		DiaAnio(int _dia,int _mes){
			dia = _dia;
			mes = _mes;
		}
	bool igual(DiaAnio& d);
	void visualizar();
};