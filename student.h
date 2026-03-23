#include <iostream>
using namespace std;

class student{
private:

  string name;
  int age;

public:
  
  void set_name(string="Yme");
  void print_name();
  void set_age(int); // set value of age
  int get_age(); //return value of age

};

void student::set_name(string n)
{
  name=n;
}

void student::print_name()
{
  cout << "Name: " << name <<endl;
}

void student::set_age(int a)
{
  if(a>50) age=50;
  else if(a<13) age=13;
  else age=a;
}

int student::get_age()
{
  return age;
}