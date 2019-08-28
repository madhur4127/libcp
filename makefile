%: %.cc
	g++ -Wall -Wextra -std=c++14 -Wshadow -Wcast-qual \
		-Wcast-align -Wno-unused-result -g -fsanitize=address \
		-fno-omit-frame-pointer -fuse-ld=gold \
		$< -o $@
