#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int sId,char sName[]) {
  studentId = sId;
  strcpy(name,sName); 
  
}

// Display StudentId and Name
void Student::display() {
  cout<<"--------------------------------------"<< endl;
  cout<<"Student ID \t: "<<studentId<<endl;
  cout<<"Student Name \t: "<<name<<endl;
  
}
