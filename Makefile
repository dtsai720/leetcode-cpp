.PHONY: all
all:
	@cmake -S . -B build
	@cmake --build build

.PHONY: test
test:
	@echo "Running tests..."
	@./unittest.sh
	@echo "Tests passed."

.PHONY: clean
clean:
	@$(RM) -r build

.PHONY: lint
lint:
	@find . -name "*.cpp" -o -name "*.h" | xargs clang-format -i
