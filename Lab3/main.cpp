
#include "../Lab3/Workshop.h"
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	Workshop *a = new Workshop("���������������", "������", 12);	// ����� ������������ � �����������

	Workshop b;														// ����� ������������ �� ���������

	Workshop *c = new Workshop(*a);									// ����� ������������ �����������

	// ����� �������� ��� ������� c
	std::cout << c->GetChiefName() << std::endl;
	std::cout << c->GetName() << std::endl;
	std::cout << c->GetAmountOfWorkers() << std::endl;
	std::cout << std::endl;

	// ����� �������� ��� ������� b
	b.SetAmountOfWorkers(82);
	b.SetChiefName("������");
	b.SetName("�������������");

	// ����� �������� ��� ������� b
	std::cout << b.GetChiefName() << std::endl;
	std::cout << b.GetName() << std::endl;
	std::cout << b.GetAmountOfWorkers() << std::endl;
	std::cout << std::endl;

	// ����� ������� ��� ������� �
	a->Set("�������", "�������", 15);

	// ����� �������� ��� ������� �
	std::cout << a->GetChiefName() << std::endl;
	std::cout << a->GetName() << std::endl;
	std::cout << a->GetAmountOfWorkers() << std::endl;
	std::cout << std::endl;

	delete a;	// ����� ����������� �
	delete c;	// ����� ����������� c
	// ����� ����������� b

}