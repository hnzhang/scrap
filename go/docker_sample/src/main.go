package main

import (
    "fmt"
    "log"
    "net/http"
    "os"
)

const homepageEndPoint = "/"

// StartWebServer the webserver
func StartWebServer() {
    http.HandleFunc(homepageEndPoint, handleHomepage)
    port := os.Getenv("PORT")
    if len(port) == 0 {
        panic("Environment variable PORT is not set")
    }

    log.Printf("Starting web server to listen on endpoints [%s] and port %s",
        homepageEndPoint, port)
    if err := http.ListenAndServe(":"+port, nil); err != nil {
        panic(err)
    }
}

func handleHomepage(w http.ResponseWriter, r *http.Request) {
    urlPath := r.URL.Path
    log.Printf("Web request received on url path %s", urlPath)
    msg := "Hello world"
    _, err := w.Write([]byte(msg))
    if err != nil {
        fmt.Printf("Failed to write response, err: %s", err)
    }
}

func main() {
    StartWebServer()
}
