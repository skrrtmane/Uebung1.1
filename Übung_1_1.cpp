#include <iostream>

//Durch das std, sparrst du dir das std vor jedem cout und cin,
//Programm weiß das cout von der Standartbibliothek kommt.

using namespace std;	

int main()
{
	// EVA, Eingabe, Verarbeitung, Ausgabe; um den Überblick nicht zu verlieren.
	//Eingabe
	int OK = 0;
	int x = 0;

	//Verarbeitung
	x = x + 3;

	//Ausgabe
	cout << "START THE GAME\n"; /// strg,alt,? + n ist ein Zeilenumbruch

	//endl ist die Endline, bricht den String der Konsole um und springt in die nächste,
	//entspricht Zeilenumbruch in der Konsole
	cout << "******" << endl;

	//Ein Hochkomma (Doppelkomma) ist ein String ist für mehrere Buchstaben gedacht, 
	//ein einfaches Hochkomma für char-werte (ein Buchstabe oder Zahl)
	cout << "FINISH";
	cout << "endl";

	//Entweder OK als Variable deklarieren mit int OK = 0, oder gleich 0 zurückgeben.
	// Variablen werden um den Überblick nicht zu verlieren immer am Anfang deklarieren.
	return OK; 
}
