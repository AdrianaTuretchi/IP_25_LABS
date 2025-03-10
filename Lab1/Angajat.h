#pragma once
#include"Person.h"
using namespace std;
class Angajat:public Person {
	Date angajare;
	int salariu;
	double norma;
	Angajat(string nume, int cnp, Date birth_date, Date angajare, int salariu, double norma) :Person(cnp, nume, birth_date), angajare(angajare), salariu(salariu), norma(norma) {};
	Date Get_angajare() { return angajare; }
	int Get_salariu() { return salariu; }
	double Get_norma() { return norma; }
};

class Medic : public Angajat {
	vector<int>zile_disp_in_luna_aceasta;
	int nr_consultatii_pe_zi;
	vector<pair<int, int>> rata_ocupare;
	int Add_consultatie(int data, int nr_interval)
	{
		for(auto i ;i<zile_disp_in_luna_aceasta.size();i++)
			if (i == data)
			{
				for (auto j; i < rata_ocupare.size(); i++)
					if (rata_ocupare.first == data && rata_ocupare.second == nr_interval)
						return 0;
					else
					{
						rata_ocupare.push_back(make_pair(data, nr_interval));
						return 1;
					}
				return -1;
			}

	}
};

class Asistenta: public Angajat  {
	vector<pair<Date, int>> garzi;
	bool Add_garda(Date data, int schimb)
	{
		if (schimb > 3)
			return 0;
		garzi.push_back(make_pair(data, schimb));
		return 1;
	}

};
