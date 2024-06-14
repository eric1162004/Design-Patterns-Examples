#include "Group.h"

using namespace std;

int main() {

    Group group1;
    Shape shape1;
    Shape shape2;
    group1.add(&shape1);
    group1.add(&shape2);

    Group group2;
    Shape shape3;
    Shape shape4;
    group2.add(&shape3);
    group2.add(&shape4);

    group1.add(&group2);
    group1.render();

    return 0;
}
