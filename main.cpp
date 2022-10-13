#include "CustomerService.h"

using namespace std;

int main() {
    CustomerService customerService;

    customerService.generateRandomCustomers();
    customerService.printCustomersSortedByFirstNameInAlphabetOrder();

    return 0;
}
