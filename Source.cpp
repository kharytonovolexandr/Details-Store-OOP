#include<iostream>
#include<string>

using namespace std;
int main()
{
	int action = 0;
	int actionClient = 0;
	do
	{
		cout << "*******DETAILS STORE*******" << endl;
		cout << "***************************" << endl;
		cout << "1. Sign in as client:" << endl;
		cout << "2. Sign in as admin:" << endl;
		cout << "3. Create new account:" << endl;
		cout << "0. Exit:" << endl;
		cout << "***************************" << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			authorization();
			do
			{


				system("cls");
				cout << "1. Create announcement." << endl;
				cout << "2. Watch " << endl;
				cout << "3. Search " << endl;
				cout << "4. Delete " << endl;
				cout << "5. Edit " << endl;
				cout << "0. Exit" << endl;
				cin >> actionClient;
				switch (actionClient)
				{
				case 1:
				{
					system("cls");
					offerNewCar();
				}break;
				case 2:
				{
					int actionCar = 0;
					do {
						system("cls");
						menu();
						cin >> actionCar;
						switch (actionCar)
						{
						case 1:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyEngines();
								system("pause");
							}
							else {
								system("cls");
								showCarsEngine();
								system("pause");
							}
						}break;
						case 2:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyTransmission();
								system("pause");
							}
							else {
								system("cls");
								showCarsTransmission();
								system("pause");
							}

						}break;
						case 3:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyBody();
								system("pause");
							}
							else {
								system("cls");
								showCarsBody();
								system("pause");
							}

						}break;
						case 4:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyLight();
								system("pause");
							}
							else {
								system("cls");
								showCarsLight();
								system("pause");
							}

						}break;
						case 5:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMySuspens();
								system("pause");
							}
							else {
								system("cls");
								showCarsSuspension();
								system("pause");
							}

						}break;
						case 6:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyWheels();
								system("pause");
							}
							else {
								system("cls");
								showCarsWheels();
								system("pause");
							}

						}break;
						case 7:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMySalon();
								system("pause");
							}
							else {
								system("cls");
								showCarsSalon();
								system("pause");
							}

						}break;
						case 8:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyElectro();
								system("pause");
							}
							else {
								system("cls");
								showCarsElectric();
								system("pause");
							}

						}break;
						case 9:
						{
							int w = 0;
							system("cls");
							cout << "1. Show my announce" << endl;
							cout << "2. Show all" << endl;
							cin >> w;
							if (w == 1) {
								system("cls");
								showMyOther();
								system("pause");
							}
							else {
								system("cls");
								showCarsOther();
								system("pause");
							}

						}break;
						case 0:
						{
							system("cls");

						}break;
						default:
						{
						}break;
						}
					} while (actionCar != 0);


				}break;
				case 3:
				{
					system("cls");
					searchCar();
				}break;
				case 4:
				{
					system("cls");
					Remove_if();
				}break;
				case 5:
				{
					system("cls");
					edit();
				}break;
				case 0:
				{
					cout << "Good bye!" << endl;
				}break;
				default:
					break;
				}
			} while (actionClient != 0);
		}break;
		case 2:
		{
			string login;
			string password;
			system("cls");
			cout << "Login:" << endl;
			cin >> login;
			cout << "Password" << endl;
			cin >> password;
			if (login == "admin" && password == "1111")
			{

			}

		}break;
		case 3:
		{
			system("cls");
			addNewUser();
		}break;

		case 0:
		{
			system("cls");
			cout << "Good bye!" << endl;
		}break;
		}break;



	} while (action != 5);
	system("pause");
	return 0;
}