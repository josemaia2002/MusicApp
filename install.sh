#!/bin/bash

DIR=/home/maia/Documents/LPI/MusicApp/build
if [ -d "$DIR" ]; then
	cd build
        cmake --build .
    	cd .. 
else
	mkdir build
    	cd build
    	cmake ..
    	cmake --build .
    	cd ..   	       
fi

FILE=/home/maia/Documents/LPI/MusicApp/run.sh
if [ -f "$FILE" ]; then
        echo "$FILE exists!"
else
	touch run.sh
      	chmod +x run.sh
    	echo "#!/bin/bash" >> run.sh
    	echo "cd build" >> run.sh
    	echo "./program" >> run.sh      	       
fi
