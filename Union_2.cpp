#include <iostream>
#include <set>

int main() {
    // Define a set of integers
    std::set<int> mySet;
    int a[]={2,4,5,6,7,9,10,13};
    int b[]={2,3,4,5,6,7,8,9,11,15};
    int i;
    // Insert elements into the set
    for(i=0;i<8;i++)
	mySet.insert(a[i]);

    for(i=0;i<11;i++)
    	mySet.insert(b[i]);


    // Print the elements of the set (sorted order)
    std::cout << "Original set: ";
    for (int x : mySet) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    return 0;
}

