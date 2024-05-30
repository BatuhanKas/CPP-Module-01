
void Harl::complain(string level) {
    string actions[] = {"debug", "info", "warning", "error"};

    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning,
                                   &Harl::error};

    for (size_t i = 0; i < sizeof(actions) / sizeof(actions[0]); i++) {
        if (actions[i] == level) {
            (this->*functions[i])();
            return;
        }
    }

    cout << "False Input!" << endl;
}