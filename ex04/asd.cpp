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
     * @brief komple eski yanlis calisan
     *
     *

     cout << "line: " << line << endl;
        cout << s1 << endl;
        // tmp = line.find(s1, pos);
        // cout << "1" << endl;
        cout << "pos: " << pos << endl;
        while ((tmp = line.find(s1, pos)) != string::npos) {
            count++;
            cout << "tmp:" << tmp << endl;
            cout << "2" << endl;
            // Aramaya kaldığı yerden devam et
            pos += s1.length();
            // pos = line.find(s1, pos);
        }
        /**
         * @brief bekle
         *
        pos = 0;
        tmp = 0;
        if (count)
            while (count) {
                outputfile << s2;
                count--;
            }
        else
            outputfile << line;
        outputfile << endl;
         */

    /**
     * @brief kalsin
     *
    while ((pos = line.find(word, pos)) != std::string::npos) {
        ++count;
        // Aramaya kaldığı yerden devam et
        pos += word.length();
    }
     */

    /**
     * @brief
     *
     *
     *
    string line;
    while (getline(inputfile, line)) {
        size_t pos = 0, tmp = 0;
        bool found = false;

        while ((tmp = line.find(s1, pos)) != string::npos) {
            found = true;
            if (pos != tmp) {
                outputfile << line.substr(
                    pos, tmp - pos);  // pos ve tmp arasındaki kısmı yazdır
            }
            outputfile << s2;         // Değiştirilecek kısmı yazdır
            pos = tmp + s1.length();  // Yeni arama konumunu güncelle
        }

        if (!found) {
            outputfile << line;  // Eğer hiçbir şey bulunmadıysa, satırı olduğu
                                 // gibi yazdır
        } else {
            outputfile << line.substr(pos);  // Satırın kalanını yazdır
        }

        outputfile << endl;  // Satır sonunu ekle
    }
     */
}