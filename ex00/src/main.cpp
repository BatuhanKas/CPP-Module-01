/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:17:54 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 14:04:51 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main() {
    Zombie z1;
    z1.setName("Batu");
    z1.announce();

    Zombie *zm;
    zm = newZombie("Foo");
    zm->announce();
    randomChump("Melih");
    delete zm;
}