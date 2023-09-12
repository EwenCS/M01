#include <iostream>
#include <math.h>
#include <iostream>
#include <string>
int main()
{
 float val1;
 float val2;
 float resultat;
 char operateur;
 int choix;

 std::cout<< "choisir:"<<std::endl<< "1-arithmetique"<<std::endl<< "2-trigo"<<std::endl;

 std::cin>> choix;



 std::cout << "saisir l'operation :";
 std::cin >> val1 >> operateur >> val2;
 std::cin.get();
 if (operateur== '+') { resultat= val1+val2;

 }
 if (operateur== '-') {resultat= val1-val2;

 }
if (operateur== '*') {resultat= val1*val2;

}
if (operateur== '/') {resultat= val1/val2;

}
if (choix==1) {
		  switch (operateur) {
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
}

if (choix==2) {
 string frtigo;
std::cin>>ftrigo>>val1;

if (ftrigo=="sin")

resultat=sin (val1 M_PI/180)

}




 std::cout << "RESULTAT : " << resultat << std::endl;
 std::cin.get();


 return 0;
}
