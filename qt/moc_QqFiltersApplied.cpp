/****************************************************************************
** Meta object code from reading C++ file 'QqFiltersApplied.h'
**
** Created: Sun Nov 7 15:03:26 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "QqFiltersApplied.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QqFiltersApplied.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QqSlider[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QqSlider[] = {
    "QqSlider\0\0changeValue(int)\0"
};

const QMetaObject QqSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_QqSlider,
      qt_meta_data_QqSlider, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QqSlider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QqSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QqSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QqSlider))
        return static_cast<void*>(const_cast< QqSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int QqSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_QqCheck[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QqCheck[] = {
    "QqCheck\0\0changeValue(int)\0"
};

const QMetaObject QqCheck::staticMetaObject = {
    { &QCheckBox::staticMetaObject, qt_meta_stringdata_QqCheck,
      qt_meta_data_QqCheck, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QqCheck::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QqCheck::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QqCheck::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QqCheck))
        return static_cast<void*>(const_cast< QqCheck*>(this));
    return QCheckBox::qt_metacast(_clname);
}

int QqCheck::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCheckBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_QqColor[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x0a,
      24,    8,    8,    8, 0x0a,
      41,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QqColor[] = {
    "QqColor\0\0changeRed(int)\0changeGreen(int)\0"
    "changeBlue(int)\0"
};

const QMetaObject QqColor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QqColor,
      qt_meta_data_QqColor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QqColor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QqColor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QqColor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QqColor))
        return static_cast<void*>(const_cast< QqColor*>(this));
    return QWidget::qt_metacast(_clname);
}

int QqColor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeRed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeGreen((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changeBlue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_QqFilterParam[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_QqFilterParam[] = {
    "QqFilterParam\0"
};

const QMetaObject QqFilterParam::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QqFilterParam,
      qt_meta_data_QqFilterParam, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QqFilterParam::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QqFilterParam::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QqFilterParam::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QqFilterParam))
        return static_cast<void*>(const_cast< QqFilterParam*>(this));
    return QWidget::qt_metacast(_clname);
}

int QqFilterParam::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_QqFiltersListApplied[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      51,   21,   21,   21, 0x0a,
      66,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QqFiltersListApplied[] = {
    "QqFiltersListApplied\0\0"
    "setElement(QListWidgetItem*)\0"
    "removeFilter()\0showParamWindow(QListWidgetItem*)\0"
};

const QMetaObject QqFiltersListApplied::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_QqFiltersListApplied,
      qt_meta_data_QqFiltersListApplied, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QqFiltersListApplied::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QqFiltersListApplied::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QqFiltersListApplied::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QqFiltersListApplied))
        return static_cast<void*>(const_cast< QqFiltersListApplied*>(this));
    return QListWidget::qt_metacast(_clname);
}

int QqFiltersListApplied::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setElement((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 1: removeFilter(); break;
        case 2: showParamWindow((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
