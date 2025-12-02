pipeline {
    agent any
    environment {
        DOCKER_CREDS = credentials('docker-user')
        IMAGE_NAME = "vignesg043/simple-calc-app"
        TAG = "latest"
    }
    stages {
        stage("compile") {
            steps {
                bat "gcc Calculator.cpp -o calculator.exe"
                bat "calculator.exe"
            }
        }
        stage("build docker image") {
            steps {
                bat "docker build -t %IMAGE_NAME%:%TAG% ."
            }
        }
        stage("push docker image") {
            steps {
                bat "echo %DOCKER_CREDS_PSW% | docker login -u %DOCKER_CREDS_USR% --password-stdin"
                bat "docker push %IMAGE_NAME%:%TAG%"
            }
        }
    }
}