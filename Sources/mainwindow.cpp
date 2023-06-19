//
// Created by tgeuuy on 2023/6/20.
//

// You may need to build the project (run Qt uic code generator) to get "ui_MainWindow.h" resolved

#include "Header/mainwindow.h"
//#include "ui_MainWindow.h"
#include "Forms/ui_MainWindow.h"


MainWindow::MainWindow(QWidget *parent) :
        QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}
