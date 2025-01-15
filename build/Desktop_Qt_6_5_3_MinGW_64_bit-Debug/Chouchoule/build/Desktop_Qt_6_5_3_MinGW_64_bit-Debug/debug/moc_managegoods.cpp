/****************************************************************************
** Meta object code from reading C++ file 'managegoods.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CCL snzljw/managegoods.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'managegoods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSManagegoodsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSManagegoodsENDCLASS = QtMocHelpers::stringData(
    "Managegoods",
    "goodsChanged",
    "",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "on_add_clicked",
    "on_deletee_clicked",
    "on_change_clicked",
    "on_find_clicked",
    "on_see_clicked",
    "on_exit_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSManagegoodsENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[12];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[13];
    char stringdata5[6];
    char stringdata6[15];
    char stringdata7[19];
    char stringdata8[18];
    char stringdata9[16];
    char stringdata10[15];
    char stringdata11[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSManagegoodsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSManagegoodsENDCLASS_t qt_meta_stringdata_CLASSManagegoodsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Managegoods"
        QT_MOC_LITERAL(12, 12),  // "goodsChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 10),  // "closeEvent"
        QT_MOC_LITERAL(37, 12),  // "QCloseEvent*"
        QT_MOC_LITERAL(50, 5),  // "event"
        QT_MOC_LITERAL(56, 14),  // "on_add_clicked"
        QT_MOC_LITERAL(71, 18),  // "on_deletee_clicked"
        QT_MOC_LITERAL(90, 17),  // "on_change_clicked"
        QT_MOC_LITERAL(108, 15),  // "on_find_clicked"
        QT_MOC_LITERAL(124, 14),  // "on_see_clicked"
        QT_MOC_LITERAL(139, 15)   // "on_exit_clicked"
    },
    "Managegoods",
    "goodsChanged",
    "",
    "closeEvent",
    "QCloseEvent*",
    "event",
    "on_add_clicked",
    "on_deletee_clicked",
    "on_change_clicked",
    "on_find_clicked",
    "on_see_clicked",
    "on_exit_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSManagegoodsENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   63,    2, 0x08,    2 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    0,   70,    2, 0x08,    8 /* Private */,
      11,    0,   71,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Managegoods::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSManagegoodsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSManagegoodsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSManagegoodsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Managegoods, std::true_type>,
        // method 'goodsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>,
        // method 'on_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_deletee_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_change_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_find_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_see_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Managegoods::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Managegoods *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->goodsChanged(); break;
        case 1: _t->closeEvent((*reinterpret_cast< std::add_pointer_t<QCloseEvent*>>(_a[1]))); break;
        case 2: _t->on_add_clicked(); break;
        case 3: _t->on_deletee_clicked(); break;
        case 4: _t->on_change_clicked(); break;
        case 5: _t->on_find_clicked(); break;
        case 6: _t->on_see_clicked(); break;
        case 7: _t->on_exit_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Managegoods::*)();
            if (_t _q_method = &Managegoods::goodsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Managegoods::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Managegoods::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSManagegoodsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Managegoods::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Managegoods::goodsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
