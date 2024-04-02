#include <iostream>
#include <vector>
#include <algorithm> // Include for std::find
using namespace std;

// Function to display the elements of the vector
void displayVector(const vector<int>& vec) {
    if (vec.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Elements of the vector: ";
        for (int num : vec) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<int> vec={1,2,3};
    int choice;
    auto it = find(vec.begin(), vec.end(), 3);
    auto it2 = vec.begin();
    cout<<"aaa"<<*it2;
    do {
        cout << "\nMenu:\n";
        cout << "1. Add Element\n";
        cout << "2. Access Element\n";
        cout << "3. Update Element\n";
        cout << "4. Delete Element\n";
        cout << "5. Get Size\n";
        cout << "6. Display Vector\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Add Element
                int num;
                cout << "Enter element to add: ";
                cin >> num;
                vec.push_back(num);
                break;

            case 2: // Access Element
                int index;
                cout << "Enter index to access: ";
                cin >> index;
                if (index >= 0 && index < vec.size()) {
                    cout << "Element at index " << index << ": " << vec[index] << endl;
                } else {
                    cout << "Invalid index." << endl;
                }
                break;

            case 3: // Update Element
                int idx, newValue;
                cout << "Enter index to update: ";
                cin >> idx;
                cout << "Enter new value: ";
                cin >> newValue;
                if (idx >= 0 && idx < vec.size()) {
                    vec[idx] = newValue;
                    cout << "Element at index " << idx << " updated successfully." << endl;
                } else {
                    cout << "Invalid index." << endl;
                }
                break;

            case 4: // Delete Element
                int delIndex;
                cout << "Enter index to delete: ";
                cin >> delIndex;
                if (delIndex >= 0 && delIndex < vec.size()) {
                    vec.erase(vec.begin() + delIndex);
                    cout << "Element at index " << delIndex << " deleted successfully." << endl;
                } else {
                    cout << "Invalid index." << endl;
                }
                break;

            case 5: // Get Size
                cout << "Size of the vector: " << vec.size() << endl;
                break;

            case 6: // Display Vector
                displayVector(vec);
                break;

            case 7: // Exit
                cout << "Exiting program." << endl;
                break;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}

