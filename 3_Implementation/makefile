# target_name : Dependencies
#<tab>Command

SRC = project_main.c\
src/account_opening.c\
src/existing_customer.c\
unity/unity.c\
src/dollarcurrency.c\
src/euro_test.c

INC = inc

c.exe : $(SRC) $(TEST_SRC)
	gcc $^ -I$(INC) -o $@

run: c.exe
	./c.exe

clean :
	del c.exe