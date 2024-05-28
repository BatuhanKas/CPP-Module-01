#include <iostream>
#include <string>
using namespace std;

// Driver code
int main() {
    string str = "geeksforgeeks a computer science";
    string str1 = "sci";

    // Find first occurrence of "geeks"
    size_t found = str.find(str1);
    if (found != string::npos) {
        cout << "First occurrence is " << found << endl;
        cout << "NPOS is " << string::npos << endl;
    }
}