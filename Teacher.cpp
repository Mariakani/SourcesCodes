#include <iostream>
#include "Teacher.h"



using namespace std;



Teacher::Teacher(string first_Name, string last_Name, string city, string address)
{
first_Name = " ";
last_Name = " ";
city = " ";
address = " ";
}
Teacher::~Teacher()
{

}
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
int Teacher::get_Age(int age )
{
  return age;
}
double Teacher::get_PhoneNumber(double phone_Number)
{
  return phone_Number;
}
void Teacher::GradeStudent()
{

}
void Teacher::SitInClass()
{
cout << "sitting at front of class" << endl;
}
