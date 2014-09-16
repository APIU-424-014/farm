/*#####################################################################
# Name        : Farm.cpp
# Author      : Class APIU-424-014, Chris Schweighofer
# Version     : 1.0.1.1
# Copyright   : Your copyright notice
# Description : Farm with Animals
######################################################################*/

#include <iostream>
#include <limits>
using namespace std;

//functions
void title();
void results(int hu, int ka);

//variables
int eing_tiere;
int eing_beine;
int huhner;
int kanien;
int anz_beine;
char rep;

//main
int main() {

	

	title();

	do {
		eing_tiere=0;
		eing_beine=0;
		huhner=0;
		kanien=0;
		anz_beine=0;
		try {
			do {
				cout << "Anzahl Tiere eingeben:\t";
				//cin >> eing_tiere;
				while(!(cin >> eing_tiere)){
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Nur reale Zahlen eingeben. Neuer Versuch:\t";
				}
			}while(eing_tiere<0);
			do {
				cout << "Anzahl Beine eingeben:\t";
				//cin >> eing_beine;
				//wir erlauben nur int als eingabe
				while(!(cin >> eing_beine)){
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << "Nur reale Zahlen eingeben. Neuer Versuch:\t";
				}
			}while((eing_beine % 2) ||
					(eing_beine < (2 * eing_tiere)) ||
					(eing_beine > (4 * eing_tiere)));

		}
		catch (int e){
			cout << "int exception: " << e << endl;
		}
		catch (char e){
			cout << "char exception: " << e << endl;
		}
		catch (...) {
			cout << "default exception ";
		}

		huhner = eing_tiere;

		while(anz_beine < eing_beine) {
			huhner--;
			kanien++;
			anz_beine = (2 * huhner) + (4 * kanien);
		}

		results(huhner, kanien);
		cout << "\nWillst du nochhmals? (j/n)\t";
		cin >> rep;
		huhner=0;
		kanien=0;



	}while((rep=='j') || (rep=='J'));
	cout << "goodbye";
	//getchar();
	return 0;
}

void results(int hu, int ka) {
	cout << "Es hat " << hu <<" Huehner und " << ka << " Kanienchen auf der Farm!!!" << endl;

}

void title() {
	cout << "+++++++\n" << endl;
	cout << " Farm" << endl;
	cout << "\n+++++++" << endl;
	cout << '\n';
	cout << "+++++++++++++++++++++++++" << endl;
	cout << "\n by Class APIU-424-014" << endl;
	cout << "\n+++++++++++++++++++++++++" << endl;
	cout << "\n+++++++++++++++++++++++++++++++++++++++" << endl;
	cout << "\n Berechnung der Huehner und Kanienchen" << endl;
	cout << "\n+++++++++++++++++++++++++++++++++++++++" << endl;

}
