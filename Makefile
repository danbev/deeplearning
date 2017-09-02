
COMPILE_TEST = clang++ -std=c++11 -O0 -g -I`pwd`/deps/googletest/googletest/include  -I./src lib/libgtest.a

out/simple_network: src/simple-network.cc test/simple_network_test.cc out
	$(COMPILE_TEST) test/main.cc test/simple_network_test.cc src/simple-network.cc -o $@

list-gtests: 
	./out/cctest --gtest_list_tests

out: 
	@mkdir $@

.PHONY: clean list-gtests

clean: 
	@rm -rf out
