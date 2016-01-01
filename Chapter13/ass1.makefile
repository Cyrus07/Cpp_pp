obj = main.o ass1_cd.o

a.out : $(obj)
	g++ $(obj) -o a.out

main.o : ass1.cpp ass1_cd.h
	g++ -g -c ass1.cpp -o main.o

ass1_cd.o : ass1_cd.h

clean :
	rm $(obj) a.out
