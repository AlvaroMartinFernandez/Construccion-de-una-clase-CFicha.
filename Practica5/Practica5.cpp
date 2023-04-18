#include <cstdio>
#include <cstdlib>
#include "Utils.h"
#include "MemoryManager.h"
#include"CHora.h"
#include"CFicha.h"
using namespace std;
using namespace Utils;

int main() {
	{
		CFicha A();
		CFicha C("AlvaroMARTING");
		CFicha D;
		CFicha E{};
		CFicha F();
		CFicha B("Alvaro", 27, 10, 25, 20, "24 HORAS");
		const char* menu[5]{ "Crear ficha.","Visualizar ficha", "Terminar"};
		int funcion = 0;
		string nNombre{};
		int nEdad = 0;
		int nHoras = 0;
		int nMinutos = 0;
		int nSegundos = 0;
		string pszFormato;
		bool aux;
		CFicha* FichaDinamica{};
		while (funcion != 3) {
			CUtils::CrearMenu(menu, 3);
			CUtils::LeerDato(funcion);
			switch (funcion) {
			case 1:
			{
				if (FichaDinamica != NULL)
				{
					delete FichaDinamica;
					FichaDinamica = NULL;
					cout << "Se ha borrado el Objeto, ya se puede crear otro nuevo" << endl;
				}
				FichaDinamica = new CFicha();
				cout << "Introduzca el nombre: ";
				CUtils::LeerDato(nNombre);
				FichaDinamica->AsignarNombre(nNombre);
				cout << "Introduzca la edad: ";
				CUtils::LeerDato(nEdad);
				FichaDinamica->AsignarEdad(nEdad);
				cout << "Introduzca la Hora: ";
				CUtils::LeerDato(nHoras);
				cout << endl;
				cout << "Introduzca los Minutos: ";
				CUtils::LeerDato(nMinutos);
				cout << endl;
				cout << "Introduzca los Segundos: ";
				CUtils::LeerDato(nSegundos);
				cout << endl;
				cout << "Introduzca el Formato horario (AM/PM o 24 HORAS): " << endl;
				CUtils::LeerDato(pszFormato);
				FichaDinamica->AsignarNacio(nHoras, nMinutos, nSegundos, pszFormato);
				cout << endl;
				cout << endl;
				break;
			}
			case 2:
			{
				if(FichaDinamica == NULL) {
					cout << "Primero tenemos que crear la ficha" << endl;

				}
				else
				{
					CUtils::VisualizarFicha(*FichaDinamica);
				}
			}
			case 3:
			{

			}
			}
		}
	}
	MemoryManager::dumpMemoryLeaks();
}
