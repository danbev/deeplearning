
COMPILE_TEST = clang++ -std=c++11 -Wunused-variable -O0 -g -I`pwd`/deps/googletest/googletest/include  -I./src lib/libgtest.a

out/simple_network: src/simple-network.cc test/simple_network_test.cc | out
	$(COMPILE_TEST) test/main.cc test/simple_network_test.cc src/simple-network.cc -o $@

out/util.o: src/util.cc | out
	clang++ -std=c++11 -Wunused-variable -O0 -g -c src/util.cc -o $@.o

out/util_test: out/util.o test/util_test.cc | out
	$(COMPILE_TEST) test/main.cc test/util_test.cc out/util.o -o $@

out/lg: src/linear-regression.cc src/linear-regression.h test/linear-regression_test.cc | out
	$(COMPILE_TEST) test/main.cc test/linear-regression_test.cc src/linear-regression.cc -o $@

out/gd: src/gradient-decent.cc src/gradient-decent.h test/gradient-decent_test.cc | out
	$(COMPILE_TEST) test/main.cc test/gradient-decent_test.cc src/gradient-decent.cc -o $@

out/lr: src/logistic-regression.cc \
	src/logistic-regression.h \
	test/logistic-regression_test.cc | out
	$(COMPILE_TEST) test/main.cc test/logistic-regression_test.cc src/util.cc src/logistic-regression.cc -o $@

.PHONY: test
test: 
	./out/simple_network

out: 
	@mkdir $@

.PHONY: clean

clean: 
	@rm -rf out
