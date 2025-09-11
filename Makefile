all: 
	make comms 
	make engines 
	make life_support 
	make navigation 
	make shields 
	make thrusters 
	make weapons
	make ship_launch

clean:
	rm -f *.o ship_launch

# Write your make targets for each component here 
# Be sure they compile to object files! (.o)

# Ship launch should be the last target to compile that combines all of the object files and uses the ship_launch.cpp file as main
# Be sure to link all of the object files when compiling ship_launch
