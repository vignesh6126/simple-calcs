FROM gcc:latest
COPY . .
RUN gcc Calculator.cpp -o calculator.exe
CMD ["./calculator.exe"]


