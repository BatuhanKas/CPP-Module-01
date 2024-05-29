/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/29 18:09:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Stream.hpp"

void replaceProcess(string& filename, string& s1, string& s2) {
    ifstream inputfile(filename.c_str());
    if (!inputfile) {
        cerr << "input file error!" << endl;
        return;
    }

    filename += ".replace";
    ofstream outputfile(filename.c_str());
    if (!outputfile) {
        cerr << "output file error!" << endl;
        return;
    }

    string line;
    while (getline(inputfile, line)) {
        size_t pos = 0, tmp = 0;
        bool found = false;
        while ((tmp = line.find(s1, pos)) != string::npos) {
            found = true;
            if (pos != tmp) {
                outputfile << line.substr(pos, tmp - pos);
            }
            outputfile << s2;
            pos = tmp + s1.length();
        }
        if (!found) {
            outputfile << line;
        } else {
            outputfile << line.substr(pos);
        }
        outputfile << endl;
    }
    inputfile.close();
    outputfile.close();
}