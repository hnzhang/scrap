# Pull the iamge and call it base
FROM alpine:3.11 as base
#copy he code
COPY src /codebase/src
COPY bin/server /codebase/bin/server
# build the binary
# RUN cd /codebase && go build -v -o /codebase/bin/server ./src/main.go

# set the env
ENV PORT=8080
# specify the run comand
CMD ["sh", "-c", "/codebase/bin/server"]
