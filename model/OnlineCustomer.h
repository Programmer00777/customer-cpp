//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_ONLINECUSTOMER_H
#define LB3_ONLINECUSTOMER_H


#include <iostream>
#include "Customer.h"

class OnlineCustomer : public Customer {
protected:
    int accountId;

public:
    OnlineCustomer() {
        this -> accountId = -1;
    }

    OnlineCustomer(int accountId) {
        this -> accountId = accountId;
    }

    int getAccountId() const {
        return accountId;
    }

    void setAccountId(int accountId) {
        OnlineCustomer::accountId = accountId;
    }
};


#endif //LB3_ONLINECUSTOMER_H
