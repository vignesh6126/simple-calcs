pipeline{
    aget any{
        environments{
            DOCKER_CREDS = credentials('docker-user')
            IMAGE_NAME = "vignesg043/simple-calc-app"
            TAG = "latest"
        }
    }
    stages{
        stage("compile"){
            bat "gcc Calculator.c -o calculator.exe"
            bat "calculator.exe"

        }
        stage("build docker image"){
            bat "docker build -t %IMAGE_NAME%:%TAG% ."
        }
        stage("push docker image"){
            bat "docker login -u %DOCKER_CREDS_USR% --password-stdin"
            bat "docker push %IMAGE_NAME%:%TAG%"
        }
    }
}    
     
