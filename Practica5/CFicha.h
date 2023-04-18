#ifndef CFICHA_H
#define CFICHA_H
#include<cstdio>
#include<iostream>
#include"CHora.h"
using namespace std;

class CFicha
{
private:
	string m_sNombre;
	int m_nEdad;
	CHora m_horaNacio;
public:
	CFicha(const string& sNombre = "", int nEdad = 0, int nHoras = 12, int nMinutos = 0, int nSegundos = 0, const string& sFormato = "AM");
	void AsignarNombre(const string& sNombre);
	string ObtenerNombre()const;
	void AsignarEdad(int nEdad);
	int ObtenerEdad() const;
	bool AsignarNacio(int nHoras, int nMinutos, int nSegundos, const string& nFormato);
	CHora ObtenerNacio() const;
};
#endif