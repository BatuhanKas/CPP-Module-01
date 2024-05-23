/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:48:30 by bkas              #+#    #+#             */
/*   Updated: 2024/05/23 18:00:51 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

#define string std::string
#define cout std::cout
#define endl std::endl

class Weapon {
   private:
    string type;

   public:
    string getType() const;
    void setType(string set);
};

#endif