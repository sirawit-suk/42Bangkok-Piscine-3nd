all: build check
build:
	@echo "----------------------";
	@echo "Result:";
	@gcc -Wall -Wextra -Werror  ft_*.c; 
	@./a.out abc bca cba ABC Abc ABc AbC aBC aBc abC test2 test1 test3
check:
	@echo "\n";
	@norminette -R CheckForbiddenSourceHeader ft_*.c; 
	@echo "";
	@echo "----------------------";
rename:
	@sed 's/$(OLD)/$(NEW)/g' $(OLD).c > test1
	@mv test1 $(NEW).c
	@rm $(OLD).c
copy:
	cp ft_*.c Makefile ../ex$(NUM)
