/****************************************************************************
** Meta object code from reading C++ file 'CThreading.h'
**
** Created: Tue Sep 2 11:06:41 2008
**      by: The Qt Meta Object Compiler version 59 (Qt 4.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "CThreading.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CThreading.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_CThreading[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      17,   11,   12,   11, 0x0a,
      29,   11,   12,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CThreading[] = {
    "CThreading\0\0bool\0slotApply()\0slotDefault()\0"
};

const QMetaObject CThreading::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CThreading,
      qt_meta_data_CThreading, 0 }
};

const QMetaObject *CThreading::metaObject() const
{
    return &staticMetaObject;
}

void *CThreading::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CThreading))
	return static_cast<void*>(const_cast< CThreading*>(this));
    return QWidget::qt_metacast(_clname);
}

int CThreading::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
