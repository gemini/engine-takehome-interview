FROM debian:10
RUN apt-get -y update \
  && apt-get -y install build-essential \
  && apt-get clean
COPY src/ /app
RUN cd /app && make build
