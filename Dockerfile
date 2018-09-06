FROM debian:stable
RUN apt update && apt install cmake
RUN git clone git@github.com:arskan/dockertest.git && mkdir dockertest/build
WORKDIR dockertest/build
CMD git pull && cmake .. && make && make test
