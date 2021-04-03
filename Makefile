objects = driver.o User.o MonthExp.o Item.o Category.o Calcs.o
recip = g++ -c
driver = src/driver.cpp
user = src/User.cpp headers/User.hpp
monthly = src/MonthExp.cpp headers/MonthExp.hpp
item = src/Item.cpp headers/Item.hpp
cat = src/Category.cpp headers/Category.hpp
calc = src/Calcs.cpp headers/Calcs.hpp

edit : $(objects)
	g++ -o edit $(objects)

driver.o : $(drive)
	$(recip) src/driver.cpp
UserVect.o
User.o : $(user)
	$(recip) src/User.cpp
MonthExp.o : $(monthly)
	$(recip) src/MonthExp.cpp
Item.o : $(item)
	$(recip) src/Item.cpp
Category.o : $(cat)
	$(recip) src/Category.cpp
Calcs.o : $(calc)
	$(recip) src/Calcs.cpp


clean:
	rm *.o

clean2:
	rm edit *.o
