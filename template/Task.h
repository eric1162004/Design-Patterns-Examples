//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_TASK_H
#define DESIGN_PATTERNS_EXAMPLES_TASK_H


#include "AuditTrail.h"

class Task {
public:
    void execute();

private:
    AuditTrail auditTrail {};

    virtual void doExecute() = 0;
protected:
};


#endif //DESIGN_PATTERNS_EXAMPLES_TASK_H
