/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:41:26 by bkas              #+#    #+#             */
/*   Updated: 2024/06/03 11:02:24 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug(void) {
    cout << "I love having extra bacon for my "
            "7XL-double-cheese-triple-pickle-special-ketchup burger."
         << endl;
    cout << "I really do !" << endl << endl;
}

void Harl::info(void) {
    cout << "I cannot believe adding extra bacon costs more money." << endl;
    cout << "You didn't put enough bacon in my burger !" << endl;
    cout << "If you did, I wouldn't be asking for more!" << endl << endl;
}

void Harl::warning(void) {
    cout << "I think I deserve to have some extra bacon for free." << endl;
    cout << "I've been coming for years whereas you started working here since "
            "last month."
         << endl
         << endl;
}

void Harl::error(void) {
    cout << "This is unacceptable! I want to speak to the manager now." << endl
         << endl;
}

void Harl::complain(string level) {
    string actions[] = {"debug", "info", "warning", "error"};

    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning,
                             &Harl::error};

    size_t i = 0;
    while (i < (sizeof(actions) / sizeof(actions[0])) &&
           actions[i].compare(level))
        i++;

    switch (i) {
        case 0:
            (this->*ptr[0])();
            break;
        case 1:
            (this->*ptr[1])();
            break;
        case 2:
            (this->*ptr[2])();
            break;
        case 3:
            (this->*ptr[3])();
            break;
        default:
            break;
    }
}