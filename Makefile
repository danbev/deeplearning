
COMPILE_TEST = clang++ -std=c++11 -O0 -g -I`pwd`/deps/googletest/googletest/include  -I./src lib/libgtest.a

out/simple_network: src/simple-network.cc test/simple_network_test.cc out
	$(COMPILE_TEST) test/main.cc test/simple_network_test.cc src/simple-network.cc -o $@

out/util: src/util.cc test/util_test.cc out
	$(COMPILE_TEST) test/main.cc test/util_test.cc src/util.cc -o $@

.PHONY: test
test: 
	./out/simple_network

out: 
	@mkdir $@

.PHONY: clean

clean: 
	@rm -rf out
