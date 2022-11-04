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
    const string CITIES[10] = {"Akron", "Bakersfield", "Kansas City", "Laredo", "St. Paul",
                               "Scottsdale", "Washington", "Buffalo", "North Hempstead", "Riverside"};
    const int AGE_FROM = 18;
    const int AGE_TO = 90;
    const int ACCOUNT_ID_FROM = 1000;
    const int ACCOUNT_ID_TO = 9999;
    const string TYPES_OF_CUSTOMERS[3] = {"OfflineCustomer", "BasicOnlineCustomer", "PremiumOnlineCustomer"};
    const int DISCOUNT_PERCENTAGE_FROM = 5;
    const int DISCOUNT_PERCENTAGE_TO = 20;

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

    string getRandomCity() {
        return CITIES[rand() % 10];
    }

    int getRandomAge() {
        return AGE_FROM + rand() % ((AGE_TO + 1) - AGE_FROM);
    }

    int getRandomAccountId() {
        return ACCOUNT_ID_FROM + rand() % ((ACCOUNT_ID_TO + 1) - ACCOUNT_ID_FROM);
    }

    string getRandomType() {
        return TYPES_OF_CUSTOMERS[rand() % 3];
    }

    int getRandomDiscountPercentage() {
        return DISCOUNT_PERCENTAGE_FROM + rand() % ((DISCOUNT_PERCENTAGE_TO + 1) - DISCOUNT_PERCENTAGE_FROM);
    }
};

#endif //LAB1_CUSTOMERUTIL_H
