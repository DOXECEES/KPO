
#include "../Lab3/Workshop.h"
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	Workshop *a = new Workshop("Деревообработка", "Иванов", 12);	// Вызов конструктора с параметрами

	Workshop b;														// Вызов конструктора по умолчанию

	Workshop *c = new Workshop(*a);									// Вызов конструктора копирования

	// Вызов геттеров для объекта c
	std::cout << c->GetChiefName() << std::endl;
	std::cout << c->GetName() << std::endl;
	std::cout << c->GetAmountOfWorkers() << std::endl;
	std::cout << std::endl;

	// Вызов сеттеров для объекта b
	b.SetAmountOfWorkers(82);
	b.SetChiefName("Петров");
	b.SetName("Сталелитейный");

	// Вызов геттеров для объекта b
	std::cout << b.GetChiefName() << std::endl;
	std::cout << b.GetName() << std::endl;
	std::cout << b.GetAmountOfWorkers() << std::endl;
	std::cout << std::endl;

	// Вызов сеттера для объекта а
	a->Set("Обувной", "Федоров", 15);

	// Вызов геттеров для объекта а
	std::cout << a->GetChiefName() << std::endl;
	std::cout << a->GetName() << std::endl;
	std::cout << a->GetAmountOfWorkers() << std::endl;
	std::cout << std::endl;

	delete a;	// Вызов деструктора а
	delete c;	// Вызов деструктора c
	// Вызов деструктора b

}