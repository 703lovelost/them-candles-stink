```
    # Run the cluster through minikube
    minikube kubectl -- apply -f ./k8s

    # Get URL to check the web output
    minikube service web-service --url

    # Stop the cluster through minikube
    minikube kubectl -- stop -f ./k8s
```

That's all. Them candles stink.
