/****************************************************************************
** Meta object code from reading C++ file 'loadgamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../loadgamewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loadgamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoadGameWindow_t {
    QByteArrayData data[10];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoadGameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoadGameWindow_t qt_meta_stringdata_LoadGameWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LoadGameWindow"
QT_MOC_LITERAL(1, 15, 29), // "on_continueGameButton_clicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 25), // "unblockContinueGameButton"
QT_MOC_LITERAL(4, 72, 12), // "loginSettled"
QT_MOC_LITERAL(5, 85, 15), // "passwordSettled"
QT_MOC_LITERAL(6, 101, 29), // "on_loginInputLine_textChanged"
QT_MOC_LITERAL(7, 131, 4), // "arg1"
QT_MOC_LITERAL(8, 136, 32), // "on_passwordInputLine_textChanged"
QT_MOC_LITERAL(9, 169, 27) // "on_backToMenuButton_clicked"

    },
    "LoadGameWindow\0on_continueGameButton_clicked\0"
    "\0unblockContinueGameButton\0loginSettled\0"
    "passwordSettled\0on_loginInputLine_textChanged\0"
    "arg1\0on_passwordInputLine_textChanged\0"
    "on_backToMenuButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoadGameWindow[] = {

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
       3,    2,   40,    2, 0x08 /* Private */,
       6,    1,   45,    2, 0x08 /* Private */,
       8,    1,   48,    2, 0x08 /* Private */,
       9,    0,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void LoadGameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoadGameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_continueGameButton_clicked(); break;
        case 1: _t->unblockContinueGameButton((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->on_loginInputLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_passwordInputLine_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_backToMenuButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoadGameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LoadGameWindow.data,
    qt_meta_data_LoadGameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoadGameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoadGameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoadGameWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoadGameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
