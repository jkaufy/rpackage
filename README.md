# rpackage
##Installation:

You can install this R package by using the command:
```
remotes::install_github(“jkaufy/rpackage”)
```
## Usage:

Example for KMEANS:

```
data.mat <- as.matrix(iris[, c("Petal.Length", "Petal.Width")])
K <- 3
kmeans_result <- rpackage::kmeans_interface(data.mat, K))
```

Example for Gaussian Mixture Model (GMM):
```
data.mat <- as.matrix(iris[, c("Petal.Length", "Petal.Width")])
K <- 3
GMM_result <- rpackage::GMM(data.mat, K))
```
