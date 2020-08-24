#pragma once
/*
	---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		-> This file is used to define Person class and this file will be used in main.cpp

		-> In our Project there is an Entity named as Person we decided to make it as Person Class

		-> We also make this for understaing Purpose
	---------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/
#include <iostream>

class Person
{
	// decelating atributes of class
protected:
	std::string name;
	int age;


	// declaring functionalites (methods)
public:
	// declaring constructors
	Person();
	Person(std::string, int);

	// declaring setters
	bool setName(std::string);
	bool setAge(int);

	// declaring getters
	std::string getName();
	int getAge();

	// Dispalay data method
	void showData();

};
