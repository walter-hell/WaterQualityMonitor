/****************************************************************************
** Meta object code from reading C++ file 'serialportwriter.h'
**
** Created: Wed Nov 13 05:01:02 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serialportwriter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialportwriter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SerialPortWriter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   18,   17,   17, 0x08,
      51,   17,   17,   17, 0x08,
      73,   67,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SerialPortWriter[] = {
    "SerialPortWriter\0\0bytes\0"
    "handleBytesWritten(qint64)\0handleTimeout()\0"
    "error\0handleError(QSerialPort::SerialPortError)\0"
};

void SerialPortWriter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SerialPortWriter *_t = static_cast<SerialPortWriter *>(_o);
        switch (_id) {
        case 0: _t->handleBytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->handleTimeout(); break;
        case 2: _t->handleError((*reinterpret_cast< QSerialPort::SerialPortError(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SerialPortWriter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SerialPortWriter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialPortWriter,
      qt_meta_data_SerialPortWriter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SerialPortWriter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SerialPortWriter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SerialPortWriter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SerialPortWriter))
        return static_cast<void*>(const_cast< SerialPortWriter*>(this));
    return QObject::qt_metacast(_clname);
}

int SerialPortWriter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
