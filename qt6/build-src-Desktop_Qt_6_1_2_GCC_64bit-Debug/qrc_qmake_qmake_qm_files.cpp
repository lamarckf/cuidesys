/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.1.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/vinicius/Documentos/UFOP/ENG 1/cuidesys/qt6/build-src-Desktop_Qt_6_1_2_GCC_64bit-Debug/.qm/src_pt_BR.qm
  0x0,0x0,0x0,0x21,
  0x3c,
  0xb8,0x64,0x18,0xca,0xef,0x9c,0x95,0xcd,0x21,0x1c,0xbf,0x60,0xa1,0xbd,0xdd,0xa7,
  0x0,0x0,0x0,0x5,0x70,0x74,0x5f,0x42,0x52,0x88,0x0,0x0,0x0,0x2,0x3,0x1,
  
  
};

static const unsigned char qt_resource_name[] = {
  // i18n
  0x0,0x4,
  0x0,0x6,0xc4,0xee,
  0x0,0x69,
  0x0,0x31,0x0,0x38,0x0,0x6e,
    // src_pt_BR.qm
  0x0,0xc,
  0x9,0x66,0x79,0x9d,
  0x0,0x73,
  0x0,0x72,0x0,0x63,0x0,0x5f,0x0,0x70,0x0,0x74,0x0,0x5f,0x0,0x42,0x0,0x52,0x0,0x2e,0x0,0x71,0x0,0x6d,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/i18n
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/i18n/src_pt_BR.qm
  0x0,0x0,0x0,0xe,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x7b,0x40,0xc4,0x70,0x26,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_qmake_qmake_qm_files)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_qmake_qmake_qm_files)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qmake_qmake_qm_files)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qmake_qmake_qm_files)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_qmake_qmake_qm_files)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qmake_qmake_qm_files)(); }
   } dummy;
}
