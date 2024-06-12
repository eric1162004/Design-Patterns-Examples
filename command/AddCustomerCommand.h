//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_ADDCUSTOMERCOMMAND_H
#define DESIGN_PATTERNS_EXAMPLES_ADDCUSTOMERCOMMAND_H

#include "UI_library/Command.h"
#include "CustomerService.h"

class AddCustomerCommand : public Command{
public:
    explicit AddCustomerCommand(const CustomerService &customerService);
    void execute() override;

private:
    CustomerService customerService;
};


#endif //DESIGN_PATTERNS_EXAMPLES_ADDCUSTOMERCOMMAND_H
