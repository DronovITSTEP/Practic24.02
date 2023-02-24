#pragma once
#include <iostream>
using namespace std;

/*
–азработать класс String, который в дальнейшем будет
использоватьс€ дл€ работы со строками.
*/
class String
{
	char* str;
	size_t size;
public:
	//  онструктор, позвол€ющий создавать строку произвольного
	// размера;
	String(size_t s) : str{new char[s]}, size { s } {
		strcpy_s(str, s, "");
	}
	//  онструктор, который создаЄт строку и инициализирует еЄ
	// строкой, полученной от пользовател€;
	String(const char* strP) : String{strlen(strP) + 1} {
		strcpy_s(str, strlen(strP) + 1, strP);
	}
	
	//  онструктор по умолчанию, позвол€ющий создать строку
	// длиной 80 символов;
	String() : String{ 80 } {}

	//  онструктор копировани€.
	String(const String& object) :
		size{ object.size }, str{new char[object.size]} {
		strcpy_s(str, size, object.str);
	}
	~String() {
		delete[]str;
	}

	// методы дл€ ввода строк с клавиатуры
	// и вывода строк на экран.
	void Print();
	void Init();
};

