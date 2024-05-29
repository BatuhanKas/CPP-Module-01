/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:56:46 by bkas              #+#    #+#             */
/*   Updated: 2024/05/29 18:03:52 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Stream.hpp"

int main(int ac, char **av) {
    if (ac == 4) {
        string filename, s1, s2;
        filename = av[1];
        s1 = av[2];
        s2 = av[3];
        replaceProcess(filename, s1, s2);
    } else {
        cout << "Wrong Input! Need 3 Parameters!" << endl;
    }
    return 0;
}