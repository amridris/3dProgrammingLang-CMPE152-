#!bin/bash
# cd /mnt/d/UbuntuFiles/CMPE152Ubuntu/cmpe152NewLanguage/cmpe152CloudFiles
cd build
cmake ..
make -j
cd ..

./Clouds Assignment7.clouds


# java -jar jasmin-2.4/jasmin.jar assignmentseven.j hello/*.j
java -jar jasmin-2.4/jasmin.jar assignmentseven.j

java -cp .:PascalRTL.jar assignmentseven

javac collisionengine/*.java
# ./Clouds Assignment6.clouds
# ./Clouds Assignment7.clouds

# run executable?
# java -jar .:PascalRTL.jar Clouds


# create .jar
cd src/java/hello
jar cv hello.jar *.class
cd ../../..


# use jasmin disassembler
java -jar jasper.jar src/java/hello/HelloWorld.class
