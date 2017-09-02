
COMPILE_TEST = clang++ -std=c++11 -O0 -g -I`pwd`/deps/googletest/googletest/include  lib/libgtest.a -o out/cctest

out/cctest: test/main.cc out
	$(COMPILE_TEST) $<

list-gtests: test/main
	./out/cctest --gtest_list_tests

out: 
	@mkdir $@

.PHONY: clean list-gtests

clean: 
	@rm -rf out
