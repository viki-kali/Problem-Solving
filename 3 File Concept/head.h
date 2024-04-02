#include<iostream>
using namespace std;
class Student
{
   public:
      Student();
      void getData();
      void displayData();
      friend class A_List;
   private:
      string name;
      int age;
      float CGPA;
      long int phno;
};
class A_List
{
   public:
      A_List();
      int insertAtFirst(Student);
      int isFull();
      int isEmpty();
      void display();
   private:
      Student *arr;
      int size;
      int capacity;
};
