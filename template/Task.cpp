//
// Created by eric1 on 6/12/2024.
//

#include "Task.h"

void Task::execute() {
    auditTrail.record();

    doExecute();
}
