FROM debian:stable
RUN apt-get update && apt-get install -y cmake git
RUN git clone https://github.com/arskan/dockertest.git && mkdir dockertest/build
WORKDIR dockertest/build
CMD git pull && cmake .. && make && make test
