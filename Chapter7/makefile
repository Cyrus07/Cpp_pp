a.out : main.o stu.o
	g++ -g -o a.out main.o stu.o

main.o : ass9.cpp ass9.h
	g++ -g -o main.o -c ass9.cpp 
stu.o : ass9_stu.cpp
	g++ -g -o stu.o -c ass9_stu.cpp
clean :
	rm a.out main.o stu.o
