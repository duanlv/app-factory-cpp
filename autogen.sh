#!/bin/sh

set -xe

test -f configure.ac
rm -rf config.cache autom4te*.cache aclocal.m4
aclocal --force
libtoolize --force --copy
automake --foreign --include-deps --add-missing --copy
autoconf

