%: %.cc
	g++ -Wall -Wextra -std=c++14 -Wshadow -Wcast-qual -Wfatal-errors \
		-Wcast-align -Wno-unused-result -g -fsanitize=address,undefined \
		-fno-omit-frame-pointer -fuse-ld=gold -I/home/madhur/HDD/Prgs \
		$< -o $@
