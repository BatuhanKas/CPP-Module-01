/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 22:32:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream.hpp"

void replaceProcess(string& filename, string& s1, string& s2) {
    ifstream inputfile(filename.c_str());
    filename += ".replace";
    ofstream outputfile(filename.c_str());

    string line;
    size_t pos = 0, count = 0, tmp = 0;
    while (getline(inputfile, line)) {
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
        pos = 0;
        tmp = 0;
        if (count) {
            while (count) {
                outputfile << s2;
                count--;
            }
        } else {
            outputfile << line;
        }
        outputfile << endl;
    }

    cout << "melih size: " << count << endl;

    line == s1 ? outputfile << s2 << endl : outputfile << line << endl;

    // batubatubatubatu
    // melihmelihmelihmelih

    inputfile.close();
    outputfile.close();
}