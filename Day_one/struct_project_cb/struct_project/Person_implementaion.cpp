
/*
	---------------------------------------------------------------------------------------------------------------------------------------------------------------------
		-> This file is used to define Person class and this file will be used in main.cpp

		-> In our Project there is an Entity named as Person we decided to make it as Person Class

		-> We also make this for understaing Purpose
	---------------------------------------------------------------------------------------------------------------------------------------------------------------------
*/

// including Person class which is in Person.h
#include "Person.h"

Person::Person()
	{
	/*
	parms:
	return:
	description: This is default constructor
	*/
		this->name = "";
		this->age = 0;
	}

Person::Person(std::string name, int age)
	{
	/*
	parms: name(string), age(int)
	return:
	description: This is parameterize constructor
	*/
		this->name = name;
		this->age = age;
	}


bool Person::setName(std::string name)
	{
	/*
	parms: name(string)
	return: true/false(bool)
	description: This method is used to set the name of Person.
	*/
		try{

			this->name = name;
			return true;

		}catch(int e)
		{
			return false;
		}
	}


bool Person::setAge(int age)
	{
	/*
	parms: age(int)
	return: true/false(bool)
	description: This method is used to set the age of Person.
	*/
		try{

			this->age = age;
			return true;

		}catch(int e)
		{
			return false;
		}
	}



std::string Person::getName()
	{
	/*
	parms:
	return: name(string)
	description: This method will return name of person
	*/
		return this->name;
	}

int Person::getAge()
	{
		/*
		parms:
		return: age (int)
		description: This method will return the age of Person
		*/
		return this->age;
	}



void Person::showData()
	{
		/*
		parms:
		return:
		description: This method is used to display data on consle screen.

		*/
		std::cout<<"Person Name : "<<this->name<<std::endl;
		std::cout<<"Person Age : "<<this->age<<std::endl;
	}
