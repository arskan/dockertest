FROM debian:stable
RUN apt-get update && apt-get install -y cmake git clang && rm -rf /var/lib/apt/lists/*
ADD skeleton.tgz /root
RUN git clone git@github.com:arskan/dockertest.git && mkdir dockertest/build
WORKDIR dockertest/build
CMD git pull && cmake .. && make && make test
