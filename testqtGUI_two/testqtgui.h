#ifndef TESTQTGUI_H
#define TESTQTGUI_H

#include <QtWidgets/QMainWindow>
#include "ui_testqtgui.h"

class testqtGUI : public QMainWindow
{
	Q_OBJECT

public:
	testqtGUI(QWidget *parent = 0);
	~testqtGUI();

private:
	Ui::testqtGUIClass ui;
};

#endif // TESTQTGUI_H
