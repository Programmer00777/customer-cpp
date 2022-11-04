//
// Created by Sergey Chernikov on 10/13/22.
//

#ifndef LAB1_CUSTOMERTESTER_H
#define LAB1_CUSTOMERTESTER_H

#include "../service/CustomerService.h"

class CustomerTester {
public:
    void startTest() {
        CustomerService customerService;

        cout << "Hi! It's Customer Management System. First, let's create some amount of users." << endl;
        customerService.generateRandomCustomers();

        int answer = -2;

        while (answer != -1) {
            cout << "Choose the operation you want to perform:" << endl;
            cout << "1 - Print users sorted by first name" << endl;
            cout << "2 - Print users that have card numbers in the specified range" << endl;
            cout << "\n0 - Exit the program" << endl;
            cin >> answer;

            switch (answer) {
                case (1):
                    customerService.printCustomersSortedByFirstNameInAlphabetOrder();
                    break;
                case (2):
                    customerService.printCustomersSortedByCardNumberInSpecifiedRange();
                    break;
                case (0):
                    cout << "Exiting the program..." << endl;
                    exit(0);
                default:
                    cout << "Unknown command. Try again." << endl;
                    break;
            }
        }
    }
};

#endif //LAB1_CUSTOMERTESTER_H
