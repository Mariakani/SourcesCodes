#include <iostream>
#include <string>
using namespace std;


class Teacher
{
public:
  Teacher();
  Teacher(string first_Name, string last_Name, int age, string city, string address, double phone_Number);
  ~Teacher();

  void GradeStudent();
  void SitInClass();
string get_firstname(string first_Name);
string get_lastName(string last_Name);
string get_city(string city);
string get_address(string address);
int get_Age(int age );
double get_PhoneNumber(double phone_Number);


private:
  string first_Name;
  string last_Name;
  int age;
  string city;
  string address;
  double phone_Number;
};
