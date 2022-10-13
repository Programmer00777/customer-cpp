#include "CustomerService.h"

using namespace std;

int main() {
    CustomerService customerService;

    customerService.generateRandomCustomers();
    customerService.printCustomersSortedByFirstNameInAlphabetOrder();
    customerService.printCustomersSortedByCardNumberInSpecifiedRange(200, 700);

    return 0;
}
