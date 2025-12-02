FROM gcc:latest
COPY . .
RUN gcc Calculator.c -o calculator.exe
CMD ["./calculator.exe"]


