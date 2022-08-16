
/**
	Progaramacion oreintada a objetos
	Tarea 1
	Josue Bonilla Cárdenas
	Reg:22110106
	CETI colomos
	15/Agosto/2022
**/

#include<stdio.h>
#include<iostream>
#include<set>

using namespace std;

class Cuadrado {
	 
	//atributos

	private:
		int dimencion;

	
	//metodos

	public:

		void setDimencion(int dimen);
		int getDimencion();
		void crear_cuadro();
};

void Cuadrado::setDimencion(int d) {
	if (dimencion >= 1) {
		d = dimencion;
		
		cout << "que tipo de cuadrado desea?" << endl;
		cout << "Tipo 1 \n +++\n+++\n+++" << endl;
		cout << "Tipo2 \n++\n+ +\n+++" << endl;


	}
}

int Cuadrado::getDimencion() {

	return d;
}

void Cuadrado::crear_cuadro() {
	cout << "*" << endl;
}

int main(int argc, char** argv) {

	cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;

	int d;

	Cuadrado cuadro;
	
	cuadro.getDimencion();


	cout << "\n\tBienvenido!!\n\n" << endl;

	cout << "Ingrese la dimension del cuadrado que desea imprimir (Ingrese numero positivo solamente)" << endl;
	cin >> d;

	cuadro.setDimencion(d);
	

	cout << cuadro.getDimencion();


}