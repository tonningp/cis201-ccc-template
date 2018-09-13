#
all: main


main : 
	@echo "Making the executable -- some warnings can be safely ignored"
	@g++ -o main main.cpp ccc_x11.cpp ccc_shap.cpp -I /usr/X11R6/include -L /usr/X11R6/lib -lX11


time : 
	@echo "Making the time executable -- some warnings can be safely ignored"
	@g++ -o main main.cpp ccc_time.cpp 

employee : 
	@echo "Making the employee executable -- some warnings can be safely ignored"
	@g++ -o main main.cpp ccc_empl.cpp 

run : 
	./main

edit:
	vim main.cpp

debug:
	gdb ./main

clean :
	@rm main
