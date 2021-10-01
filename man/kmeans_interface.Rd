\name{kmeans_interface}
\docType{package}
\title{
  Kmeans Clustering Algorithm
}
\alias{
  kmeans_interface
}
\description{
  For each row in the data matrix,
  we compute the distances with all
  rows in the centers matrix,
  using the L2/euclidean distance. Then
  assign each point to a cluster K. We
  do this until the cluster centers converge.
  Returns the Total Within sum of squares and a
  numeric vector of cluster ids.
}
\usage{
kmeans_interface(data_mat, clusters)
}
\arguments{
\item{data_mat}{A numeric data matrix (nxp)}

\item{clusters}{The number of clusters}
}
\value{
Returns the Total Within sum of squares and a
  numeric vector of cluster ids in a list. 
}
\examples{

  data.mat <- as.matrix(
    iris[, c("Petal.Length", "Petal.Width")])
  K <- 3
  set.seed(1)
  (cluster.id.vec <-
    rpackage::kmeans_interface(
      data.mat, K))
}