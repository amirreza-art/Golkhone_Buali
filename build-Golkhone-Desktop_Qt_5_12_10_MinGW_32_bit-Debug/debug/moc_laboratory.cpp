/****************************************************************************
** Meta object code from reading C++ file 'laboratory.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Golkhone/laboratory.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'laboratory.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Laboratory_t {
    QByteArrayData data[7];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Laboratory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Laboratory_t qt_meta_stringdata_Laboratory = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Laboratory"
QT_MOC_LITERAL(1, 11, 9), // "OnProfile"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "OnShop"
QT_MOC_LITERAL(4, 29, 18), // "OnLiliumExtractBtn"
QT_MOC_LITERAL(5, 48, 20), // "OnMagnoilaExtractBtn"
QT_MOC_LITERAL(6, 69, 18) // "OnOrchidExtractBtn"

    },
    "Laboratory\0OnProfile\0\0OnShop\0"
    "OnLiliumExtractBtn\0OnMagnoilaExtractBtn\0"
    "OnOrchidExtractBtn"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Laboratory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x08 /* Private */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Laboratory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Laboratory *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnProfile(); break;
        case 1: _t->OnShop(); break;
        case 2: _t->OnLiliumExtractBtn(); break;
        case 3: _t->OnMagnoilaExtractBtn(); break;
        case 4: _t->OnOrchidExtractBtn(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Laboratory::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Laboratory.data,
    qt_meta_data_Laboratory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Laboratory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Laboratory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Laboratory.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Laboratory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
