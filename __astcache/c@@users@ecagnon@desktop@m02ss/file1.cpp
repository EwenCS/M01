#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
int main()
{
	 float val1;
	 float val2;
	 float resultat;
	 char operateur;
	 int choix;

	 std::cout<< "choisir:"<<std::endl<< "1-arithmetique"<<std::endl<< "2-trigo"<<std::endl;

	 std::cin>> choix;




	if (choix==1)
	{

		std::cout << "saisir l'operation :";
		std::cin >> val1 >> operateur >> val2;
		std::cin.get();


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
		std::string ftrigo;
		std::cin>>ftrigo>>val1;

		//if (ftrigo=="sin")


	}






		std::cout << val1 << operateur << val2 << "=" << resultat << std:: endl;

		std::ofstream FichierLog;
		FichierLog.open("journal.log");
		FichierLog << val1 << operateur << val2 << "=" << resultat << std::endl;
		FichierLog.close();
 std::cin.get();


 return 0;
}
