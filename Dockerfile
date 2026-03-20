FROM gcc:latest
WORKDIR /app
copy . /
run cmake .
run make
run ./ComplexProject