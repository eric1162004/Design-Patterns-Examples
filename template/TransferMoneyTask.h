//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_TRANSFERMONEYTASK_H
#define DESIGN_PATTERNS_EXAMPLES_TRANSFERMONEYTASK_H

#include <iostream>
#include "AuditTrail.h"
#include "Task.h"

class TransferMoneyTask : public Task {
protected:
    void doExecute() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_TRANSFERMONEYTASK_H
