FROM gcc:latest

RUN apt-get update && \
    apt-get install -y \
    cmake \
    libgtest-dev

WORKDIR /app

COPY . /app

RUN chmod +x build.sh start.sh

RUN ./build.sh

CMD ./start.sh && ./start.sh > /logs/test.log