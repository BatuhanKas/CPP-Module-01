/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:09:22 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 14:55:10 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(string hname, Weapon& weapon) : weapon(weapon) { name = hname; }

void HumanA::attack() {
    cout << name << " attacks with their " << weapon.getType() << endl;
}