#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>  // Include the <vector> header

using namespace std;  // Add this line to use the std namespace

/*
 * for(i=0;i<n;i++)
  if(strcmp(a[i][1],str)==0)             //Locate grandfather in the list
      for(j=0;j<n;j++)                   // Find son of the grandfather
         if(strcmp(a[j][1],a[i][0])==0)  //find grandchildren
          {  printf("%s ",a[j][0]);
             c++;                        //increment count for every grandchildren
          }
 */

// Function to find the number of grandchildren for a given person
int findGrandchildren(const vector<pair<string, string>>& relationships, const string& person) {
    // Create a map to store the parent-child relationships
    unordered_map<string, string> parentChild;
    for (const auto& rel : relationships) {
        parentChild[rel.first] = rel.second;
    }
    for (const auto& rel : parentChild)
    {
        cout<<rel.first<<" ~ "<<rel.second<<endl;
    }
    // Create a map to store the grandchildren count
    unordered_map<string, int> grandchildrenCount;

    // Iterate over each person in the relationships
    for (const auto& rel : relationships) {
        const string& child = rel.first;
        const string& parent = rel.second;

        if (parentChild.find(parent) != parentChild.end()) {
            const string& grandparent = parentChild[parent];
            if (grandparent == person) {
                // If the grandparent is the target person, increment the grandchildren count
                grandchildrenCount[person]++;
            }
        }
    }

    for (const auto& rel : grandchildrenCount)
    {
        cout<<rel.first<<" ~ "<<rel.second<<endl;
    }

    // Return the number of grandchildren for the target person
    return grandchildrenCount[person];
}

int main() {
    // Given parent-child relationships
    vector<pair<string, string>> relationships = {
        {"luke", "shaw"},
        {"wayne", "rooney"},
        {"rooney", "ronaldo"},
        {"shaw", "rooney"},
        {"vicky","luke"}
    };

    // Given target person
    string targetPerson = "shaw";

    // Find the number of grandchildren for the target person
    int result = findGrandchildren(relationships, targetPerson);
    cout << targetPerson << " has " << result << " grandchildren." << endl;

    return 0;
}
/*
```

1. **`parentChild.find(parent) != parentChild.end()`**:
    - This line checks whether the `parent` (i.e., the second string in the relationship pair) exists in the `parentChild` map (which stores the parent-child relationships).
    - The `find(parent)` function searches for the specified `parent` key in the map. If it finds the key, it returns an iterator pointing to that key; otherwise, it returns `parentChild.end()`.
    - The comparison `!= parentChild.end()` checks if the iterator is not pointing to the end of the map (i.e., the key was found).

2. **`const string& grandparent = parentChild[parent];`**:
    - If the `parent` exists in the map, this line retrieves the corresponding value (i.e., the parent's parent) from the `parentChild` map.
    - The value (grandparent) associated with the `parent` key is stored in the `grandparent` variable.

3. **`if (grandparent == person)`**:
    - This condition checks whether the `grandparent` (i.e., the value retrieved from the map) is equal to the `person` (the target person we are interested in, such as "ronaldo").
    - If the `grandparent` matches the `person`, it means that the grandparent is indeed the target person.

4. **`grandchildrenCount[person]++;`**:
    - If the grandparent is the target person, we increment the count of grandchildren for that person.
    - The `grandchildrenCount` map keeps track of the number of grandchildren for each person.
    - We use the `person` (e.g., "ronaldo") as the key to access the count and increment it by 1.

In summary, this code snippet checks whether a given person (the `person` variable) is the grandparent of the current parent-child relationship. If so, it increments the count of grandchildren for that person. 🌟
*/
