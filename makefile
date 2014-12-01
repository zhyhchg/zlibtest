all:zlibtest.obj zlibtest.exe
zlibtest.obj: zlibtest.cpp
	cl -c -D_X86=1 -DWIN32 -D_DEBUG -D_CONSOLE -Istdafx.h /Fo /Fd zlibtest.cpp
zlibtest.exe: zlibtest.obj
	link zlibtest.obj kernel32.lib zlib1.lib
