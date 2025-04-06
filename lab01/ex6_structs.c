#include <stdio.h>
#include <stdlib.h>

// Structs allow you to hold data items of different types in a single variable
// Struct definitions can be used to declare a struct variable within your
// program Struct definitions are typically done outside of a function
struct Student {
  int id;
  char *name;
};

// Note: structs are pass by value
void Student(struct Student s) {
  printf("Student id: %d\n", s.id);
  printf("Student name: %s\n", s.name);
}

int main() {
  // TODO: declare a variable student of type struct Student
  // Note: this struct is stored on the stack
  struct Student student;

  // TODO: print out the size of a struct Student
  // While this may seem out of place now, it will be useful in the future!
  // Hint: there's an operator that can calculate this for you!
  printf("Size of a struct Student: %lu bytes\n", sizeof(struct Student));

  // TODO: set student's id field to 5
  // Hint: the dot notation accesses a struct's fields
  student.id = 5;

  student.name = "John";
  // TODO: call the Student function with student as an argument
  Student(student);

  return 0;
}
