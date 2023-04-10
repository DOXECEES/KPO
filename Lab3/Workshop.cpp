#include "Workshop.h"

Workshop::Workshop(const Workshop& other)
{
	this->amountOfWorkers = other.amountOfWorkers;

	this->chiefName = new char[strlen(other.chiefName) + 1];
	strcpy_s(this->chiefName, strlen(other.chiefName) + 1, other.chiefName);
	
	this->name = new char[strlen(other.name) + 1];
	strcpy_s(this->name, strlen(other.name) + 1, other.name);
	
	std::cout << "Вызван конструктор копирования " << this << std::endl;
}

char* Workshop::GetName() const
{
	return this->name;
}

char* Workshop::GetChiefName() const
{
	return this->chiefName;
}

int Workshop::GetAmountOfWorkers() const
{
	return this->amountOfWorkers;
}

void Workshop::SetName(const char *name)
{
	delete[] this->name;

	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Workshop::SetChiefName(const char* chiefName)
{
	delete[] this->chiefName;

	this->chiefName = new char[strlen(chiefName) + 1];
	strcpy_s(this->chiefName, strlen(chiefName) + 1, chiefName);
}

void Workshop::SetAmountOfWorkers(const int amountOfWorkers)
{
	this->amountOfWorkers = amountOfWorkers;
}

void Workshop::Set(const char* name, const char* chiefName,const int amountOfWorkers)
{
	this->amountOfWorkers = amountOfWorkers;

	delete[] this->chiefName;
	this->chiefName = new char[strlen(chiefName) + 1];
	strcpy_s(this->chiefName, strlen(chiefName) + 1, chiefName);

	delete[] this->name;
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}


Workshop::Workshop(const char* name, const char* chiefName, int amountOfWorkers)
{
	std::cout << "Вызван конструктор с параметрами " << this << std::endl;

	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->chiefName = new char[strlen(chiefName) + 1];
	strcpy_s(this->chiefName, strlen(chiefName) + 1, chiefName);

	this->amountOfWorkers = amountOfWorkers;

}

Workshop::Workshop()
	:name(nullptr), chiefName(nullptr), amountOfWorkers(0)
{
	std::cout << "Вызван конструктор без параметров " << this << std::endl;

}

Workshop::~Workshop()
{
	std::cout << "Вызван деструктор " << this << std::endl;
	delete[]name;
	delete[]chiefName;

}