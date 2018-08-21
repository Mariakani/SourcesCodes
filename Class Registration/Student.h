class Student{
public:
  Student();
  Student(string f_Name, string l_Name, string city_Name, string a_Name);

  ~Student();
  string get_firstname(string first_Name);
  string get_lastName(string last_Name);
  string get_city(string city);
  string address(string address);
  void SitInClass();



private:
  string first_Name;
  string last_Name;
  string city;
  string address;
};
