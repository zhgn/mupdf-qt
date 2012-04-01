/**
 * @file mainwindow.h
 * @brief class MainWindow
 * @author xiangxw xiangxw5689@126.com
 * @date 2012-04-01
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mupdf-qt.h"
#include <QtGui/QMainWindow>

class QScrollArea;
class QLabel;
class QToolBar;
class QAction;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void open();
	void previousPage();
	void nextPage();

private:
	void createActions();
	void createToolBars();
	void showPage(int index);

	QScrollArea *scrollArea;
	QLabel *label;
	QToolBar *toolBar;
	QAction *openAction;
	QAction *previousPageAction;
	QAction *nextPageAction;
	Mupdf::Document *m_doc;
	QString m_title;
	int m_numPages;
	int m_index;
};

#endif // end MAINWINDOW_H
