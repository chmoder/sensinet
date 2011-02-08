com : com.o
	gcc -o com com.o -L/usr/lib/mysql -lmysqlclient
com.o : com.c 
	gcc -c -I /usr/include/mysql com.c
clean:
	rm -rf com.o com
