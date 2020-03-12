
bin_PROGRAMS = startapp 
# main_SOURCES = main.cpp
startapp_SOURCES = startapp.cpp AppFactory.cpp AppFactory.h

main_LDFLAGS = -rdynamic
main_LDADD = -ldl

startapp_LDFLAG = $(main_LDFLAGS)
startapp_LDADD = $(main_LDADD)

main_CPPFLAGS = -I$(top_srcdir)/lib
startapp_CPPFLAGS = -I$(top_srcdir)/lib
