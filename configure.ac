AC_INIT([cpptemplate], [0.0.0], [example@gmail.com])
AM_INIT_AUTOMAKE()

LT_INIT

# Accept Libraries
AC_ENABLE_SHARED
# AC_DISABLE_STATIC
#AC_PROG_RANLIB
AC_PROG_LIBTOOL(libtool)

# Set lang c++
AC_LANG(C++)
AC_PROG_CXX
AC_SUBST([CPP])

# Makefiles
AC_CONFIG_FILES(
	Makefile
	lib/Makefile
	lib/ctest/Makefile
	lib/app/Makefile
	src/Makefile
)

# Generate the configure script
AC_OUTPUT
