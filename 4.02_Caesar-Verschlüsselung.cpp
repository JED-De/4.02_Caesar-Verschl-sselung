#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe, ausgabe;
	int schl�ssel;
	char aktuell;
	cout << "Bitte geben Sie den zu verschluesselnden Text ein: ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie die Anzahl Verschiebepositionen ein (als positive ganze Zahl): ";
	cin >> schl�ssel;

	schl�ssel = schl�ssel % (int('z' - 'a') + 1);

	for (unsigned int i = 0; i < eingabe.size(); i++)
	{
		aktuell = eingabe.at(i);
		int add = schl�ssel;
		if (eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z' || eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')
		{
			if ((int(aktuell) + schl�ssel) > 'z' && eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z' || (int(aktuell) + schl�ssel) > 'Z' && eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')
			{
				add = add - (int('z' - 'a') + 1);
			}


			else if ((int(aktuell) + schl�ssel) < 'a' && eingabe.at(i) >= 'a' && eingabe.at(i) <= 'z' || (int(aktuell) + schl�ssel) < 'A' && eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')
			{
				add = add + (int('z' - 'a') + 1);		//else If ist nicht Teil der Aufgabe, freiwillig f�r eine negative Verschiebung, kann entfernt werden
			}
			ausgabe = ausgabe + char(int(aktuell) + add);
		}

		else
		{
			ausgabe = ausgabe + aktuell;
		}
	}


	cout << ausgabe << endl;

	system("PAUSE");
	return 0;
}