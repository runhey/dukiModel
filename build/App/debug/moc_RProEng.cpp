/****************************************************************************
** Meta object code from reading C++ file 'RProEng.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Modules/ProtocolEngine/RProEng.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RProEng.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RProEng_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RProEng_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RProEng_t qt_meta_stringdata_RProEng = {
    {
QT_MOC_LITERAL(0, 0, 7), // "RProEng"
QT_MOC_LITERAL(1, 8, 4), // "Read"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 11), // "QByteArray*"
QT_MOC_LITERAL(4, 26, 16) // "qByteArrayBuffer"

    },
    "RProEng\0Read\0\0QByteArray*\0qByteArrayBuffer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RProEng[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int, 0x80000000 | 3,    4,

       0        // eod
};

void RProEng::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RProEng *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->Read((*reinterpret_cast< QByteArray*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RProEng::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_RProEng.data,
    qt_meta_data_RProEng,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RProEng::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RProEng::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RProEng.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int RProEng::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
