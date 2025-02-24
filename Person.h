#pragma once
#include <string>
#include <vector>
using namespace std;
class Date {
	int year, month, day;
public:
	bool Set(int day, int month, int year) {
		if (year < 1900 || year>2025)
			return 0;
		if (month < 1 || month >12)
			return 0;
		if (day < 1 || day >31)
			return 0;
		return 1;
	}
	int Get_year() { return year; }
	int Get_month() { return month; }
	int Get_day() { return day; }
	void Asign(Date d) {
		year = d.Get_year();
		month = d.Get_month();
		day = d.Get_day();
	}
};

class Person {
	Date birth_date;
	string name;
	int cnp;
public:
	Person(int cnp, string name, Date birth) {
		this->cnp = cnp;
		this->name = name;
		birth_date.Asign(birth);
	}
	Date Get_birth_date() { return birth_date; }
	string Get_name() { return name; }
	int Get_cnp() { return cnp; }
};
class spitalizare {
	Date enter;
	Date exit;
	string medic;
	string motiv;
	vector<string>tratamente;
public:
	spitalizare(Date entry, Date exit_day, string motiv,string medic) {
		enter.Asign(entry);
		exit.Asign(exit_day);
		motiv = motiv;
		medic = medic;
	}
	void Add_treatment(string med) {
		tratamente.push_back(med);
	}
	string Get_medic() { return medic;}
	Date Get_enter() { return enter; }
	Date Get_exit() { return exit; }
	vector<string>* Get_treatment() {
		return &tratamente;
	}
};