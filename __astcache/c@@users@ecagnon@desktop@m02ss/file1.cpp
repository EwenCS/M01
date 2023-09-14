#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	 float val1;
	 float val2;
	 float resultat;
	 char operateur;
	 int choix;

	 cout<< "choisir:"<<endl<< "1-arithmetique"<<endl<< "2-trigo"<<endl;

	 cin>> choix;

	if (choix==1)
	{
		cout << "saisir l'operation :";
		cin >> val1 >> operateur >> val2;
		cin.get();

		switch (operateur)
		{
			 case'+':
						resultat= val1+val2;
						break;
			 case'-':
						resultat=val1-val2;
						break;
			 case'*':
						resultat=val1*val2;
						break;
			 case'/':
						resultat=val1/val2;
						break;
			 default:
						break;

		}
	}
	if (choix==2)
	{
		string ftrigo;
		cin>>ftrigo>>val1;
		//if (ftrigo=="sin")
	}

		cout << val1 << operateur << val2 << "=" << resultat <<  endl;

		ofstream fichierLog;
		fichierLog.open("journal.log");

		time_t t=time(0);
		tm dateHeure=*localtime(&t);
		fichierLog<<dateHeure.tm_mday<<"/"<<(dateHeure.tm_mon+1)<<"/"<<(dateHeure.tm_year+1900)<<" ";
		fichierLog<<dateHeure.tm_hour<<":"<<dateHeure.tm_min<<":"<<dateHeure.tm_sec<<'\t';
		fichierLog << val1 << operateur << val2 << "=" << resultat << endl;




	fichierLog.close();
 cin.get();



 return 0;
}
