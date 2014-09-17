#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.ibus_kkc"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[839]; const double alignment; void * const ptr;}  ibus_kkc_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x06, 0x00, 0x00, 0x00, 0x58, 0x3d, 0x99, 0x4c, 
  0x04, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x4c, 0x00, 0xec, 0x00, 0x00, 0x00, 
  0xf0, 0x00, 0x00, 0x00, 0x4b, 0x50, 0x90, 0x0b, 
  0x02, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0xf4, 0x00, 0x00, 0x00, 
  0xf8, 0x00, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0xfc, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0x00, 0x00, 0x7d, 0x88, 0xa8, 0x53, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 
  0x07, 0x00, 0x4c, 0x00, 0x08, 0x01, 0x00, 0x00, 
  0x0c, 0x01, 0x00, 0x00, 0xd6, 0xfc, 0x67, 0x05, 
  0x01, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 
  0x0c, 0x00, 0x4c, 0x00, 0x18, 0x01, 0x00, 0x00, 
  0x1c, 0x01, 0x00, 0x00, 0xa5, 0xff, 0xbe, 0x8d, 
  0x03, 0x00, 0x00, 0x00, 0x1c, 0x01, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0x20, 0x01, 0x00, 0x00, 
  0x24, 0x01, 0x00, 0x00, 0x6b, 0xdb, 0x9c, 0x30, 
  0x05, 0x00, 0x00, 0x00, 0x24, 0x01, 0x00, 0x00, 
  0x11, 0x00, 0x76, 0x00, 0x38, 0x01, 0x00, 0x00, 
  0x47, 0x03, 0x00, 0x00, 0x69, 0x62, 0x75, 0x73, 
  0x2f, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x6f, 0x72, 0x67, 0x2f, 0x04, 0x00, 0x00, 0x00, 
  0x2f, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x65, 0x6e, 0x67, 0x69, 0x6e, 0x65, 0x2f, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0x66, 0x72, 0x65, 0x65, 
  0x64, 0x65, 0x73, 0x6b, 0x74, 0x6f, 0x70, 0x2f, 
  0x00, 0x00, 0x00, 0x00, 0x6b, 0x6b, 0x63, 0x2f, 
  0x06, 0x00, 0x00, 0x00, 0x64, 0x69, 0x63, 0x74, 
  0x69, 0x6f, 0x6e, 0x61, 0x72, 0x69, 0x65, 0x73, 
  0x2e, 0x6a, 0x73, 0x6f, 0x6e, 0x00, 0x00, 0x00, 
  0xce, 0x0d, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xad, 0x95, 0xc1, 0x8e, 0xd3, 0x30, 
  0x10, 0x86, 0xef, 0x7d, 0x0a, 0xab, 0xa7, 0x56, 
  0x14, 0x72, 0xe7, 0xb6, 0x70, 0x40, 0x65, 0x17, 
  0xed, 0x4a, 0xe5, 0x02, 0x08, 0xad, 0x26, 0x89, 
  0xd3, 0xce, 0xd6, 0x89, 0x23, 0xdb, 0xd9, 0x8a, 
  0x45, 0xbc, 0x3b, 0xb6, 0x83, 0x45, 0x36, 0x71, 
  0xa3, 0x66, 0x9a, 0x1e, 0x2a, 0x35, 0xe3, 0xef, 
  0x8f, 0xbf, 0x64, 0x3c, 0xfd, 0xb1, 0x60, 0xf6, 
  0xf3, 0xdb, 0x7f, 0xbb, 0xcf, 0x12, 0xf3, 0xe5, 
  0x7b, 0xb6, 0x14, 0xa0, 0xf6, 0x7c, 0xb9, 0xf9, 
  0x7f, 0xb9, 0x40, 0xc1, 0x2b, 0x28, 0xb9, 0x2b, 
  0x26, 0x8d, 0x56, 0x89, 0x90, 0x19, 0x88, 0x44, 
  0x1f, 0x40, 0xf1, 0x44, 0x1f, 0x8f, 0xc9, 0xee, 
  0xf6, 0xf6, 0xed, 0xe7, 0xed, 0xee, 0xdb, 0xfd, 
  0xbb, 0xbb, 0x2e, 0x17, 0x98, 0x9d, 0x81, 0x2a, 
  0x07, 0x95, 0xb3, 0x95, 0x8f, 0x5e, 0x77, 0xd7, 
  0xe4, 0x5c, 0x67, 0x0a, 0x6b, 0x83, 0xb2, 0x7a, 
  0xb5, 0x34, 0xc7, 0xcc, 0x5d, 0x03, 0xf5, 0x8b, 
  0xad, 0x6c, 0xfc, 0x86, 0x79, 0x94, 0x69, 0x7c, 
  0xe9, 0xf3, 0x05, 0x34, 0xc2, 0x3c, 0xda, 0x0d, 
  0xa6, 0x82, 0xbb, 0xfd, 0x1b, 0xd5, 0x70, 0x5f, 
  0xff, 0xb3, 0x89, 0xfb, 0x95, 0x3c, 0xc7, 0xa6, 
  0x24, 0x0a, 0x7e, 0x19, 0x17, 0x6c, 0xb3, 0x69, 
  0x86, 0x2d, 0x7b, 0x89, 0x62, 0x01, 0x42, 0x8f, 
  0x3b, 0xea, 0x12, 0x84, 0x20, 0x2a, 0xee, 0xc6, 
  0x15, 0x7d, 0x34, 0xcd, 0xd0, 0xa3, 0xf3, 0x08, 
  0xbe, 0x60, 0x9d, 0xc9, 0x9c, 0xda, 0xa6, 0x11, 
  0x3a, 0x90, 0xdf, 0xb7, 0x0f, 0xac, 0x5f, 0xeb, 
  0x09, 0xde, 0x08, 0xc3, 0x55, 0x05, 0x06, 0x9f, 
  0x79, 0xd7, 0xb1, 0x90, 0x8a, 0xfd, 0x0b, 0xd6, 
  0x57, 0xb6, 0xa8, 0x36, 0xe0, 0x6f, 0x46, 0xb3, 
  0x8b, 0xd0, 0x9d, 0xd7, 0xe8, 0x4a, 0xcc, 0xfd, 
  0xd6, 0x34, 0x45, 0x7d, 0x3e, 0x62, 0xb2, 0xa7, 
  0x3c, 0x62, 0x05, 0x27, 0x20, 0x7a, 0x46, 0xe8, 
  0x40, 0xde, 0xb7, 0x25, 0xbb, 0x77, 0x10, 0x3c, 
  0x33, 0x34, 0xd3, 0xd1, 0x90, 0xe9, 0x2d, 0xfb, 
  0x84, 0x55, 0xc9, 0x91, 0xe8, 0x3a, 0x84, 0x03, 
  0xf8, 0x01, 0xe5, 0x5e, 0x41, 0x7d, 0x40, 0x8b, 
  0xd2, 0x3c, 0xd3, 0x4e, 0xc2, 0x2c, 0xaf, 0x75, 
  0xcf, 0x25, 0x51, 0xb3, 0x47, 0x06, 0xea, 0x13, 
  0xbf, 0xd6, 0x71, 0xcf, 0x67, 0x76, 0x04, 0xad, 
  0x65, 0x46, 0xb4, 0x1c, 0xb0, 0x81, 0xbb, 0x71, 
  0x05, 0x6c, 0xcf, 0x97, 0x1d, 0xa2, 0x0c, 0xd2, 
  0x54, 0xf1, 0x67, 0x1c, 0x1c, 0xe7, 0xcb, 0xbd, 
  0xe1, 0xe2, 0xc4, 0xe9, 0x0d, 0x8d, 0x06, 0xf0, 
  0x89, 0xda, 0xd0, 0x43, 0x38, 0x80, 0xdb, 0x41, 
  0xe5, 0x72, 0xdd, 0x18, 0x3b, 0x5d, 0xac, 0x56, 
  0xb2, 0xb6, 0x77, 0x90, 0x0d, 0x75, 0x02, 0xc7, 
  0x03, 0x02, 0xfc, 0xe0, 0xab, 0xcc, 0x95, 0x89, 
  0x33, 0xb8, 0x3e, 0x9b, 0x40, 0x90, 0x6d, 0x52, 
  0x9b, 0xfe, 0x86, 0x6a, 0x3a, 0xa4, 0x03, 0xd9, 
  0x96, 0xa6, 0x0b, 0xa6, 0xa0, 0x79, 0xce, 0x6c, 
  0xbf, 0xc6, 0x02, 0xa6, 0xfb, 0x15, 0x8d, 0x10, 
  0x7e, 0x4b, 0x34, 0xc1, 0x18, 0x1e, 0x1b, 0xbd, 
  0x6c, 0x15, 0x56, 0xae, 0xe7, 0x9a, 0xc2, 0x67, 
  0x23, 0xa7, 0x3f, 0x84, 0xec, 0x60, 0xff, 0xca, 
  0x1e, 0xed, 0xe1, 0x38, 0x01, 0xb5, 0xa7, 0xcf, 
  0x45, 0xc4, 0x66, 0x34, 0x5b, 0x7d, 0x74, 0xab, 
  0xfd, 0xc4, 0xf9, 0xea, 0x89, 0xf5, 0x5c, 0x63, 
  0x9b, 0x61, 0xc5, 0xfa, 0xe1, 0xd7, 0x3e, 0x1d, 
  0x01, 0x27, 0xe2, 0x43, 0xe9, 0x91, 0x81, 0xba, 
  0x83, 0x13, 0xb3, 0x4e, 0x25, 0xf1, 0x78, 0x8b, 
  0x38, 0x3e, 0x22, 0xb6, 0xf8, 0xb9, 0xf8, 0x0b, 
  0x8b, 0x6c, 0xfb, 0x11, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29
} };

static GStaticResource static_resource = { ibus_kkc_resource_data.data, sizeof (ibus_kkc_resource_data.data), NULL, NULL, NULL };
extern GResource *ibus_kkc_get_resource (void);
GResource *ibus_kkc_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif


#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
