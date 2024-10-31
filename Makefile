KthLargestElement: KthLargestElement.o
	g++ -g -o KthLargestElement.exe KthLargestElement.o -pthread    

KthLargestElement.o: KthLargestElement/KthLargestElement.cpp
	g++ -g  -c -pthread KthLargestElement/KthLargestElement.cpp
