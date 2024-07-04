#include<iostream>
#include<string>
using namespace std;

//class Human {
//	string name, surname;
//	int age;
//public:
//	Human()
//	{
//		age = 0;
//	}
//	Human(const char* n, const char* s, int a)
//	{
//		name.append(n);
//		surname.append(s);
//		age = a;
//	}
//	void Output() 
//	{
//		cout << name << " - " << surname << " - " << age;
//	}
//};

class Car {
	string colour, model, country;
	double price;
	int year;
public:
	Car()
	{
		price = 0.0;
		year = 0;
	}
	Car(const char* c, const char* m, const char* co, double p, int y)
	{
		colour.append(c);
		model.append(m);
		country.append(co);
		price = p;
		year = y;
	}

	string GetColoyr() const
	{
		return colour;

	}
	string GetModel() const
	{
		return model;

	}
	string GetCountry() const
	{
		return country;

	}
	double GetPrice() const
	{
		return price;

	}
	int GetYear()const 
	{
		return year;
	}

	void setColour(const string& c) 
	{ 
		colour = c; 
	}
	void setModel(const string& m) 
	{ 
		model = m; 
	}
	void setCountry(const string& co) 
	{ 
		country = co; 
	}
	void setPrice(double p) 
	{ 
		price = p; 
	}
	void setYear(int y) 
	{ 
		year = y; 
	}

	void Output()
	{
		cout << colour << "  -  " << model << "  -  " << country << "  -  " << price << "  -  " << year << endl;
	}
};



int main() {

	/*Human A("ivan", "Popov", 18);
	A.Output();*/
	Car a("yell", "Merc", "Ua", 5000, 2020);
	a.Output();

	a.setColour("brown");
	a.Output();
}



