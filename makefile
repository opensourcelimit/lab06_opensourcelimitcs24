heap.o: heap.cpp
	g++ -c -g  --std=c++11 heap.cpp

exam: examheap.cpp heap.o
	g++ -o  exam -std=c++11 examheap.cpp heap.o -g 

test: testh.cpp heap.o
	g++ -o testheap -std=c++11 testh.cpp heap.o 
