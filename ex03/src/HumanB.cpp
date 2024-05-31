/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 12:44:44 by bkas              #+#    #+#             */
/*   Updated: 2024/05/31 12:41:35 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(string name) {
    this->name = name;
    this->weapon = 0;
}

HumanB::HumanB(string name, Weapon* weapon) : name(name), weapon(weapon){};

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }

void HumanB::attack() {
    if (this->weapon)
        cout << name << " attacks with their " << weapon->getType() << endl;
    else
        cout << name << " don't have a weapon! " << endl;
}