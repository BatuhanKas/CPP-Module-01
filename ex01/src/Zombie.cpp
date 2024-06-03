/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:14:32 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 11:19:02 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
    static int b = 5;
    cout << zName << b-- << " is Destroyed." << endl;
}

void Zombie::setName(string name) { zName = name; }

void Zombie::announce(void) {
    static int i = 1;
    cout << zName << i++ << ": BraiiiiiiinnnzzzZ..." << endl;
}