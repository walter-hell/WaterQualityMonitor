/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created: Wed Nov 13 05:01:05 2019
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   16,   15,   15, 0x08,
      38,   15,   15,   15, 0x08,
      46,   16,   15,   15, 0x08,
      77,   16,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingsDialog[] = {
    "SettingsDialog\0\0idx\0showPortInfo(int)\0"
    "apply()\0checkCustomBaudRatePolicy(int)\0"
    "checkCustomDevicePathPolicy(int)\0"
};

void SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        SettingsDialog *_t = static_cast<SettingsDialog *>(_o);
        switch (_id) {
        case 0: _t->showPortInfo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->apply(); break;
        case 2: _t->checkCustomBaudRatePolicy((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->checkCustomDevicePathPolicy((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData SettingsDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject SettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingsDialog,
      qt_meta_data_SettingsDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SettingsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
