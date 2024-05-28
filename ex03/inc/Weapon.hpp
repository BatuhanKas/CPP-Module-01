/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:48:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 15:21:08 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Weapon {
   private:
    string type;

   public:
    Weapon(string type);
    string getType() const;
    void setType(string set);
};

#endif