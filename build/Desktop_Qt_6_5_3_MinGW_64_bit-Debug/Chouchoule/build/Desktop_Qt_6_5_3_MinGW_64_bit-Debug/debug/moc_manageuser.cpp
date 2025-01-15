/****************************************************************************
** Meta object code from reading C++ file 'manageuser.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../CCL snzljw/manageuser.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manageuser.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSManageUserENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSManageUserENDCLASS = QtMocHelpers::stringData(
    "ManageUser",
    "refreshTable",
    "",
    "on_add_clicked",
    "updateUserFileAfterDelete",
    "QList<int>",
    "rowsToDelete",
    "on_deletee_clicked",
    "on_find_clicked",
    "on_exit_clicked",
    "on_change_clicked",
    "readUserFileAndFillTable"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSManageUserENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[26];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[19];
    char stringdata8[16];
    char stringdata9[16];
    char stringdata10[18];
    char stringdata11[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSManageUserENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSManageUserENDCLASS_t qt_meta_stringdata_CLASSManageUserENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ManageUser"
        QT_MOC_LITERAL(11, 12),  // "refreshTable"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 14),  // "on_add_clicked"
        QT_MOC_LITERAL(40, 25),  // "updateUserFileAfterDelete"
        QT_MOC_LITERAL(66, 10),  // "QList<int>"
        QT_MOC_LITERAL(77, 12),  // "rowsToDelete"
        QT_MOC_LITERAL(90, 18),  // "on_deletee_clicked"
        QT_MOC_LITERAL(109, 15),  // "on_find_clicked"
        QT_MOC_LITERAL(125, 15),  // "on_exit_clicked"
        QT_MOC_LITERAL(141, 17),  // "on_change_clicked"
        QT_MOC_LITERAL(159, 24)   // "readUserFileAndFillTable"
    },
    "ManageUser",
    "refreshTable",
    "",
    "on_add_clicked",
    "updateUserFileAfterDelete",
    "QList<int>",
    "rowsToDelete",
    "on_deletee_clicked",
    "on_find_clicked",
    "on_exit_clicked",
    "on_change_clicked",
    "readUserFileAndFillTable"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSManageUserENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    1,   64,    2, 0x08,    3 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,
      10,    0,   70,    2, 0x08,    8 /* Private */,
      11,    0,   71,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ManageUser::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSManageUserENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSManageUserENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSManageUserENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ManageUser, std::true_type>,
        // method 'refreshTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_add_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateUserFileAfterDelete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<int> &, std::false_type>,
        // method 'on_deletee_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_find_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_change_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'readUserFileAndFillTable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ManageUser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManageUser *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshTable(); break;
        case 1: _t->on_add_clicked(); break;
        case 2: _t->updateUserFileAfterDelete((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1]))); break;
        case 3: _t->on_deletee_clicked(); break;
        case 4: _t->on_find_clicked(); break;
        case 5: _t->on_exit_clicked(); break;
        case 6: _t->on_change_clicked(); break;
        case 7: _t->readUserFileAndFillTable(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ManageUser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManageUser::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSManageUserENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ManageUser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
