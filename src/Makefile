filesToDelete = TestingMain 
filesToCompile = TestingMain.cpp BasePizza.cpp BulkDiscount.cpp Customer.cpp Discount.cpp ExtraCheese.cpp FamilyDiscount.cpp Menu.cpp Observer.cpp Order.cpp OrderManager.cpp OrderPlaced.cpp OrderReady.cpp OrderPrep.cpp Pizza.cpp PizzaComponent.cpp PizzaDecorator.cpp PizzaMenu.cpp RegularPrice.cpp SpecialMenu.cpp StuffedCrust.cpp Topping.cpp Website.cpp 
filesInCoverageReport = TestingMain

Main:
	g++ -g -std=c++20 ${filesToCompile}  -o TestingMain

clean:
	rm *.o *.gcov *.gcda *.gcno *.gz *.json *.html *.css output.txt coverage.txt valgrind.txt -f ${filesToDelete}
output:
	make clean
	g++ -g --coverage -dumpbase '' ${filesToCompile} -o TestingMain
	./TestingMain > output.txt
	
coverage:
	make clean
	g++ -g --coverage -dumpbase '' ${filesToCompile} -o TestingMain
	./TestingMain > output.txt
	gcov -f -m -r -j ${filesInCoverageReport} > coverage.txt 
	gcovr --html-details output.html
run:
	make clean
	make
	./TestingMain
	
valgrind:
	make clean
	make
	valgrind --track-origins=yes --leak-check=full --keep-stacktraces=alloc-and-free --error-exitcode=1 --log-file=valgrind.txt ./TestingMain > output.txt

gdb:
	make clean
	make
	gdb ./TestingMain

all:
	make clean
	make valgrind
	make coverage
	make gdb