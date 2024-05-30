/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asd.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:37:15 by bkas              #+#    #+#             */
/*   Updated: 2024/05/30 12:51:24 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

// Basit bir fonksiyon tanımla
void func(int value) { cout << "Value: " << value << endl; }
int func2(int value) {
    cout << "Value: " << value << endl;
    return 1;
}

int main() {
    // Üye fonksiyon işaretçisi tanımla ve bir fonksiyona işaret et

    // int xyz = 45;

    int asd = 0;

    int (*abc)(int) = &func2;

    void (*ptr)(int) = &func;

    // İşaretçiyi kullanarak fonksiyonu çağır
    ptr(42);
    asd = abc(33);

    cout << "asd:" << asd << endl;

    return 0;
}
