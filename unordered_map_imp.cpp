#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> myMap ={{"a",10},{"b",20},{"c",30}};
    myMap.insert({"a", 99});
    int choice;
    string key;
    int value;

    do {
        cout << "\n------ Menu ------" << endl;
        cout << "1. Insert Key-Value Pair" << endl;
        cout << "2. Erase Key-Value Pair" << endl;
        cout << "3. Find Value by Key" << endl;
        cout << "4. Check If Key Exists" << endl;
        cout << "5. Print Size of Map" << endl;
        cout << "6. Check If Map Is Empty" << endl;
        cout << "7. Print All Key-Value Pairs" << endl;
        cout << "8. Clear Map" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter key: ";
                cin >> key;
                cout << "Enter value: ";
                cin >> value;
                myMap[key] = value;
                cout << "Key-value pair inserted successfully." << endl;
                break;
            case 2:
                cout << "Enter key to erase: ";
                cin >> key;
                if (myMap.erase(key))
                    cout << "Key-value pair erased successfully." << endl;
                else
                    cout << "Key not found." << endl;
                break;
            case 3:
                cout << "Enter key to find: ";
                cin >> key;
                if (myMap.find(key) != myMap.end())
                    cout << "Value: " << myMap[key] << endl;
                else
                    cout << "Key not found." << endl;
                break;
            case 4:
                cout << "Enter key to check: ";
                cin >> key;
                cout<<myMap.count(key)<<"aaa";
                if (myMap.count(key))
                    cout << "Key exists." << endl;
                else
                    cout << "Key does not exist." << endl;
                break;
            case 5:
                cout << "Size of map: " << myMap.size() << endl;
                break;
            case 6:
                if (myMap.empty())
                    cout << "Map is empty." << endl;
                else
                    cout << "Map is not empty." << endl;
                break;
            case 7:
                cout << "Key-Value pairs:" << endl;
                for (const auto pair : myMap)
                    cout << pair.first << ": " << pair.second << endl;
                break;
            case 8:
                myMap.clear();
                cout << "Map cleared successfully." << endl;
                break;
            case 9:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 9." << endl;
        }
    } while (choice != 9);

    return 0;
}

