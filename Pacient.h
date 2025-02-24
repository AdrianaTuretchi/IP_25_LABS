#pragma once
#include "Person.h"
class Pacient : public Person {
	vector<spitalizare>lista_internari;
	vector<string>tratamente_curente;
	vector<string>boli_cronice;
	vector<string>boli_acute;
	int fonduri;

};