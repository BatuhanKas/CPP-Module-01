/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:38:44 by bkas              #+#    #+#             */
/*   Updated: 2024/05/31 17:24:40 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *newZombie(string name) {
    try {
        Zombie *zombie;
        zombie = new Zombie();
        zombie->setName(name);
        return zombie;
    } catch (const exception &e) {
        cerr << "Heap allocation Failed:" << e.what() << endl;
    }
}