/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:51:55 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 11:15:55 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string
#define cerr std::cerr
#define bad_alloc std::bad_alloc

class Zombie {
   private:
    string zName;

   public:
    Zombie();
    ~Zombie();
    void setName(string name);
    void announce(void);
};

Zombie *zombieHorde(int N, string name);

#endif