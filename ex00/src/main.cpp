/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:17:54 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 11:07:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main() {
    Zombie z1;
    z1.setName("Ghost");
    z1.announce();

    Zombie *zm;
    zm = newZombie("Foo");
    zm->announce();
    randomChump("Blades");
    delete zm;
}