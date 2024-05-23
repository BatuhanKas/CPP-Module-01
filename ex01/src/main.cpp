/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:14:05 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 17:12:12 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main() {
    Zombie *zombie;
    int numOfZombies = 5;
    zombie = zombieHorde(numOfZombies, "Zombie");
    for (int i = 0; i < numOfZombies; i++) {
        zombie[i].announce();
    }
    delete[] zombie;
}