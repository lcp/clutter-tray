AC_INIT(clutter-tray, 0.0.1)

AC_CONFIG_AUX_DIR(config)

AM_INIT_AUTOMAKE([dist-bzip2 no-dist-gzip foreign])
AM_MAINTAINER_MODE

m4_ifdef([AM_SILENT_RULES],[AM_SILENT_RULES([yes])],)

AC_CONFIG_HEADERS(config.h)

AC_DISABLE_STATIC
AC_PROG_CC
# Needed for per-target cflags, like in gnomeshell-taskpanel
AM_PROG_CC_C_O
AM_PROG_LIBTOOL

PKG_PROG_PKG_CONFIG(0.16)

#AC_PATH_PROG(GCONFTOOL, gconftool-2, no)
#AM_GCONF_SOURCE_2

# Collect more than 20 libraries for a prize!
PKG_CHECK_MODULES(TRAY, clutter-1.0 gtk+-2.0)

# Stay command-line compatible with the gnome-common configure option. Here
# minimum/yes/maximum are the same, however.
AC_ARG_ENABLE(compile_warnings,
  AC_HELP_STRING([--enable-compile-warnings=@<:@no/minimum/yes/maximum/error@:>@],
                 [Turn on compiler warnings]),,
  enable_compile_warnings=error)

changequote(,)dnl
if test "$enable_compile_warnings" != no ; then
  if test "x$GCC" = "xyes"; then
    case " $CFLAGS " in
    *[\ \	]-Wall[\ \	]*) ;;
    *) CFLAGS="$CFLAGS -Wall" ;;
    esac
    case " $CFLAGS " in
    *[\ \	]-Wmissing-prototypes[\ \	]*) ;;
    *) CFLAGS="$CFLAGS -Wmissing-prototypes" ;;
    esac
    if test "$enable_compile_warnings" = error ; then
      case " $CFLAGS " in
      *[\ \	]-Werror[\ \	]*) ;;
      *) CFLAGS="$CFLAGS -Werror" ;;
      esac
    fi
  fi
fi
changequote([,])dnl

AC_OUTPUT([
  Makefile
  src/Makefile
])
