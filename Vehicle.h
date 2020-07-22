#pragma once
#include<iostream>
#include<string>
using namespace std;

enum CONDITION
{
	NON_WORKING =1,
	BAD =2,
	MIDDLE =3,
	GOOD =4,
	PERFECT =5
};
struct contact
{
	string name;
	string phoneNumb;
	string email;
	contact()
	{
		name = "";
		phoneNumb = "";
		email = "";
	}
	contact(string name, string phoneNumb, string email)
	{
		this->name = name;
		this->phoneNumb = phoneNumb;
		this->email = email;
	}
	void Print()const
	{
		cout << "Name: " << name << endl;
		cout << "Phone number: " << phoneNumb << endl;
		cout << "Email: " << email << endl;
	}
};
struct user
{
	string login;
	string password;
	contact Contact;
	user()
	{
		login = "";
		password = "";
		Contact = { "", "", "" };
	}
	user(string login, string password, contact& Contact)
	{
		this->login = login;
		this->password = password;
		this->Contact = Contact;
	}
};
struct carType
{
	string bodyType;
	bool restyle;
	carType()
	{
		bodyType = "";
		restyle = false;
	}
	carType(string bodyType, bool restyle)
	{
		this->bodyType = bodyType;
		this->restyle = restyle;
	}
	void Print()const
		{
			cout << "Body type: " << bodyType << endl;
			cout << "Is restyle:" << restyle << endl;
		}
	
};
struct brandCar
{
	string marka;
	string model;
	int year;
	brandCar()
	{
		marka = "";
		model = "";
		year = NULL;
	}
	brandCar(string marka, string model, int year)
	{
		this->marka = marka;
		this->model = model;
		this->year = year;
	}
	void Print()const
	{
		cout << "Marka: " << marka << endl;
		cout << "Model: " << model << endl;
		cout << "Production year: " << year << endl;
	}
};
class Detail
{
protected:
	float EnginVol;
	string petroltype;
	CONDITION condition;
	string catalogNumb;
public:
	Detail()
	{
		EnginVol = NULL;
		petroltype = "";
		condition = NON_WORKING;
		catalogNumb = "";
	}
	Detail(float EnginVol, string petroltype, CONDITION condition, string catalogNumb)
	{
		this->EnginVol=EnginVol;
		this->petroltype=petroltype;
		this->condition=condition;
		this->catalogNumb=catalogNumb;
	}
	~Detail() {}
	virtual void Print() const
	{
		cout << "Engine volume: " << EnginVol << endl;
		cout << "Petrol type: " << petroltype << endl;
		cout << "Condition(1-5): " << condition << endl;
		cout << "Catalog number: " << catalogNumb << endl;
	}
};
class Engine: public Detail
{

public:
	Engine(): Detail()
	{}
	Engine(float EnginVol, string petroltype, CONDITION condition, string catalogNumb): 
		Detail( EnginVol,  petroltype,  condition,  catalogNumb)
	{}
	virtual void Print()const override 
	{
		Detail::Print();
	}
};
class Transmission: public Detail
{
public:
	Transmission() : Detail()
	{}
	Transmission(float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb)
	{}
	~Transmission()
	{}
	virtual void Print() const override
	{
		Detail::Print();
	}
};
class Body: public Detail
{
	carType bodyType;
public:
	Body() : bodyType("", false), Detail()
	{}
	Body(carType bodyType, float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb), bodyType(bodyType)
	{}
	~Body()
	{}
	virtual void Print() const override
	{
		Detail::Print();
		bodyType.Print();
	}
};
class Headlights: public Detail
{
public:
	Headlights() : Detail()
	{}
	Headlights(float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb)
	{}
	~Headlights()
	{}
	virtual void Print()const override
	{
		Detail::Print();
	}
};
class Suspension: public Detail
{
public:
	Suspension() : Detail()
	{}
	Suspension(float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb)
	{}
	~Suspension()
	{}
	virtual void Print()const override
	{
		Detail::Print();
	}
};
class Wheels: public Detail
{
	int radius;
	string season;
	string size;
public:
	Wheels() : radius(NULL), season(""), size(""), Detail()
	{}
	Wheels(int radius, string season, string size, float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb), radius(radius), season(season), size(size)
	{}
	~Wheels()
	{}
	virtual void Print() const override
	{
		Detail::Print();
		cout << "Radius: " << radius << endl;
		cout << "Season: " << season << endl;
		cout << "SIze: " << size << endl;
	}
};
class Salon: public Detail
{
	carType bodyType;
	string material;
public:
	Salon() : bodyType("", false),material(""), Detail()
	{}
	Salon(carType bodyType, string material, float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb), bodyType(bodyType), material(material)
	{}
	~Salon()
	{}
	virtual void Print()const override
	{
		Detail::Print();
		bodyType.Print();
		cout << "Material: " << material << endl;
	}
};
class Electronic: public Detail
{
	carType bodyType;
public:
	Electronic() : bodyType("", false), Detail()
	{}
	Electronic(carType bodyType, float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb), bodyType(bodyType)
	{}
	virtual void Print()const override
	{
		Detail::Print();
		bodyType.Print();
	}
};
class Other: public Detail
{
public:
	Other() : Detail()
	{}
	Other(float EnginVol, string petroltype, CONDITION condition, string catalogNumb) :
		Detail(EnginVol, petroltype, condition, catalogNumb)
	{}
	virtual void Print()const override
	{
		Detail::Print();
	}
};
class Vehicle
{
protected:
	string title;
	brandCar brand;
	contact Contact;
	Engine engine;
	Transmission transmission;
	Body body;
	Headlights light;
	Suspension suspension;
	Wheels wheel;
	Salon salon;
	Electronic electro;
	Other other;

public:
	//virtual void Print() const = 0;
	//virtual void Add() = 0;

	Vehicle() : title(""), brand{ "","",NULL }, Contact{"","",""}, engine()
	{}
	Vehicle(string title, brandCar brand, contact Contact)
	{
		this->title = title;
		this->brand = brand;
		this->Contact = Contact;
	}
	void Print()const
	{
		cout << "Title: " << title << endl;
		brand.Print();
		Contact.Print();
	}
};
class Car : public Vehicle
{
public:
	void PrintEngineInfo()const
	{
		Vehicle::Print();

	}
};
class Truck : public Vehicle
{};
class Bus : public Vehicle
{};
class Bike: public Vehicle
{};
class Tractor : public Vehicle
{};