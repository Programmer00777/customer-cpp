//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_BASICONLINECUSTOMER_H
#define LB3_BASICONLINECUSTOMER_H


#include "OnlineCustomer.h"

class BasicOnlineCustomer : public OnlineCustomer {
public:
    BasicOnlineCustomer(int accountId) : OnlineCustomer(accountId) {

    }

    void printCustomerInfo() override {
        cout << "Customer type: Basic Online Customer" << endl;
        printGeneralInfo();
    }
};


#endif //LB3_BASICONLINECUSTOMER_H
