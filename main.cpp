#include <iostream>
using namespace std;

#include "student.h"
int main(int argc, char* argv[]) {
  if (argc < 3 || argc % 2 == 0) {
    cout << "Usage: " << argv[0] << " [name1 age1] [name2 age2] ..." << endl;
    return 1;
  }

  int N=(argc-1)/2;
  student a[N];
  // Set age and set name for the first two ppl
  int i;
   // 1. Ask for N names and N age using cin
  int arg_index=1;
  for(i=0;i<N;i++)
  {
    a[i].set_name(argv[arg_index]);
    a[i].set_age(stoi(argv[arg_index+1]));
    arg_index += 2;
  }
  //2. Print name and age of all N ppl
  // for(i=0;i<N;i++)
  // {
  //   cout << "Student " << i+1 << endl;
  //   a[i].print_name();
  //   cout << "(Age:" << a[i].get_age() << ")" <<endl;;
  // }
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest person
  int min=a[0].get_age(),index;
  for(i=0;i<N;i++)
  {
    if(min>=a[i].get_age())
    {
      min=a[i].get_age();
    }
  }
  // Print all info for the yougest person
  cout << "Youngest student" << endl;
  for(i=0;i<N;i++)
  {
    if(min==a[i].get_age())
    {
      a[i].print_name();
      cout << "Age: " << a[i].get_age() <<endl;;
    }
  }
  //4. Change input from cin to argv
  //finished
  
 return 0;

    
  }
  
  


