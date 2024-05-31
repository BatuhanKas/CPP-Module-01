/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 14:04:19 by bkas              #+#    #+#             */
/*   Updated: 2024/05/31 14:46:15 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() { cout << this->name << " is Destroyed." << endl; }

void Zombie::setName(string name) { this->name = name; }

void Zombie::announce(void) {
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}