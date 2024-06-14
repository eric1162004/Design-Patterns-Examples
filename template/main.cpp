#include "TransferMoneyTask.h"

// The Template Pattern
// Allows defining a template (Task) for an operation. Specific steps will then
// be implemented in subclasses (TransferMoneyTask).

int main() {

    TransferMoneyTask transferMoneyTask;
    transferMoneyTask.execute();

    return 0;
}
