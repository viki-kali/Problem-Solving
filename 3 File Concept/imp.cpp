#include"head.h"
Student::Student()
{
   name="Abi";
   age=12;
   CGPA = 8.7;
   phno=9876543210;
}
void Student::getData()
{
   cout<<"Enter name,age, CPGA,phno for a student:";
   cin>>name>>age>>CGPA>>phno;
}
void Student::displayData()
{
  /* cout<<"Name is: "<<name<<endl;
   cout<<"Age is: "<<age<<endl;
   cout<<"CGPA is: "<<CGPA<<endl;
   cout<<"Phone Number is: "<<phno<<endl;*/
   cout<<name<<"\t"<<age<<"\t"<<CGPA<<"\t"<<phno<<"\n";
}
A_List::A_List()
{
   size =10;
   capacity=0;
   arr= new Student[size];
}
int A_List::isFull()
{
   if(size==capacity)
      return 1; //List is full
   else
      return 0;
}
int A_List::isEmpty()
{
   if(capacity==0)
      return 1; //List is empty
   else
      return 0;
}
int A_List::insertAtFirst(Student s)
{
   if(!isFull()) //Insertion possible
   {
      if(isEmpty())
      {
         arr[0] = s;
         capacity++;
      }
      else //Shift Down
      {
         for(int i=capacity;i>0;i--)
         {
            arr[i]=arr[i-1];
         }
         arr[0] = s;
         capacity++;
      }
      return 1;
   }
   else // List is full
   {
      return 0; //Insertion not possible
   }
}
void A_List::display()
{
        for(int i=0;i<capacity;i++)
        {
                arr[i].displayData();
        }
}
