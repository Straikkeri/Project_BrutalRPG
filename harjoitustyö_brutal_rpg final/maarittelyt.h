#include <iostream>
#include <string>
#include <ctime>
#include <fstream>

using namespace std;

struct monster							// structin sis�ll�n m��ritys
{
	string name;
	int health, damage, criticalDMG, criticalChance;
};

//aliohjelmien esittelyt

void menu();						// ei palauta mit��n eik� ota vastaan parametreja
struct monster archive(int);		// palauttaa structin ja ottaa vastaan integerin
int damageCount(int);				// palauttaa integerin ja ottaa vastaan integerin
int combat(int, char *);				// palauttaa integerin ja ottaa vastaan characterin ja integerin
int diceRoll(int);					// palauttaa integerin ja ottaa vastaan integerin
int storyProgression(char *);		// palauttaa integerin ja ottaa vastaan character osoittimen sis�ll�n