/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:34:35 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 12:01:04 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

int main() {
    string brain = "HI THIS IS BRAIN";
    string *ptr = &brain;
    string &ref = brain;

    cout << "Memory Adress of Default String: " << &brain << endl;
    cout << "Memory Adress of String Pointer: " << ptr << endl;
    cout << "Memory Adress of String Reference: " << &ref << endl;

    cout << "The Value of Default String: " << brain << endl;
    cout << "The Value of String Pointer: " << *ptr << endl;
    cout << "The Value of String Reference: " << ref << endl;
}