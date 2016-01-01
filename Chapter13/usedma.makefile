obj = main.o dma.o

a.out : $(obj)
	g++ $(obj) -o a.out

main.o : usedma.cpp dma.h
	g++ -g -c usedma.cpp -o main.o

dma.o : dma.h

clean:
	rm $(obj) a.out
