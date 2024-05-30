/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:41:26 by bkas              #+#    #+#             */
/*   Updated: 2024/05/30 13:44:13 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug(void) {
    cout << "I love having extra bacon for my "
            "7XL-double-cheese-triple-pickle-special-ketchup burger.I really "
            "do !"
         << endl;
}

void Harl::info(void) {
    cout << "I cannot believe adding extra bacon costs more money. You didn't "
            "put enough bacon in my burger !If you did, I wouldn't be asking "
            "for more!"
         << endl;
}

void Harl::warning(void) {
    cout
        << "I think I deserve to have some extra bacon for free. I've been "
           "coming for years whereas you started working here since last month."
        << endl;
}

void Harl::error(void) {
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::complain(string level) {
    string actions[4] = {"debug", "info", "warning", "error"};

    void (Harl::*ptr[])() = {&Harl::debug, &Harl::info, &Harl::warning,
                             &Harl::error};

    for (size_t i = 0; i < sizeof(actions) / sizeof(actions[0]); i++) {
        if (actions[i] == level) {
            (this->*ptr[i])();
            return;
        }
    }
}