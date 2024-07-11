USUAL_FLAGS = -Wall -Wextra -Werror -std=c11 -pedantic

SRC = $(wildcard s21_*.c)
OBJ = $(SRC:.c=.o)

all: clean s21_project.a 

%.o: %.c
	gcc $(USUAL_FLAGS) -c $< -o $@

s21_project.a: $(OBJ)
	ar rc $@ $(OBJ)





# ________________________________________________
#	So, what this target at line 8 (%.o: %.c] does?
#    $@: The filename representing the target.
#    $%: The filename element of an archive member specification.
#    $<: The filename of the first prerequisite.
# ________________________________________________

# ________________________________________________
# btw, this code above is basically the same as this one below

FLAGS = -Wall -Wextra -Werror

OBJECT = s21_aaaa.o s21_bbbb.o s21_dance.o

all2: clean cupcake.a

compile:
	gcc $(FLAGS) -c s21_aaaa.c -o s21_aaaa.o 
	gcc $(FLAGS) -c s21_bbbb.c -o s21_bbbb.o 
	gcc $(FLAGS) -c s21_dance.c -o s21_dance.o 

cupcake.a: compile
	ar rc s21_piroject.a $(OBJECT)






#######################
# Gcov report pratice #

LIB_FLAGS = -lcheck -lpthread -lm -lrt -lsubunit -lgcov -pthread
GCOV_FLAGS = -fprofile-arcs -ftest-coverage #these two flags are the same as "--coverage" flag
SRC_TEST = ./test_dir/utests_suites.c ./test_dir/utests_main.c 

gcov_report: gclean 
	gcc $(USUAL_FLAGS) $(SRC) $(SRC_TEST) $(LIB_FLAGS) $(GCOV_FLAGS) -g -o ./test_dir/utests.out
	./test_dir/utests.out
	lcov --capture --directory ./test_dir/ -o ./test_dir/report.info
	genhtml ./test_dir/report.info --frames --output-directory report_html
	open ./report_html/src/index.html

test: gclean
	gcc $(USUAL_FLAGS) $(SRC) $(SRC_TEST) $(LIB_FLAGS) -o ./test_dir/utests.out
	./test_dir/utests.out


#######################
# git add/commit/push #

gs:
	git status

gacp:
	git add -A
	git commit -m "$(msg)"
	git push 


#################
#      etc      #

clean:
	rm -rf *.o \ rm -rf ./test_dir/*.out
	rm -rf *.a

gclean: clean
	rm -rf ./test_dir/*.gcno
	rm -rf ./test_dir/*.gcda
	rm -rf ./test_dir/*.info
	rm -rf report_html
