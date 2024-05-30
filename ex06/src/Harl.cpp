/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkas <bkas@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:41:26 by bkas              #+#    #+#             */
/*   Updated: 2024/05/30 14:40:46 by bkas             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

void Harl::debug(void) {
    cout << "[ DEBUG ]" << endl;
    cout << "I love having extra bacon for my "
            "7XL-double-cheese-triple-pickle-special-ketchup burger."
         << endl;
    cout << "I really do !" << endl;
}

void Harl::info(void) {
    cout << "[ INFO ]" << endl;
    cout << "I cannot believe adding extra bacon costs more money." << endl;
    cout << " You didn't put enough bacon in my burger !" << endl;
    cout << "If you did, I wouldn't be asking for more!" << endl;
}

void Harl::warning(void) {
    cout << "[ WARNING ]" << endl;
    cout << "I think I deserve to have some extra bacon for free." << endl;
    cout << "I've been coming for years whereas you started working here since "
            "last month."
         << endl;
}

void Harl::error(void) {
    cout << "[ ERROR ]" << endl;
    cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void Harl::defaultf(void) {
    cout << "[ Probably complaining about insignificant problems ]" << endl;
}

void Harl::complain(string level) {
    string actions[4] = {"debug", "info", "warning", "error"};

    size_t i = 0;
    for (i = 0; i < sizeof(actions) / sizeof(actions[0]); i++)
        if (level == actions[i]) break;

    cout << "i val: " << i << endl;
    switch (i) {
        case '0':
            Harl::debug();
        case '1':
            Harl::info();
        case '2':
            Harl::warning();
        case '3':
            Harl::error();
            break;
        default:
            Harl::defaultf();
            break;
    }
}