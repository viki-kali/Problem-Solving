/*
Value of the data is: 5
Value of the data is: 3

 */
#include <iostream>
using namespace std;
void change1(int *data);
void change2(int data);

int main()
{
    int val = 3;
    change1(&val);
    cout << "Value of the data is: " << val<< endl;
    val = 3;
    change2(val);
    cout << "Value of the data is: " << val<< endl;
    return 0;
}

void change1(int *data)
{
    *data = 5;
}

void change2(int data)
{
    data = 5;
}
