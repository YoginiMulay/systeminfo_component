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
#AUTOMAKE_OPTIONS = foreign
AUTOMAKE_OPTIONS = subdir-objects

AM_CXXFLAGS = $(GLIB_CFLAGS) $(GTHREAD_CFLAGS) $(NLMONITOR_CFLAGS) $(NL_CFLAGS)

AM_CXXFLAGS += $(IARM_CFLAGS)

AM_LDFLAGS = $(GLIB_LDFLAGS) $(GLIB_LIBS) \
	$(G_THREAD_LIBS) -lrdkloggers $(LOG4C_LIBS) -lpthread -lcjson -lsqlite3

AM_LDFLAGS += $(IARM_LFLAGS)
AM_CFLAGS =  $(GLIB_CFLAGS) $(GTHREAD_CFLAGS)
AM_CPPFLAGS =  $(GLIB_CFLAGS) $(GTHREAD_CFLAGS)

# the list of header files that belong to the library (to be installed later)
include_HEADERS = systeminfo.h

bin_PROGRAMS = systeminfo
systeminfo_SOURCES = systeminfo.cpp

