
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
#include<string.h>

using namespace std;

class Cuadrado {
	 
	//atributos

	public:
		int dimencion;
		
	
	//metodos

	public:

		void crear_cuadrado_lleno() {
			for (int x = 1; x <= dimencion; x++) 
			{
				for (int y = 1; y <= dimencion; y++)
				{
					cout << "* ";
				}
				cout << "\n";
			}
		}
		void crear_cuadrado_vacio() {
			for (int x = 1; x <= dimencion; x++)
			{
				for (int y = 1; y <= dimencion; y++)
				{
					if (x == 1 || y==1 || y==dimencion || x== dimencion)
					{
						cout << "* ";
					}
					else {
						cout << "  ";
					}
				}
				cout << endl;
			}
		}
};

int main(int argc, char** argv) {

	cout << "\n\tJosue bonilla Cardenas - 2P - Tarea 2\n\n" << endl;
	
	int tipo;
	
	Cuadrado cuadro;

	cuadro.dimencion;

	cout << "\n\tBienvenido!!\n\n" << endl;

	cout << "Ingrese la dimension del cuadrado que desea imprimir (Ingrese numero positivo solamente)" << endl;
	cin >> cuadro.dimencion;
	cout << endl;

	cout << "Que tipo de cuadrado decea imprimir?" << endl;
	cin >> tipo;
	cout << endl;

	if (tipo == 1) {
		cuadro.crear_cuadrado_lleno();
	}
	else{
		if (tipo == 2) {
			cuadro.crear_cuadrado_vacio();
		}
		else {
			cout << "El tipo ingresado no esta dentor de las opciones" << endl;
		}
	}
}