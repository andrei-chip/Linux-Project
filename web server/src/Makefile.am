bin_PROGRAMS=start
start_SOURCES=main.cpp
project_LDADD = libtemphum.la

lib_LTLIBRARIES = libtemphum.la
libhelper_la_SOURCES = temphum.cpp
libhelper_la_LDFLAGS = -version-info 0:0:0

AM_CXXFLAGS = -lfcgi++ -lfcgi -Wall -lwiringPi
ACLOCAL_AMFLAGS = -I m4
