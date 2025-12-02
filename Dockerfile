FROM gcc:latest
COPY . .
RUN g++ Calculator.cpp -o calculator.exe
CMD ["./calculator.exe"]


