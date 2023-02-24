#include "String.h"
void String::Print() {
	cout << str << endl << "size = " << size << endl << endl;
}
void String::Init() {
	char* temp = new char[255];
	gets_s(temp, 256);

	delete[]str;
	size = strlen(temp) + 1;
	str = new char[size];
	strcpy_s(str, size, temp);

}
