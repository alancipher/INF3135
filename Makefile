
tp1  : tp1.c flop.o
	 gcc -Wall -Wextra -std=c11 -pedantic   -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o
	


.PHONY: clean

clean :
	ls
	rm -rf data tp1 flop.* listetemp
	ls

lib :
	
	wget -P ./data https://github.com/guyfrancoeur/INF3135_H2020/raw/master/tp/tp1.zip
	unzip -u ./data/tp1.zip
	#mv flop.o flop.h ../
	#rmcd ..
	 #zip -FF tp1.zip --out Repairedtp1.zip | unzip Repairedtp1
	 #mkdir data 
	 #cd data
	#unzip -l ./data/tp1
	



test :
	rm -rf tp1 
	gcc -Wall -Wextra -std=c11 -pedantic   -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o 
	./tp1 > liste.sh
	grep ...passed liste.sh > listetemp # sed 's/.*tester_//g'|sed 's/.*//g' #| cut -d r_ -f 4
	sed -i 's/\Test: tester_//g' listetemp
	sed -i 's/\...passed//g' listetemp
	echo
	cat listetemp
	echo
	
