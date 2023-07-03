FROM ubuntu:latest

RUN apt-get update && apt install git g++ cmake libmysql++-dev libcurl4-openssl-dev pkg-config -y

RUN mkdir /root/project/

RUN mkdir /root/project/Classes

RUN mkdir /root/project/Scripts

ADD ./Classes/ /root/project/Classes

ADD ./Scripts/ /root/project/Scripts

ADD ./main.cpp /root/project/

ADD ./CMakeLists.txt /root/project/