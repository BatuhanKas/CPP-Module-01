#include <iostream>
#include <string>
using namespace std;

// Driver code
int main() {
    string str = "geeksforgeeks a computer science";
    string str1 = "sci";

    // Find first occurrence of "geeks"
    size_t found = str.find(str1);
    string str2 = &str[found];
    cout << str2 << endl;

    while ((pos = line.find(word, pos)) != std::string::npos) {
        ++count;
        // Aramaya kaldığı yerden devam et
        pos += word.length();
    }
}