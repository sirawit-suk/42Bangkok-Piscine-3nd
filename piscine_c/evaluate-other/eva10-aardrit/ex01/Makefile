# type "make" or "make all" to build and check program (main use)

all: build checkNorm

# type "make build" to run build

build:
	@echo "\no----- Result $(notdir $(CURDIR)) --------o\n";
	@echo "Your result:"
	@gcc -Wall -Wextra -Werror main.c ft_*.c -o out && ./out; 

# type "make checkNorm" to run norminette

checkNorm:
	@echo "\n----- Norminette $(notdir $(CURDIR)) ------\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c; 
	@echo "";
	@echo "o--------------------------o";

# ---------- UNAVAILABLE ---------- #

# type "make checkMou" to check your output with our D-I-Y Moulinette
# note: notice that 'checkOutput' is just a file that contain answer in string
# if you modify our 'main.c', you can't use D-I-Y Moulinette anymore
# because I can't put my correct function in your directory, right?

# checkMou:
#	@echo "\nExpected result:\n";
#	@./out > userOutput
#	@diff userOutput ../checkMoulinette/$(notdir $(CURDIR))/checkOutput;

# --------------------------------- #

# type "make copy" to copy Makefile to all sub-directory
# note: remember that you should stay in main directory and type this command

copyMakefile:
	@echo "Copy Makefile to all sub-directory"
	@find . -type d -name "ex*" > dir_name
	@cat dir_name | xargs -n 1 cp -v Makefile
	@rm dir_name

getDirname:
	@echo $(notdir $(CURDIR))

checkAll: copyMakefile
	@for num in 00 01 02 03 04 05 06 07 08 09 10 11 12; do $(MAKE) -C ex$$num ; done

# type "make rename OLD=oldname NEW=newname" to change name of function in main
# note: parameter will still be the same, don't forget to change it depend on exercise

rename:	
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > test1
	@mv test1 $(NEW).c
	@rm $(OLD).c
	@sed 's/$(OLD)/$(NEW)/g' main.c > test2	
	@mv test2 main.c
