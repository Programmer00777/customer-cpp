//
// Created by Sergey Chernikov on 11/3/22.
//

#ifndef LB3_CUSTOMER_H
#define LB3_CUSTOMER_H

#include <string>

using namespace std;

class Customer {
private:
    string firstName;
    string lastName;
    string address;
    string phoneNumber;
    int creditCardNumber;
    int bankAccountId;

public:
    const string &getFirstName() const {
        return firstName;
    }

    void setFirstName(const string &firstName) {
        Customer::firstName = firstName;
    }

    const string &getLastName() const {
        return lastName;
    }

    void setLastName(const string &lastName) {
        Customer::lastName = lastName;
    }

    const string &getAddress() const {
        return address;
    }

    void setAddress(const string &address) {
        Customer::address = address;
    }

    const string &getPhoneNumber() const {
        return phoneNumber;
    }

    void setPhoneNumber(const string &phoneNumber) {
        Customer::phoneNumber = phoneNumber;
    }

    int getCreditCardNumber() const {
        return creditCardNumber;
    }

    void setCreditCardNumber(int creditCardNumber) {
        Customer::creditCardNumber = creditCardNumber;
    }

    int getBankAccountId() const {
        return bankAccountId;
    }

    void setBankAccountId(int bankAccountId) {
        Customer::bankAccountId = bankAccountId;
    }

    void printGeneralInfo() const {
        cout << "Fullname: " << getLastName() << " " << getFirstName() << endl;
        cout << "Address: " << getAddress() << endl;
        cout << "Phone Number: " << getPhoneNumber() << endl;
        cout << "Credit Card Number: " << getCreditCardNumber() << endl;
        cout << "Bank AccountID: " << getBankAccountId() << endl;
    }

    void setAll(string firstName,
                string lastName,
                string address,
                string phoneNumber,
                int creditCardNumber,
                int bankAccountId) {
        setFirstName(firstName);
        setLastName(lastName);
        setAddress(address);
        setPhoneNumber(phoneNumber);
        setCreditCardNumber(creditCardNumber);
        setBankAccountId(bankAccountId);
    }

    virtual void printCustomerInfo() {
        printGeneralInfo();
    };
};


#endif //LB3_CUSTOMER_H
