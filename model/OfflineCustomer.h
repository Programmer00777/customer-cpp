//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_OFFLINECUSTOMER_H
#define LB3_OFFLINECUSTOMER_H


#include <iostream>
#include "Customer.h"

class OfflineCustomer : public Customer {
private:
    string city;
    int age;

public:
    OfflineCustomer() {
        this -> city = "isn't specified";
        this -> age = 0;
    }

    OfflineCustomer(string city, int age) {
        this -> city = city;
        this -> age = age;
    }

    const string &getCity() const {
        return city;
    }

    void setCity(const string &city) {
        OfflineCustomer::city = city;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        OfflineCustomer::age = age;
    }

    void printCustomerInfo() override {
        cout << "Customer type: Offline Customer" << endl;
        cout << "City: " << getCity() << endl;
        cout << "Age: " << getAge() << endl;
        printGeneralInfo();
    }
};


#endif //LB3_OFFLINECUSTOMER_H
