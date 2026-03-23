#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  // student s1,s2;

  // s1.set_name("Amy");
  // s1.set_age(25);
  // s2.set_name("James");
  // s2.set_age(22);
  // s1.get_age()>s2.get_age() ? s1.print_name() :s2.print_name();  
  // cout << "is older";



  student a[N];
  // Set age and set name for the first two ppl
  int i,age;
  string n;
   // 1. Ask for N names and N age using cin
  for(i=0;i<N;i++)
  {
    cout << "Student " << i+1 << endl;
    cout << "Name : ";
    cin >> n;
    cout << "Age : ";
    cin >> age;
    a[i].set_name(n);
    a[i].set_age(age);
  }
  //2. Print name and age of all N ppl
  for(i=0;i<N;i++)
  {
    cout << "Student " << i+1 << endl;
    a[i].print_name();
    cout << "(Age:" << a[i].get_age() << ")" <<endl;;
  }
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  int min=a[0].get_age(),index;
  for(i=1;i<N;i++)
  {
    if(min>=a[i].get_age())
    {
      min=a[i].get_age();
      index=i;
    }
  }
  // Print all info for the yougest person
  cout << "the yougest age is " << min << " years old";
  for(i=1;i<N;i++)
  {
    if(min==a[i].get_age())
    {
      a[index].print_name();
      cout << " ";
    }
    cout <<endl;
  }
  //4. Change input from cin to argv
  
  
 return 0;

    
  }
  
  


