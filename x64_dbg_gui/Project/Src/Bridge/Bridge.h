#ifndef BRIDGE_H
#define BRIDGE_H

#include <QObject>
#include <QDebug>
#include <QtGui>
#include "NewTypes.h"

#ifdef BUILD_LIB
    #include "Exports.h"
    #include "main.h"
#endif

#include "Imports.h"


class Bridge : public QObject
{
    Q_OBJECT
public:
    explicit Bridge(QObject *parent = 0);
    void readProcessMemory(byte_t* dest, uint_t va, uint_t size);
    uint_t getSize(uint_t va);
    void emitDisassembleAtSignal(uint_t va, uint_t eip);
    void emitDbgStateChanged(DBGSTATE state);
    uint_t getBase(uint_t addr);
    static Bridge* getBridge();
    static void initBridge();
    bool execCmd(const char* cmd);
    bool getMemMapFromDbg(MEMMAP* parMemMap);
    void emitAddMsgToLog(QString msg);
    void emitClearLog();
    
signals:
    void disassembleAt(uint_t va, uint_t eip);
    void dbgStateChanged(DBGSTATE state);
    void addMsgToLog(QString msg);
    void clearLog();
    
public slots:

private:

public:
    QByteArray* mData;
};

#endif // BRIDGE_H
