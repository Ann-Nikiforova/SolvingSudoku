#include "mainwindow.h"
#include <QApplication>
#include <QtTest/QTest>
#include <test_openeddigits.h>
#include <test_hiddendigits.h>
#include <test_enumerationvaluesinprognosis.h>
#include <cell.h>

void testing()
{
    test_openedDigits t;
    QTest::qExec(&t);
    test_hiddenDigits k;
    QTest::qExec(&k);
    test_enumerationValuesInPrognosis g;
    QTest::qExec(&g);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    testing();
    return a.exec();
}
