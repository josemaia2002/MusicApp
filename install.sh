#!/bin/bash

DIR=`pwd`/build
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

FILE=`pwd`/run.sh
if [ -f "$FILE" ]; then
        echo "Already installed!"
else		
	touch run.sh
      	chmod +x run.sh
    	echo "#!/bin/bash" >> run.sh
    	echo "cd build" >> run.sh
    	echo "./program" >> run.sh      
    	
    	echo "Finishing the installation"
    	sleep 1 
	
	echo -ne '###                       [10%]\r'
	sleep 1
	echo -ne '#####                     [20%]\r'
	sleep 1
	echo -ne '########                  [30%]\r'
	sleep 1
	echo -ne '############              [40%]\r'
	sleep 1
	echo -ne '###############           [50%]\r'
	sleep 1
	echo -ne '##################        [60%]\r'
	sleep 1
	echo -ne '####################      [70%]\r'
	sleep 1
	echo -ne '######################    [80%]\r'
	sleep 1
	echo -ne '########################  [90%]\r'
	sleep 1
	echo -ne '##########################[100%]\r'
	echo -ne '\n'

	echo "MusicApp2.1 installed"
fi
