//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Cama.h"

Cama::Cama(){

}

Cama::Cama(const string & codigo, bool estado){
	std::string codigo =codigo;
	bool est = true;

}

Cama::~Cama(){

}

const string & Cama::getCodigo() const{
	return codigo;
}

void Cama::setCodigo(const string & codigo){
	Cama::codigo = codigo;
}

bool Cama::isEstado() const{
	return estado;
}

void Cama::setEstado(bool estado){
	Cama::estado = estado;
}

string Cama::toString() {
	string reporte;
}