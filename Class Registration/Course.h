#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

class Course{
public:
  Course();
  Course(Student studArray[], Teacher TrOb);
  ~Course();
  Teacher Set_Teacher(Teacher teacher);
  Student Set_Student(Student student[]);
private:
  Teacher teacher;
  Student studentArray[3];
};
