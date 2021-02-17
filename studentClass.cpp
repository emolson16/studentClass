
using namespace std;
#include <iostream>
#include <string>

const int NUM_GRADES = 6;

// this is a class!
// assume all grades are out of 100
class Student {
  private: 
    string firstName;
    string lastName;
    int grades[NUM_GRADES];

  public:

    // default constructor that sets all grades to 0
    // sets names accordingly
    Student(string firstNameIn, string lastNameIn);
    
    // computes the average grade of student
    double findAverage();

    // computes the average of 2 students
    double findAverage(Student &otherStudent);

    // returns grade at index
    int getGrade(int index);

    // returns true if student is passing (>= 60)
    bool isPassing();

    // Sets grade at index to give grade
    void setGrade(int index, int grade);

    // prints first and last name and average grade
    void printInfo();

};





int main() {

  Student emily("Emily", "Olson");

  emily.printInfo();
  emily.setGrade(1, 100);
  emily.printInfo();

  return 0;
}

