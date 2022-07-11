/****************************************************************************
** Meta object code from reading C++ file 'gameengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Projekt_CPP/gameengine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameengine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameEngine_t {
    const uint offsetsAndSize[56];
    char stringdata0[349];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_GameEngine_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_GameEngine_t qt_meta_stringdata_GameEngine = {
    {
QT_MOC_LITERAL(0, 10), // "GameEngine"
QT_MOC_LITERAL(11, 13), // "fieldsChanged"
QT_MOC_LITERAL(25, 0), // ""
QT_MOC_LITERAL(26, 21), // "playerPositionChanged"
QT_MOC_LITERAL(48, 12), // "fieldChanged"
QT_MOC_LITERAL(61, 10), // "dayChanged"
QT_MOC_LITERAL(72, 12), // "moneyChanged"
QT_MOC_LITERAL(85, 19), // "pumpkinSeedsChanged"
QT_MOC_LITERAL(105, 14), // "pumpkinChanged"
QT_MOC_LITERAL(120, 18), // "carrotSeedsChanged"
QT_MOC_LITERAL(139, 13), // "carrotChanged"
QT_MOC_LITERAL(153, 17), // "getPlayerPosition"
QT_MOC_LITERAL(171, 5), // "index"
QT_MOC_LITERAL(177, 4), // "game"
QT_MOC_LITERAL(182, 10), // "movePlayer"
QT_MOC_LITERAL(193, 5), // "where"
QT_MOC_LITERAL(199, 8), // "getState"
QT_MOC_LITERAL(208, 11), // "getBarState"
QT_MOC_LITERAL(220, 15), // "itemSlotClicked"
QT_MOC_LITERAL(236, 14), // "itemBarClicked"
QT_MOC_LITERAL(251, 17), // "getPositionNumber"
QT_MOC_LITERAL(269, 11), // "getFieldsAt"
QT_MOC_LITERAL(281, 8), // "getMoney"
QT_MOC_LITERAL(290, 6), // "getDay"
QT_MOC_LITERAL(297, 15), // "getPumpkinSeeds"
QT_MOC_LITERAL(313, 10), // "getPumpkin"
QT_MOC_LITERAL(324, 14), // "getCarrotSeeds"
QT_MOC_LITERAL(339, 9) // "getCarrot"

    },
    "GameEngine\0fieldsChanged\0\0"
    "playerPositionChanged\0fieldChanged\0"
    "dayChanged\0moneyChanged\0pumpkinSeedsChanged\0"
    "pumpkinChanged\0carrotSeedsChanged\0"
    "carrotChanged\0getPlayerPosition\0index\0"
    "game\0movePlayer\0where\0getState\0"
    "getBarState\0itemSlotClicked\0itemBarClicked\0"
    "getPositionNumber\0getFieldsAt\0getMoney\0"
    "getDay\0getPumpkinSeeds\0getPumpkin\0"
    "getCarrotSeeds\0getCarrot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameEngine[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       8,  138, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x06,    9 /* Public */,
       3,    0,  111,    2, 0x06,   10 /* Public */,
       4,    0,  112,    2, 0x06,   11 /* Public */,
       5,    0,  113,    2, 0x06,   12 /* Public */,
       6,    0,  114,    2, 0x06,   13 /* Public */,
       7,    0,  115,    2, 0x06,   14 /* Public */,
       8,    0,  116,    2, 0x06,   15 /* Public */,
       9,    0,  117,    2, 0x06,   16 /* Public */,
      10,    0,  118,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  119,    2, 0x0a,   18 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  122,    2, 0x02,   20 /* Public */,
      14,    1,  123,    2, 0x02,   21 /* Public */,
      16,    1,  126,    2, 0x02,   23 /* Public */,
      17,    1,  129,    2, 0x02,   25 /* Public */,
      18,    1,  132,    2, 0x02,   27 /* Public */,
      19,    1,  135,    2, 0x02,   29 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::QString, QMetaType::Int,   12,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::QString, QMetaType::Int,   12,
    QMetaType::QString, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,

 // properties: name, type, flags
      20, QMetaType::Int, 0x00015001, uint(1), 0,
      21, QMetaType::Int, 0x00015001, uint(2), 0,
      22, QMetaType::Int, 0x00015001, uint(4), 0,
      23, QMetaType::Int, 0x00015001, uint(3), 0,
      24, QMetaType::Int, 0x00015001, uint(5), 0,
      25, QMetaType::Int, 0x00015001, uint(6), 0,
      26, QMetaType::Int, 0x00015001, uint(7), 0,
      27, QMetaType::Int, 0x00015001, uint(8), 0,

       0        // eod
};

void GameEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fieldsChanged(); break;
        case 1: _t->playerPositionChanged(); break;
        case 2: _t->fieldChanged(); break;
        case 3: _t->dayChanged(); break;
        case 4: _t->moneyChanged(); break;
        case 5: _t->pumpkinSeedsChanged(); break;
        case 6: _t->pumpkinChanged(); break;
        case 7: _t->carrotSeedsChanged(); break;
        case 8: _t->carrotChanged(); break;
        case 9: { QString _r = _t->getPlayerPosition((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->game(); break;
        case 11: _t->movePlayer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: { QString _r = _t->getState((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->getBarState((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->itemSlotClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->itemBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::fieldsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::playerPositionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::fieldChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::dayChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::moneyChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::pumpkinSeedsChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::pumpkinChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::carrotSeedsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (GameEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GameEngine::carrotChanged)) {
                *result = 8;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<GameEngine *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getPositionNumber(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getFieldsAt(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getMoney(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getDay(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->getPumpkinSeeds(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->getPumpkin(); break;
        case 6: *reinterpret_cast< int*>(_v) = _t->getCarrotSeeds(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->getCarrot(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GameEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GameEngine.offsetsAndSize,
    qt_meta_data_GameEngine,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_GameEngine_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<GameEngine, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *GameEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void GameEngine::fieldsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GameEngine::playerPositionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameEngine::fieldChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void GameEngine::dayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void GameEngine::moneyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void GameEngine::pumpkinSeedsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void GameEngine::pumpkinChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void GameEngine::carrotSeedsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void GameEngine::carrotChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
