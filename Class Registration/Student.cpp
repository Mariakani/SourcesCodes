#include <iostream>
#include "Student.h"

using namespace std;


Student::Student(string f_Name, string l_Name, string city_Name, string a_Name);
{
  first_Name = f_Name;
  last_Name = l_Name;
  city = city_Name;
  address = a_Name;
}
Student::~Student(){}

string Teacher::get_firstname(string first_Name)
{
  return first_Name;
}

string Teacher::get_lastName(string last_Name)
{
  return last_Name;
}
string get_city::Teacher(string city)
{
  return city;
}
string Teacher::get_address(string address)
{
  return address;
}
void Teacher::SitInClass()
{
cout << "sitting in the main theater" << endl;
}
