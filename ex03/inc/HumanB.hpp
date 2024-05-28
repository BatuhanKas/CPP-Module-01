/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:07:40 by bkas              #+#    #+#             */
/*   Updated: 2024/05/28 15:28:19 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
   private:
    string name;
    Weapon *weapon;

   public:
    HumanB(string name);
    HumanB(string name, Weapon *weapon);
    void setWeapon(Weapon &weapon);
    void attack();
};

#endif