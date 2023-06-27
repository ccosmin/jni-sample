With lib1 only:

Compile java:
cd java/src/main/java/sample
javac SayHello.java

Compile c++:
cd native
mkdir build
cd build
cmake ..

Open solution/compile.

Run java:
cd java/src/main/java
java -cp . -Djava.library.path=<path to output dir> sample/SayHello