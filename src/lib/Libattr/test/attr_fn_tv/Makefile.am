PROG_ROOT = ../..

AM_CFLAGS = -g -DTEST_FUNCTION -I${PROG_ROOT}/ -I${PROG_ROOT}/${PBS_MACH} --coverage

lib_LTLIBRARIES = libattr_fn_tv.la

AM_LDFLAGS = @CHECK_LIBS@ ${lib_LTLIBRARIES}

check_PROGRAMS = test_attr_fn_tv

libattr_fn_tv_la_SOURCES = scaffolding.c ${PROG_ROOT}/attr_fn_tv.c
libattr_fn_tv_la_LDFLAGS = @CHECK_LIBS@ -shared -lgcov

test_attr_fn_tv_SOURCES = test_attr_fn_tv.c

check_SCRIPTS = ${PROG_ROOT}/../../test/coverage_run.sh

TESTS = ${check_PROGRAMS} ${check_SCRIPTS}

CLEANFILES = *.gcno *.gcda *.gcov core *.lo
