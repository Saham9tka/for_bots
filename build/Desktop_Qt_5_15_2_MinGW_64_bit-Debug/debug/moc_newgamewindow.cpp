/****************************************************************************
** Meta object code from reading C++ file 'newgamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../newgamewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newgamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NewGameWindow_t {
    QByteArrayData data[15];
    char stringdata0[336];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NewGameWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NewGameWindow_t qt_meta_stringdata_NewGameWindow = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NewGameWindow"
QT_MOC_LITERAL(1, 14, 26), // "on_startGameButton_clicked"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 29), // "on_startGameLogin_textChanged"
QT_MOC_LITERAL(4, 72, 4), // "arg1"
QT_MOC_LITERAL(5, 77, 22), // "unblockStartGameButton"
QT_MOC_LITERAL(6, 100, 12), // "loginSettled"
QT_MOC_LITERAL(7, 113, 15), // "passwordSettled"
QT_MOC_LITERAL(8, 129, 18), // "playerCountSettled"
QT_MOC_LITERAL(9, 148, 32), // "on_startGamePassword_textChanged"
QT_MOC_LITERAL(10, 181, 30), // "on_onePlayerGameChoice_clicked"
QT_MOC_LITERAL(11, 212, 30), // "on_twoPlayerGameChoice_clicked"
QT_MOC_LITERAL(12, 243, 32), // "on_threePlayerGameChoice_clicked"
QT_MOC_LITERAL(13, 276, 31), // "on_fourPlayerGameChoice_clicked"
QT_MOC_LITERAL(14, 308, 27) // "on_backToMenuButton_clicked"

    },
    "NewGameWindow\0on_startGameButton_clicked\0"
    "\0on_startGameLogin_textChanged\0arg1\0"
    "unblockStartGameButton\0loginSettled\0"
    "passwordSettled\0playerCountSettled\0"
    "on_startGamePassword_textChanged\0"
    "on_onePlayerGameChoice_clicked\0"
    "on_twoPlayerGameChoice_clicked\0"
    "on_threePlayerGameChoice_clicked\0"
    "on_fourPlayerGameChoice_clicked\0"
    "on_backToMenuButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NewGameWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    3,   63,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    0,   73,    2, 0x08 /* Private */,
      11,    0,   74,    2, 0x08 /* Private */,
      12,    0,   75,    2, 0x08 /* Private */,
      13,    0,   76,    2, 0x08 /* Private */,
      14,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool, QMetaType::Bool,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NewGameWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewGameWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_startGameButton_clicked(); break;
        case 1: _t->on_startGameLogin_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->unblockStartGameButton((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->on_startGamePassword_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_onePlayerGameChoice_clicked(); break;
        case 5: _t->on_twoPlayerGameChoice_clicked(); break;
        case 6: _t->on_threePlayerGameChoice_clicked(); break;
        case 7: _t->on_fourPlayerGameChoice_clicked(); break;
        case 8: _t->on_backToMenuButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NewGameWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_NewGameWindow.data,
    qt_meta_data_NewGameWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NewGameWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewGameWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NewGameWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int NewGameWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
