objects = driver.o UserVect.o User.o Add.o Remove.o MonthExp.o Date.o Item.o Category.o Calcs.o
recip = g++ -c
driver = src/driver.cpp
user = src/User.cpp headers/User.hpp
add = src/addUser.cpp headers/addUser.hpp
remove = src/rmUser.cpp headers/rmUser.hpp
vect = src/UserVect.cpp headers/UserVect.hpp
monthly = src/MonthExp.cpp headers/MonthExp.hpp
date = src/Date.cpp headers/Date.hpp
item = src/Item.cpp headers/Item.hpp
cat = src/Category.cpp headers/Category.hpp
calc = src/Calcs.cpp headers/Calcs.hpp

driver : $(objects)
	g++ -o driver $(objects)

driver.o : $(drive)
	$(recip) src/driver.cpp
UserVect.o : $(vect)
	$(recip) src/UserVect.cpp
User.o : $(user)
	$(recip) src/User.cpp
Add.o : $(add)
	$(recip) src/addUser.cpp
Remove.o : $(remove)
	$(recip) src/rmUser.cpp
MonthExp.o : $(monthly)
	$(recip) src/MonthExp.cpp
Date.o : $(date)
	$(recip) src/Date.cpp
Item.o : $(item)
	$(recip) src/Item.cpp
Category.o : $(cat)
	$(recip) src/Category.cpp
Calcs.o : $(calc)
	$(recip) src/Calcs.cpp

clean:
	rm *.o
clean2:
	rm driver *.o
