#include<iostream>

using namespace std;

class CPU
{
private:
	char* model;
	double power;
	double price;

public:
	CPU():model(nullptr),power(0),price(0)
	{}
	CPU(const char* mod, double pow, double pr) : power(pow), price(pr)
	{
		model = new char[strlen(mod) + 1];
		strcpy_s(model, strlen(mod) + 1, mod);
	}
	~CPU ()
	{
		delete[]model;
	}
	void Print()
	{
		cout << "--- CPU: \n";
		cout << model << "\t" << power << "\t" << price << endl;
	}
};





class PC
{
private:
	char* model;
	double price;
	CPU Cpu;
public:
	PC(const char* mod, double pr, const char* cp, double pcpu, double prcpu) : price(pr), Cpu(cp, pcpu, prcpu)
	{
		model = new char[strlen(mod) + 1];
		strcpy_s(model, strlen(mod) + 1, mod);
	}

	~PC()
	{
		delete[] model;
	}

	void Print()
	{
		cout << "--- CPU: \n";
		cout << model << "\t" << price << "\t" << price << endl;
		Cpu.Print();
	}



};





int main()
{
	PC obj("HP", 2000, "Amd", 3.5, 9000);
	obj.Print();








	return 0;


}