linked_list_test: main.o linked_list.o
	gcc -o linked_list_test main.o linked_list.o

main.o: main.c linked_list.h
	gcc -c main.c

linked_list.o: linked_list.c linked_list.h 
	gcc -c linked_list.c

clean:
	rm -f linked_list_test *.o

