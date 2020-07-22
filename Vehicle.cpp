#include "Vehicle.h"
#include<iostream>
#include<string>
#include<fstream>
#include<algorithm>
#include<vector>
using namespace std;
#define CLEAR system("cls");
#define PAUSE system("pause");
const string carsEngineFile = "CarEngine.txt";
const string carsTransmissionFile = "CarTransmission.txt";
const string carsBodyFile = "CarBody.txt";
const string carsLightFile = "CarLight.txt";
const string carsSuspensFile = "CarSuspension.txt";
const string carsWheelsFile = "CarWheels.txt";
const string carsSalonFile = "CarSalon.txt";
const string carsElectroFile = "CarElectro.txt";
const string carsOtherFile = "CarOther.txt";

const string truckFile = "tempBaseTruck.txt";
const string busFile = "tempBaseBus.txt";
const string bikeFile = "tempBaseBike.txt";
const string Data = "dataBase.txt";
const string Users = "Users.txt";
string login;
string password;
int countArr = 0;
//vector<user> users;
//vector<engine> Engine;
//vector<transmission> Transmission;
//vector<body> Body;
//vector<headlights> Light;
//vector<suspension> Suspension;
//vector<wheels> Wheels;
//vector<salon> Salon;
//vector<electronic> Elecronic;
//vector<other> Other;
void menu()
{
	cout << "Choose category: " << endl;
	cout << "1. Engine: " << endl;
	cout << "2. Transmission: " << endl;
	cout << "3. Body and windows: " << endl;
	cout << "4. Headlights: " << endl;
	cout << "5. Suspension: " << endl;
	cout << "6. Wheels: " << endl;
	cout << "7. Salon: " << endl;
	cout << "8. Electronic: " << endl;
	cout << "9. Other: " << endl;
	cout << "0. Exit: " << endl;
}

void BikeMenu()
{
	cout << "Choose category: " << endl;
	cout << "1. Engine: " << endl;
	cout << "2. Transmission: " << endl;
	cout << "3. Headlights: " << endl;
	cout << "4. Suspension: " << endl;
	cout << "5. Wheels: " << endl;
	cout << "6. Electronic: " << endl;
	cout << "7. Other: " << endl;
	cout << "0. Exit: " << endl;
}
void mainMenu()
{
	cout << "Choose category: " << endl;
	cout << "1. Cars: " << endl;
	cout << "2. Trucks: " << endl;
	cout << "3. Buses/miniven: " << endl;
	cout << "4. Bikes: " << endl;
	cout << "5. Tractors: " << endl;

}