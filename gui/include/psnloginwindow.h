#ifndef PSNLOGINWINDOW_H
#define PSNLOGINWINDOW_H

#include <QLabel>
#include <QMainWindow>
#include <QSurfaceFormat>
#include <QWebEngineView>

#include <qeventloop.h>
#include "registdialog.h"
#include "psnaccountid.h"

class PSNLoginWindow : public QMainWindow {
    Q_OBJECT

private:
    QWebEngineView* web_engine_view;

public:
    PSNLoginWindow(RegistDialog *parent = nullptr);

    private slots:
        void handleWebEngineLoadFinished(bool);

};



#endif //PSNLOGINWINDOW_H
