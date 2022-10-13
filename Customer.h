//
// Created by Sergey Chernikov on 10/13/22.
//

#ifndef LAB1_CUSTOMER_H
#define LAB1_CUSTOMER_H

#include <iostream>

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
    Customer() {
        this -> firstName = "empty";
        this -> lastName = "empty";
        this -> address = "empty";
        this -> phoneNumber = "empty";
        this -> creditCardNumber = 0;
        this -> bankAccountId = 0;
    }

    Customer(string firstName,
             string lastName,
             string address,
             string phoneNumber,
             int creditCardNumber,
             int bankAccountId) {
        this -> firstName = firstName;
        this -> lastName = lastName;
        this -> address = address;
        this -> phoneNumber = phoneNumber;
        this -> creditCardNumber = creditCardNumber;
        this -> bankAccountId = bankAccountId;
    }

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

    string toString() {
        return "Fullname: " + getLastName() + " " + getFirstName() +
                "\nAddress: " + getAddress() +
                "\nPhone number: " + getPhoneNumber() +
                "\nCredit card number: " + to_string(getCreditCardNumber()) +
                "\nBank account ID: " + to_string(getBankAccountId()) + "\n";

    }
};

#endif //LAB1_CUSTOMER_H
