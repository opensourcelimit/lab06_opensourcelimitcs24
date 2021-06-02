heap.o: heap.cpp
	g++ -c  --std=c++11 heap.cpp
examheap.o: heap.cpp
	g++ -c  --std=c++11 examheap.cpp

exam: heap.o examheap.o
	g++ -o exam -std=c++11 heap.o examheap.o
