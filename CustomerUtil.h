//
// Created by Sergey Chernikov on 10/13/22.
//

#ifndef LAB1_CUSTOMERUTIL_H
#define LAB1_CUSTOMERUTIL_H

#include <iostream>

using namespace std;

class CustomerUtil {
private:
    const string FIRST_NAMES[10] = {"Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia",
                                   "Miller", "Davis", "Martinez", "Wilson"};
    const string LAST_NAMES[10] = {"John", "Bob", "Alex", "Katty", "Carl", "Thomas",
                                  "Liam", "Olivia", "James", "Emma"};
    const string ADDRESSES[10] = {"3712 Oak Avenue", "1811 Glenwood Avenue", "215 Counts Lane",
                                  "68 Hamilton Drive", "1993 Oak Lane", "1570 Angus Road",
                                  "3758 New Street", "49 Sunrise Road", "2333 Juniper Drive",
                                  "3602 Hillside Drive"};
    const string PHONE_NUMBERS[10] = {"847-926-0652", "216-267-3391", "859-935-6728", "320-242-7632",
                                     "660-653-9989", "212-387-9718", "541-257-8213", "702-921-3337",
                                     "989-915-4765", "339-499-6445"};
    const int CARD_NUMBER_FROM = 100;
    const int CARD_NUMBER_TO = 999;
    const int BANK_ID_FROM = 1000;
    const int BANK_ID_TO = 9999;
public:
    CustomerUtil() {
        srand((unsigned) time(NULL));
    }

    string getRandomFirstName() {
        return FIRST_NAMES[rand() % 10];
    }

    string getRandomLastName() {
        return LAST_NAMES[rand() % 10];
    }

    string getRandomAddress() {
        return ADDRESSES[rand() % 10];
    }

    string getRandomPhoneNumber() {
        return PHONE_NUMBERS[rand() % 10];
    }

    int getRandomCardNumber() {
        return CARD_NUMBER_FROM + rand() % ((CARD_NUMBER_TO + 1) - CARD_NUMBER_FROM);
    }

    int getRandomBankId() {
        return BANK_ID_FROM + rand() % ((BANK_ID_TO + 1) - BANK_ID_FROM);
    }
};

#endif //LAB1_CUSTOMERUTIL_H
