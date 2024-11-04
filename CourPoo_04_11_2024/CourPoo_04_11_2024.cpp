
#include <iostream>
using namespace std;
class voiture
{
private:
	string marque;
	int kilometrage;
	float carburant;
	
public:
	voiture(string m,int k,float c): marque(m), kilometrage(k), carburant(c){}

	void afficheVoiture()
	{
		cout << "\nMarque: " << marque << "\nLe kilometrage: " << kilometrage << " km\n" "le carburant restant: " << carburant << " %\n";
	}

	void rouler()
	{
		
		carburant -= 10.0 / 100.0 * carburant;
		kilometrage += 80;
	}

};

//voiture::voiture()
//{
//}
//
//voiture::~voiture()
//{
//}

int main()
{
	voiture voiture("Mercedes",  20000 , 50.3 );
	voiture.afficheVoiture();
	voiture.rouler();
	voiture.afficheVoiture();

}


