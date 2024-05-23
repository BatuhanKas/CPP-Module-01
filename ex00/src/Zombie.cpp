/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:04:19 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 14:09:13 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() { cout << zName << " is Destroyed." << endl; }

void Zombie::setName(string name) { zName = name; }

void Zombie::announce(void) {
    cout << zName << ": BraiiiiiiinnnzzzZ..." << endl;
}