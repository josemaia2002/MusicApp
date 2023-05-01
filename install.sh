#!/bin/bash

mkdir build
cd build
cmake ..
cmake --build .
cd ..
touch run.sh
chmod +x run.sh
echo "#!/bin/bash" >> run.sh
echo "cd build" >> run.sh
echo "./program" >> run.sh
