//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_RANDOMCUSTOMERGENERATOR_H
#define LB3_RANDOMCUSTOMERGENERATOR_H

#include "CustomerUtil.h"
#include "../model/Customer.h"
#include "../model/OfflineCustomer.h"
#include "../model/PremiumOnlineCustomer.h"
#include "../model/BasicOnlineCustomer.h"

class RandomCustomerGenerator {
private:
    CustomerUtil util;
    void setRandomGeneralCustomer(Customer* customer) {
        customer->setAll(util.getRandomFirstName(),
                         util.getRandomLastName(),
                         util.getRandomAddress(),
                         util.getRandomPhoneNumber(),
                         util.getRandomCardNumber(),
                         util.getRandomBankId());
    }
    
public:
    Customer* generateRandomCustomer() {
        const char* type = util.getRandomType().c_str();
        Customer* customer;
        if (strcmp(type, "OfflineCustomer") == 0) {
            customer = new OfflineCustomer(util.getRandomCity(), util.getRandomAge());
            setRandomGeneralCustomer(customer);
        } else if (strcmp(type, "BasicOnlineCustomer") == 0) {
            customer = new BasicOnlineCustomer(util.getRandomAccountId());
            setRandomGeneralCustomer(customer);
        } else if (strcmp(type, "PremiumOnlineCustomer") == 0) {
            customer = new PremiumOnlineCustomer(util.getRandomAccountId(), util.getRandomDiscountPercentage());
            setRandomGeneralCustomer(customer);
        }
        return customer;
    }
};


#endif //LB3_RANDOMCUSTOMERGENERATOR_H
