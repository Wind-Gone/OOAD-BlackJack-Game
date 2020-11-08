/****************************************************************************
** Meta object code from reading C++ file 'playwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/playwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayWindow_t {
    QByteArrayData data[8];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayWindow_t qt_meta_stringdata_PlayWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlayWindow"
QT_MOC_LITERAL(1, 11, 8), // "loadList"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 12), // "computerTurn"
QT_MOC_LITERAL(4, 34, 22), // "on_twistButton_clicked"
QT_MOC_LITERAL(5, 57, 22), // "on_stickButton_clicked"
QT_MOC_LITERAL(6, 80, 26), // "on_playagainButton_clicked"
QT_MOC_LITERAL(7, 107, 23) // "on_actionQuit_triggered"

    },
    "PlayWindow\0loadList\0\0computerTurn\0"
    "on_twistButton_clicked\0on_stickButton_clicked\0"
    "on_playagainButton_clicked\0"
    "on_actionQuit_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayWindow *_t = static_cast<PlayWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadList(); break;
        case 1: _t->computerTurn(); break;
        case 2: _t->on_twistButton_clicked(); break;
        case 3: _t->on_stickButton_clicked(); break;
        case 4: _t->on_playagainButton_clicked(); break;
        case 5: _t->on_actionQuit_triggered(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject PlayWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_PlayWindow.data,
      qt_meta_data_PlayWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayWindow.stringdata0))
        return static_cast<void*>(const_cast< PlayWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int PlayWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
