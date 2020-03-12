#!/bin/bash

make distclean
sh ./autogen.sh && ./configure --prefix=/opt &&  make clean && make && sudo make install
