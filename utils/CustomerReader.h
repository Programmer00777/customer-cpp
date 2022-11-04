//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_CUSTOMERREADER_H
#define LB3_CUSTOMERREADER_H


#include <iostream>
#include "../model/Customer.h"

class CustomerReader {
public:
    void readCustomerAndPrintInfo(Customer* customer) {
        cout << "=====================================" << endl;
        cout << "Reader: reading..." << endl;
        customer->printCustomerInfo();
        cout << "=====================================" << endl;
    }
};


#endif //LB3_CUSTOMERREADER_H
