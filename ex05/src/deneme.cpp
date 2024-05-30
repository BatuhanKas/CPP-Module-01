/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deneme.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:28:35 by bkas              #+#    #+#             */
/*   Updated: 2024/05/30 13:43:27 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

class X {
   public:
    int a;
    void f(int b) { cout << "The value of b is " << b << endl; }
    void x(int d) { cout << "The value of c is " << d << endl; }

    void fa() { cout << "The value of b is " << endl; }
    void xe() { cout << "The value of c is " << endl; }
};

int main() {
    // declare pointer to data member
    // int X::*ptiptr = &X::a;
    // int *ptr = &a;
    // Class eklenmis hali = int X::*ptr = &X::a;

    string sarr[] = {"fa", "xe"};

    // declare a pointer to member function
    // void (X::*ptfptr)(int) = &X::f;

    // void (X::*ptr)(int) = &X::x;

    void (X::*parr[])() = {&X::fa, &X::xe};

    // create an object of class type X
    X xobject;

    for (size_t i = 0; i < sizeof(sarr) / sizeof(sarr[0]); i++) {
        if (sarr[i] == "xe") {
            (xobject.*parr[i])();
            return 0;
        }
    }
    cout << "Error" << endl;

    // (xobject.*parr[0])();

    // initialize data member
    // xobject.*ptiptr = 10;

    // cout << "The value of a is " << xobject.*ptiptr << endl;

    // call member function
    // (xobject.*ptfptr)(20);
    // (xobject.*ptr)(35);
}