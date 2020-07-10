.PHONY: help
help: ## Prints a help message
	@grep -E '^[0-9a-zA-Z_-]+:.*?## .*$$' Makefile | \
	sort | \
	awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

.PHONY: build
build: ## Kicks off a build
	mkdir -p build
	g++ -o build/match_engine main.cpp

.PHONY: clean
clean: ## Cleans the build directory
	rm -rf build/*

.PHONY: run
run: build ## Runs the application in the foreground
	./build/match_engine
