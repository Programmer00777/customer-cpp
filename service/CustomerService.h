//
// Created by Sergey Chernikov on 10/13/22.
//

#ifndef LAB1_CUSTOMERSERVICE_H
#define LAB1_CUSTOMERSERVICE_H

#include "../utils/CustomerUtil.h"
#include "../model/Customer.h"
#include "../utils/RandomCustomerGenerator.h"
#include "../utils/CustomerReader.h"
#include <vector>

class CustomerService {
private:
    int numberOfCustomers;
    RandomCustomerGenerator randomCustomerGenerator;
    CustomerReader customerReader;
    vector<Customer*> customers;


public:
    void generateRandomCustomers() {
        cout << "Please, enter the number of customers to generate > " << endl;
        cin >> numberOfCustomers;

        for (int i = 0; i < numberOfCustomers; i++) {
            customers.push_back(randomCustomerGenerator.generateRandomCustomer());
        }

        cout << "Thank you! " << numberOfCustomers << " customers have been successfully generated." << endl;
        cout << "Here they are:" << endl << endl;
        printAllCustomers();
    }

    void printCustomersSortedByFirstNameInAlphabetOrder() {
        for (int i = 0; i < numberOfCustomers; i++) {
            for (int k = i + 1; k < numberOfCustomers; k++) {
                if (customers.at(i)->getFirstName() > customers.at(i)->getFirstName()) {
                    Customer* temp = customers.at(i);
                    customers.at(i) = customers.at(k);
                    customers.at(k) = temp;
                }
            }
        }
        cout << "Sorted by firstname" << endl;
        printAllCustomers();
    }

    void printCustomersSortedByCardNumberInSpecifiedRange() {
        int from, to;
        cout << "Please, enter the range of numbers to search for credit cards > " << endl;
        cin >> from >> to;

        if (from > 99 && to < 1000) {
            cout << "Customers with card numbers between " << from << " and " << to << endl << endl;
            for (int i = 0; i < numberOfCustomers; i++) {
                if (customers.at(i)->getCreditCardNumber() >= from && customers.at(i)->getCreditCardNumber() <= to) {
                    customerReader.readCustomerAndPrintInfo(customers.at(i));
                }
            }
        } else {
            cout << "Card number must be between 100 and 999";
        }
    }

    void printAllCustomers() {
        for (int i = 0; i < numberOfCustomers; i++) {
            customerReader.readCustomerAndPrintInfo(customers.at(i));
        }
    }
};

#endif //LAB1_CUSTOMERSERVICE_H
