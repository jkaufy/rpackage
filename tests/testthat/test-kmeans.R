library(testthat)
test_that("KMEANS output vector has reasonable size/values", {
  data.mat <- as.matrix(iris[, c("Petal.Length", "Petal.Width")])
  K <- 3
  kmeans_result <-rpackage::kmeans_interface(data.mat, K)
  expect_identical(length(kmeans_result[["cluster_id"]]), nrow(data.mat))
  expect_true(all(kmeans_result[["cluster_id"]] %in% 1:K))
})

