##########################################################################
# If not stated otherwise in this file or this component's Licenses.txt
# file the following copyright and licenses apply:
#
# Copyright 2016 RDK Management
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
##########################################################################
#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

#AC_PREREQ([2.69])
AC_INIT([nm-generic], [1.0], [yogini.mulay@infosys.com])

AM_INIT_AUTOMAKE([foreign no-dist-gzip dist-bzip2 1.9])
AC_CONFIG_HEADERS([systeminfo.h])
AC_CONFIG_SRCDIR([systeminfo.cpp])

LT_INIT
AC_LANG([C++])

m4_ifdef([AM_SILENT_RULES],[AM_SILENT_RULES([yes])],
[AM_DEFAULT_VERBOSITY=1
AC_SUBST(AM_DEFAULT_VERBOSITY)])


# Checks for programs.
AC_PROG_CXX
AC_PROG_CC

# Checks for libraries.
PKG_CHECK_MODULES([GLIB], [glib-2.0 >= 2.24.0])

# Checks for header files.
AC_CHECK_HEADERS([stdlib.h unistd.h])
#PKG_CHECK_MODULES([GLIB], [glib-2.0 >= 2.24.0])
#PKG_CHECK_MODULES([GTHREAD], [gthread-2.0 >= 2.24.0])
YOCTO_FLAG=" "
IS_YOCTO_ENABLED=" "

IARM_CFLAGS=" "
IARM_LFLAGS=" "
AC_ARG_ENABLE([iarm],
              AS_HELP_STRING([--enable-iarm],[enable iarm (default is yes)]),
              [
                case "${enableval}" in
                 yes) IARM_CFLAGS="-DENABLE_IARM"
                      IARM_LFLAGS="-lIARMBus -ldbus-1 -lIARMBus " ;;
                 no)  IARM_CFLAGS=" "
                      IARM_LFLAGS=" " ;;
                 *) AC_MSG_ERROR([bad value ${enableval} for --enable-iarm]) ;;
                esac
              ],
              [echo "iarm is enabled"])
#AM_CONDITIONAL([ENABLE_IARM], [test x$iarm = xtrue])

DEBUG=" "
AC_ARG_ENABLE([debug],
        AS_HELP_STRING([--enable-debug],[This will be to enable/disable debug symbols]),
        [
          case "${enableval}" in
           yes) DEBUG=true ;;
           no) DEBUG=false ;;
          *) AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
           esac
           ],
         [echo " Debug symbols are enabled"])
AM_CONDITIONAL([DEBUG], [test x$DEBUG = xtrue])

AC_ARG_ENABLE([yocto],
        AS_HELP_STRING([--enable-yocto],[enable yocto (default is no)]),
        [
          case "${enableval}" in
           yes) IS_YOCTO_ENABLED=true
                YOCTO_FLAG=" -DYOCTO_BUILD ";;
           no)  IS_YOCTO_ENABLED=false ;;
          *) AC_MSG_ERROR([bad value ${enableval} for --enable-yocto]) ;;
           esac
           ],
        [echo "yocto is disabled"])
AM_CONDITIONAL([IS_YOCTO_ENABLED], [test x$IS_YOCTO_ENABLED = xtrue])

AC_SUBST(YOCTO_FLAG)
AC_SUBST(IARM_CFLAGS)
AC_SUBST(IARM_LFLAGS)


# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_PID_T
AC_TYPE_SIZE_T

# Checks for library functions.

AC_CONFIG_FILES([Makefile])

AC_OUTPUT
