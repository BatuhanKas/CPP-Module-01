/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:51:55 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 14:03:35 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

class Zombie {
   private:
    string zName;

   public:
    Zombie();
    ~Zombie();
    void setName(string name);
    void announce(void);
};

Zombie *newZombie(string name);
void randomChump(string name);

#endif