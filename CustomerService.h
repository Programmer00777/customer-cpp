//
// Created by Sergey Chernikov on 10/13/22.
//

#ifndef LAB1_CUSTOMERSERVICE_H
#define LAB1_CUSTOMERSERVICE_H

#include "Customer.h"
#include "CustomerUtil.h"

class CustomerService {
private:
    Customer* customers;
    int numberOfCustomers;
    CustomerUtil util;

public:
    void generateRandomCustomers() {
        cout << "Please, enter the number of customers to generate > " << endl;
        cin >> numberOfCustomers;
        customers = new Customer[numberOfCustomers];

        for (int i = 0; i < numberOfCustomers; i++) {
            customers[i] = Customer(util.getRandomFirstName(),
                                    util.getRandomLastName(),
                                    util.getRandomAddress(),
                                    util.getRandomPhoneNumber(),
                                    util.getRandomCardNumber(),
                                    util.getRandomBankId());
        }

        cout << "Thank you! " << numberOfCustomers << " have been successfully generated." << endl;
        cout << "Here they are:" << endl << endl;
        printAllCustomers();
    }

    void printCustomersSortedByFirstNameInAlphabetOrder() {
        for (int i = 0; i < numberOfCustomers; i++) {
            for (int k = i + 1; k < numberOfCustomers; k++) {
                if (customers[i].getFirstName() > customers[k].getFirstName()) {
                    Customer temp = customers[i];
                    customers[i] = customers[k];
                    customers[k] = temp;
                }
            }
        }
        cout << "Sorted by firstname" << endl;
        printAllCustomers();
    }

    void printCustomersSortedByCardNumberInSpecifiedRange(int from, int to) {
        if (from > 99 && to < 1000) {
            cout << "Customers with card numbers between " << from << " and " << to << endl << endl;
            for (int i = 0; i < numberOfCustomers; i++) {
                if (customers[i].getCreditCardNumber() >= from && customers[i].getCreditCardNumber() <= to) {
                    cout << customers[i].toString() << endl;
                }
            }
        } else {
            cout << "Card number must be between 100 and 999";
        }
    }

    void printAllCustomers() {
        for (int i = 0; i < numberOfCustomers; i++) {
            cout << customers[i].toString() << endl;
        }
    }
};

#endif //LAB1_CUSTOMERSERVICE_H
