#pragma once
#include <iostream>
using namespace std;

class Person {
	char* name;
	uint16_t age; // unsigned integer 16 bit
	uint32_t socialId;
public:
	// основной конструктор
	Person(const char* nameP, uint16_t ageP, uint32_t s) : 
		name{ nameP ? new char[strlen(nameP) + 1] : nullptr },
		age{ ageP }, socialId{ s } 
	{
		if (nameP) strcpy_s(name, strlen(nameP) + 1, nameP);
		cout << "Person constructed\n";
	}
	// делегирующие конструкторы
	Person() : Person{nullptr, 0, 0}{}
	Person(const char* nameP) : Person{nameP, 0, 0} {}
	Person(const char* nameP, uint16_t ageP) : Person{nameP, ageP, 0} {}
	~Person() {
		delete[]name;
		cout << "Person destructor\n";
	}
	void Print() {
		if (name) cout << "Name -> " << name
			<< " Age -> " << age
			<< " SocialID -> " << socialId << endl;
		else
			cout << "[empty person]\n";
	}

};
