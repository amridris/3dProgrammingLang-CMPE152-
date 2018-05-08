#!bin/bash
# cd /mnt/d/UbuntuFiles/CMPE152Ubuntu/cmpe152NewLanguage/cmpe152CloudFiles
cd build
cmake ..
make -j
cd ..

./Clouds Assignment7.clouds

java -jar jasmin-2.4/jasmin.jar assignmentseven.j

# ./Clouds Assignment6.clouds
# ./Clouds Assignment7.clouds

# run executable?
# java -jar .:PascalRTL.jar Clouds