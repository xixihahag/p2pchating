/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p2pchating_dev/chat.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Chat[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,    6,    5,    5, 0x08,
      38,    5,    5,    5, 0x08,
      55,    5,    5,    5, 0x08,
      71,    5,    5,    5, 0x08,
      91,    5,    5,    5, 0x08,
     110,    5,    5,    5, 0x08,
     121,    5,    5,    5, 0x08,
     161,    5,    5,    5, 0x08,
     187,    5,    5,    5, 0x08,
     210,    5,    5,    5, 0x08,
     234,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Chat[] = {
    "Chat\0\0name\0receiveChatSignal(QString)\0"
    "readServerData()\0getOnlineList()\0"
    "NewConnectionSlot()\0disconnectedSlot()\0"
    "ReadData()\0ReadError(QAbstractSocket::SocketError)\0"
    "on_btnConnect_2_clicked()\0"
    "on_btnListen_clicked()\0on_btnClear_2_clicked()\0"
    "on_btnSend_2_clicked()\0"
};

void Chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Chat *_t = static_cast<Chat *>(_o);
        switch (_id) {
        case 0: _t->receiveChatSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->readServerData(); break;
        case 2: _t->getOnlineList(); break;
        case 3: _t->NewConnectionSlot(); break;
        case 4: _t->disconnectedSlot(); break;
        case 5: _t->ReadData(); break;
        case 6: _t->ReadError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 7: _t->on_btnConnect_2_clicked(); break;
        case 8: _t->on_btnListen_clicked(); break;
        case 9: _t->on_btnClear_2_clicked(); break;
        case 10: _t->on_btnSend_2_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Chat::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Chat::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Chat,
      qt_meta_data_Chat, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Chat::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Chat::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Chat))
        return static_cast<void*>(const_cast< Chat*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
