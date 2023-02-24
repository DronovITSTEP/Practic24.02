#include <iostream>
#include "Person.h"
#include "Fraction.h"
#include "DynArr.h"
#include "String.h"
using namespace std;

int main()
{
    /*Person p;
    p.Print();

    Person p1{ "Petrov" };
    p1.Print();

    Person p2{ "Sidorov", 25 };
    p2.Print();

    Person p3{ "Ivanov" , 32, 156484 };
    p3.Print();*/

    /*Fraction f1{ 2,3 };
    Fraction f2{ f1 };
    Fraction f3{ Fraction{5,6} };

    cout << "f1 = "; 
    f1.Print(); 
    cout << endl;
    cout << "f2 = ";
    f2.Print();
    cout << endl;
    cout << "f3 = ";
    f3.Print();
    cout << endl;*/

    /*DynArr arr1{ 10 };
    arr1.randomize();
    cout << "arr1:\n";
    arr1.print();

    DynArr arr2{ arr1 };
    cout << "arr2:\n";
    arr2.print();*/

    String s1;
    s1.Print();
    s1.Init();
    s1.Print();

    String s2{"Hello World"};
    s2.Print();
    s2.Init();
    s2.Print();

    String s3{s1};
    s3.Print();
    s3.Init();
    s3.Print();
}
