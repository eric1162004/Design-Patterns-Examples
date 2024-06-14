#include "DataSource.h"
#include "Spreadsheet.h"
#include "Chart.h"

int main() {

    DataSource dataSource;
    Spreadsheet spreadsheet;
    Chart chart;

    dataSource.addObserver(&spreadsheet);
    dataSource.addObserver(&chart);
    dataSource.setValue(1);

    dataSource.removeObserver(&spreadsheet);
    dataSource.removeObserver(&chart);
    dataSource.setValue(2);

    return 0;
}
