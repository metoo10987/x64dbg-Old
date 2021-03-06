#ifndef LABELCLASS_H
#define LABELCLASS_H

#include <QLabel>
#include <QStatusBar>
#include "Bridge.h"

class StatusLabel : public QLabel
{
    Q_OBJECT
public:
    explicit StatusLabel(QStatusBar* parent = 0);

public slots:
    void debugStateChangedSlot(DBGSTATE state);

};

#endif // LABELCLASS_H
