
#ifndef WORKSHOP_H  
#define WORKSHOP_H

#include <iostream>
#include <string>

class Workshop
{

public:

	Workshop();																// ����������� �� ���������
	Workshop(const char* name, const char* chiefName, int amountOfWorkers);	// ����������� � �����������
	Workshop(const Workshop& other);										// ����������� �����������

	// �������
	char* GetName() const;								
	char* GetChiefName() const;
	int GetAmountOfWorkers() const;

	// �������
	void SetName(const char *name);
	void SetChiefName(const char* chiefName);
	void SetAmountOfWorkers(const int amountOfWorkers);
	void Set(const char* name, const char* chiefName, const int amountOfWorkers);
	
	// ����������
	~Workshop();

private:
	char* name;
	char* chiefName;
	int amountOfWorkers;

};

#endif