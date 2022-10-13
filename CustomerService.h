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
        cout << "Here they are:" << endl;
        printAllCustomers();
    }

    void printCustomersSortedByNameInAlphabetOrder() {

    }

    void printAllCustomers() {
        for (int i = 0; i < numberOfCustomers; i++) {
            cout << customers[i].toString() << endl;
        }
    }
};

#endif //LAB1_CUSTOMERSERVICE_H
