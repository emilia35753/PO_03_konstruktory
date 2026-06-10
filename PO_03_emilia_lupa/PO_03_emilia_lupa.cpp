#include <iostream>
using namespace std;

class KASA_FIS {
private:
	int ilosc;
	float cena;
public:
	KASA_FIS() : ilosc(0), cena(0) {} //tak lub linijka nizej
/*	KASA_FIS() {
		ilosc = 0;
		cena = 0;
	} */
	void zeruj() {
		ilosc = 0;
		cena = 0;
	};
	void dodaj(float dod_cena) {
		ilosc += 1;
		cena = cena + dod_cena;
	}
	void pobierz_cene() {
		cout << "\nPodaj cene: "; cin >> cena;
	}
	void pobierz_ilosc() {
		cout << "\nPodaj ilosc: "; cin >> ilosc;
	}
	void wyswietl() {
		cout << "\nIlosc produktow to: " << ilosc;
		cout << "\nCena produktow to: " << cena << endl;
	};
};

class KONTO {
private:
	double saldo;
public:
	KONTO() : saldo(0.0) {}
	KONTO(double poczatkowe_saldo) : saldo(poczatkowe_saldo) {}
	void depozyt(double wplata) { saldo +=  wplata; }
	void wyplata(double wyplata) { saldo -= wyplata; }
	void pobierz_saldo() { cout << "Obecnie saldo wynosi: " << saldo << endl; }
};

class PRZEDMIOT {
private:
	string nazwa;
	double cena = 0;
public:
	PRZEDMIOT() { //konstruktor domyslny
		nazwa = "Pilka";
		cena = 17;
	}
	PRZEDMIOT(string nazwa1) { //konstruktor jednoargumentowy
		nazwa = nazwa1;
	}
	PRZEDMIOT(string nazwa2, double cena2) { //konstruktor dwuargumentowy
		nazwa = nazwa2;
		cena = cena2;
	}
	void drukuj() {
		cout << "\nNazwa to: " << nazwa << "\ncena to: " << cena << endl;
	}
};

class TSilnik
{
public:
	int moc;
	int max_moment_obr;

	TSilnik(int moc, int moment)
	{
		this->moc = moc;
		this->max_moment_obr = moment;
	}
};

class TSamochod
{
public:
	TSilnik silnik;
	string model;

	TSamochod(string MODEL, int MOC, int MOMENT) : model(MODEL), silnik(MOC, MOMENT)
	{}

	void Wypisz()
	{
		cout << "Model: " << model << "\nMoc: " << silnik.moc << "\nMoment: " << silnik.max_moment_obr << endl << endl;
	}
};


int main() {
	KASA_FIS kasa;
	/*kasa.wyswietl();
	kasa.pobierz_ilosc();
	kasa.wyswietl();
	kasa.pobierz_cene();
	kasa.wyswietl();
	kasa.dodaj(3.09);
	kasa.dodaj(18.23);
	kasa.dodaj(56.98);
	kasa.wyswietl();
	kasa.zeruj();
	kasa.wyswietl();
	*/

/*
	KONTO konto1;
	konto1.pobierz_saldo();
	konto1.depozyt(300.3);
	konto1.pobierz_saldo();
	konto1.wyplata(78.9);
	konto1.pobierz_saldo();
*/

	/*KONTO konto2(250.0);
	konto2.pobierz_saldo();
	konto2.depozyt(9.0);
	konto2.pobierz_saldo();
	konto2.wyplata(87.99);
	konto2.pobierz_saldo();
	*/

	/*PRZEDMIOT przedm1;
	przedm1.drukuj();

	PRZEDMIOT przedm2("Samochod");
	przedm2.drukuj();

	PRZEDMIOT przedm3("Piornik", 98);
	przedm3.drukuj(); */


	TSamochod* samochod1 = new TSamochod("Toyota Wigo", 87, 113);
	samochod1->Wypisz();
	delete samochod1;

	return 0;
}