//
// Created by eric1 on 6/12/2024.
//

#include "AddCustomerCommand.h"

AddCustomerCommand::AddCustomerCommand(const CustomerService &customerService) : customerService(customerService) {}

void AddCustomerCommand::execute() {
    customerService.addCustomer();
}

