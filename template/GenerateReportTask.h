//
// Created by eric1 on 6/12/2024.
//

#ifndef DESIGN_PATTERNS_EXAMPLES_GENERATEREPORTTASK_H
#define DESIGN_PATTERNS_EXAMPLES_GENERATEREPORTTASK_H

#include <iostream>
#include "AuditTrail.h"
#include "Task.h"

class GenerateReportTask : public Task {
protected:
    void doExecute() override;
};


#endif //DESIGN_PATTERNS_EXAMPLES_GENERATEREPORTTASK_H
