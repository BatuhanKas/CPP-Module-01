/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:56:46 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 17:33:07 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream.hpp"

int main() {
    string filename, s1, s2;

    cout << "Enter filename:" << endl;
    cin >> filename;
    cout << "Enter Replace to String:" << endl;
    cin >> s1;
    cout << "Enter Replacement String:" << endl;
    cin >> s2;

    replaceProcess(filename, s1, s2);
}