/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:15:55 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 16:47:05 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie *zombieHorde(int N, string name) {
    Zombie *zm;
    zm = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zm[i].setName(name);
    }
    return zm;
}