/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Stream.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 16:57:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 17:49:54 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream.hpp"

void replaceProcess(string& filename, string& s1, string& s2) {
    ifstream inputfile(filename);
    ofstream outputfile(filename + ".replace");

    string line;
    while (getline(inputfile, line)) {

        line.find(s1);




        line == s1 ? outputfile << s2 << endl : outputfile << line << endl;
    }

    // batubatubatubatu
    // melihmelihmelihmelih

    inputfile.close();
    outputfile.close();
}