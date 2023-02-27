all : tp1 tp2

tp1 : séance_1.cpp
	g++ -std=gnu++20 -Wextra -Wall -Werror séance_1.cpp -o prog1
tp2 : séance_2.cpp
	g++ -std=gnu++20 -Wextra -Wall -Werror séance_2.cpp -o prog2

