/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:41:28 by bkas              #+#    #+#             */
/*   Updated: 2024/05/30 14:37:54 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define string std::string
#define cout std::cout
#define endl std::endl

class Harl {
   private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void defaultf(void);

   public:
    void complain(string level);
};

#endif