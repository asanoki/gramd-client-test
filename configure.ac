dnl Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(gramd-client-test, 1.0, [http://www.jovislab.com/gramd])

AC_CANONICAL_SYSTEM
AM_INIT_AUTOMAKE()

AC_ARG_WITH([libgramd-client-include-path],
  [AS_HELP_STRING([--with-libgramd-client-include-path],
    [location of the libgramd-client headers])],
  [LIBGRAMDCLIENT_CFLAGS="-I$withval"],
  [LIBGRAMDCLIENT_CFLAGS=''])
AC_SUBST([LIBGRAMDCLIENT_CFLAGS])

AC_ARG_WITH([libgramd-client-library-path],
  [AS_HELP_STRING([--with-libgramd-client-include-path],
    [location of the libgramd-client library file])],
  [LIBGRAMDCLIENT_LDFLAGS="-L$withval"],
  [LIBGRAMDCLIENT_LDFLAGS=''])
AC_SUBST([LIBGRAMDCLIENT_LDFLAGS])

CPPFLAGS=$LIBGRAMDCLIENT_CFLAGS
LDFLAGS=$LIBGRAMDCLIENT_LDFLAGS

AC_LANG_PUSH([C])
AC_CHECK_HEADERS([gramdclient.h], [], AC_MSG_ERROR([Missing required libgramd-client header files. Download from http://www.jovislab.com/gramd and install.]))
AC_LANG_POP

AC_PROG_CXX

AC_CONFIG_FILES(Makefile src/Makefile)
AC_OUTPUT
