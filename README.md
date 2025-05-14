# Them Candles Stink

It's recommended to use minikube for maintaining the cluster.

## Preparation

```
    # Make sure the minikube container is on
    minikube start

    # Install 'local-path' storage class
    minikube addons enable storage-provisioner-rancher
```

## Run

### Through minikube

```
    # Run the cluster
    minikube kubectl -- apply -f ./k8s

    # Stop the cluster
    minikube kubectl -- stop -f ./k8s
```

### Through Helm

```
    # Run the cluster
    helm install test-release ./helm/test-repo-chart/

    # Stop the cluster
    helm uninstall test-release
```

## Check the output

```
    minikube service web-service --url
```

## Update the pods

```
    minikube rollout restart pod/app-pod deployment/web
```

That's all. Them candles stink.