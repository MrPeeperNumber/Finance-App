objects = driver.o interface.o Month.o

edit : $(objects)
	g++ -o edit $(objects)

driver.o : src/driver.cpp headers/driver.hpp
	g++ -c src/driver.cpp
interface.o : src/interface.cpp headers/interface.hpp
	g++ -c src/interface.cpp
Month.o : src/Month.cpp headers/Month.hpp
	g++ -c src/Month.cpp


clean:
			rm edit $(objects)
