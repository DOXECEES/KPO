
#ifndef WORKSHOP_H  
#define WORKSHOP_H

#include <iostream>
#include <string>

class Workshop
{

public:

	Workshop();																// Конструктор по умолчанию
	Workshop(const char* name, const char* chiefName, int amountOfWorkers);	// Конструктор с параметрами
	Workshop(const Workshop& other);										// Конструктор копирования

	// Геттеры
	char* GetName() const;								
	char* GetChiefName() const;
	int GetAmountOfWorkers() const;

	// Сеттеры
	void SetName(const char *name);
	void SetChiefName(const char* chiefName);
	void SetAmountOfWorkers(const int amountOfWorkers);
	void Set(const char* name, const char* chiefName, const int amountOfWorkers);
	
	// Деструктор
	~Workshop();

private:
	char* name;
	char* chiefName;
	int amountOfWorkers;

};

#endif