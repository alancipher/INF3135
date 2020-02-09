
tp1  : tp1.c flop.o
	 gcc -Wall -Wextra -std=c11 -pedantic   -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o
	


.PHONY: clean

clean :
	rm -rf data tp1 flop.* listetemp
	

lib :
	
	wget -P ./data https://github.com/guyfrancoeur/INF3135_H2020/raw/master/tp/tp1.zip
	unzip -u ./data/tp1.zip
	
	



test :
	rm -rf tp1 
	gcc -Wall -Wextra -std=c11 -pedantic   -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o 
	./tp1 > liste.sh
	grep ...passed liste.sh > listetemp 
	sed -i 's/\Test: tester_//g' listetemp
	sed -i 's/\...passed//g' listetemp
	echo
	cat listetemp
	echo
	
