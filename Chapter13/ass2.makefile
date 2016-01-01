obj = main.o ass2_cd.o

a.out : $(obj)
	g++ $(obj) -o a.out

main.o : ass2.cpp ass2_cd.h
	g++ -g -c -std=c++11 ass2.cpp -o main.o

ass2_cd.o : ass2_cd.h
	g++ -g -c -std=c++11 ass2_cd.cpp

clean :
	rm $(obj) a.out
