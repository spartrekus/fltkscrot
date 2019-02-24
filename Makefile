
all: 
	     echo need fltk-devel  on FreeBSD
	     g++ -L/usr/local/lib -lfltk -lXext -lX11 -lm  -L/usr/local/include/fltk-devl/FL fltkscrot.c  -o fltkscrot    ; ./fltkscrot  


