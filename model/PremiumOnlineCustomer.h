//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_PREMIUMONLINECUSTOMER_H
#define LB3_PREMIUMONLINECUSTOMER_H


#include "OnlineCustomer.h"

class PremiumOnlineCustomer : public OnlineCustomer {
private:
    int discountPercentage;

public:
    PremiumOnlineCustomer() {
        this -> discountPercentage = 0;
    }

    PremiumOnlineCustomer(int accountId, int discountPercentage) : OnlineCustomer(accountId) {
        this -> discountPercentage = discountPercentage;
    }

    int getDiscountPercentage() const {
        return discountPercentage;
    }

    void setDiscountPercentage(int discountPercentage) {
        PremiumOnlineCustomer::discountPercentage = discountPercentage;
    }

    void printCustomerInfo() override {
        cout << "Customer type: Premium Online Customer" << endl;
        cout << "Discount percentage: " + to_string(getDiscountPercentage()) << "%" << endl;
        printGeneralInfo();
    }
};


#endif //LB3_PREMIUMONLINECUSTOMER_H
