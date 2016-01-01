obj = main.o ass3_dma.o

a.out : $(obj)
	g++ $(obj) -o a.out

main.o : ass3.cpp ass3_dma.h
	g++ -g -c -std=c++11 ass3.cpp -o main.o

ass3_dma.cpp ass3_dma.o : ass3_dma.cpp ass3_dma.h
	g++ -g -c -std=c++11 ass3_dma.cpp

clean:
	rm $(obj) a.out
