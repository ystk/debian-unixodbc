/****************************************************************************
** Meta object code from reading C++ file 'CPooling.h'
**
** Created: Tue Sep 2 11:04:23 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CPooling.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CPooling.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_CPooling[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      15,    9,   10,    9, 0x0a,
      27,    9,   10,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CPooling[] = {
    "CPooling\0\0bool\0slotApply()\0slotDefault()\0"
};

const QMetaObject CPooling::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CPooling,
      qt_meta_data_CPooling, 0 }
};

const QMetaObject *CPooling::metaObject() const
{
    return &staticMetaObject;
}

void *CPooling::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CPooling))
	return static_cast<void*>(const_cast< CPooling*>(this));
    return QWidget::qt_metacast(_clname);
}

int CPooling::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = slotApply();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = slotDefault();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        }
        _id -= 2;
    }
    return _id;
}
