#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	QLabel *label = new QLabel("Hello Qt!");
	label->show();//123
	return app.exec();
}