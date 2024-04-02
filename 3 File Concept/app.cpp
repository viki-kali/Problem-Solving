#include"head.h"
int main()
{
   A_List obj;
   int ch;
   do
   {
        cout<<"Enter 1 for insertAtFirst\n2 for display\n";
        cin>>ch;
        switch(ch)
        {
           case 1:
              {
                 Student s;
                 s.getData();
                 int res = obj.insertAtFirst(s);
                 if(res ==1)
                    cout<<"Insertion successful\n";
                 else
                    cout<<"List is full. Insertion at first fails\n";
              }
              break;
           case 2:
              cout<<"Name\tAge\tCGPA\tPhoneNo.\n";
              obj.display();
              break;
           default:
              cout<<"Invalid choice\n";
        }
   }while(ch>=1 && ch<=2);
}

