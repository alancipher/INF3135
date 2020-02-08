
tp1  : tp1.c flop.o
	 gcc -Wall -Wextra -std=c11 -pedantic   -I/usr/include/CUnit -L/usr/lib64 -lcunit -o tp1 tp1.c flop.o
	#./tp1


.PHONY: clean

clean :
	ls
	rm -f tp1 tp1.zip* ziunfnHy zi*
	ls

lib :
	
	 wget -P ./data https://github.com/guyfrancoeur/INF3135_H2020/raw/master/tp/tp1.zip
	 unzip -u tp1.zip
	 #zip -FF tp1.zip --out Repairedtp1.zip | unzip Repairedtp1
	 #mkdir data 
	 #cd data
	#unzip -l ./data/tp1
	
	


test :  
	 ./tp1 > liste.sh
	grep ...passed liste.sh > listetemp # sed 's/.*tester_//g'|sed 's/.*//g' #| cut -d r_ -f 4
	sed -i 's/\Test: tester_//g' listetemp
	sed -i 's/\...passed//g' listetemp
	echo
	cat listetemp
	echo
	
