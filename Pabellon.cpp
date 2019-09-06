//
// Created by Maikol Guzman  on 2019-09-05.
//

#include "Pabellon.h"

Pabellon::Pabellon()
{
}

Pabellon::Pabellon(int tamano){
	int tamano=tamano;
}

Pabellon::Pabellon(char id, char genero, int tamano):id(id),genero(genero){
	cantidad = 0;
	cama = new Cama*[tamano]; 

}

Pabellon::~Pabellon(){
	delete[]cama;
}


