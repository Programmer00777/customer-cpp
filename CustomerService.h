//
// Created by Sergey Chernikov on 10/13/22.
//

#ifndef LAB1_CUSTOMERSERVICE_H
#define LAB1_CUSTOMERSERVICE_H

#include "Customer.h"

class CustomerService {
private:
    Customer* customers;
    int numberOfCustomers;

public:
    void generateRandomCustomers() {
        cout << "Please, enter the number of customers to generate > " << endl;
        cin >> numberOfCustomers;

        for (int i = 0; i < numberOfCustomers; i++) {

        }

        cout << "Thank you! " << numberOfCustomers << " have been successfully generated." << endl;
    }

    void printCustomersSortedByNameInAlphabetOrder() {

    }
};

#endif //LAB1_CUSTOMERSERVICE_H
