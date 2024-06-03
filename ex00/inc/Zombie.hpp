/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:51:55 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 11:06:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <exception>

#define cout std::cout
#define cerr std::cerr
#define endl std::endl
#define string std::string
#define bad_alloc std::bad_alloc

class Zombie {
   private:
    string name;

   public:
    Zombie();
    ~Zombie();
    void setName(string name);
    void announce(void);
};

Zombie *newZombie(string name);
void randomChump(string name);

#endif