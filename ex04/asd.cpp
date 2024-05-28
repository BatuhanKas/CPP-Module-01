#include <iostream>
#include <string>
using namespace std;

// Driver code
int main() {
    string str = "asdfmelihmelihmelihmelih";
    string str1 = "melih";

    // Find first occurrence of "geeks"
    size_t found = str.find(str1);
    cout << "found: " << found << endl;
    string str2 = &str[found];
    cout << str2 << endl;





    /**
     * @brief kalsin
     * 
    while ((pos = line.find(word, pos)) != std::string::npos) {
        ++count;
        // Aramaya kaldığı yerden devam et
        pos += word.length();
    }
     */
}