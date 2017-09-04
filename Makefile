#
all: main


main : 
	g++ -o main main.cpp ccc_x11.cpp ccc_shap.cpp -L /usr/X11R6/lib -lX11

run : 
	./main

edit:
	vim main.cpp

debug:
	gdb ./main

clean :
	@rm main
