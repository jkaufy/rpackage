#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// find_closest_center_interface
IntegerVector find_closest_center_interface(NumericMatrix data_mat, NumericMatrix centers_mat);
RcppExport SEXP _anRpackage_find_closest_center_interface(SEXP data_matSEXP, SEXP centers_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type data_mat(data_matSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type centers_mat(centers_matSEXP);
    rcpp_result_gen = Rcpp::wrap(find_closest_center_interface(data_mat, centers_mat));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_anRpackage_find_closest_center_interface", (DL_FUNC) &_anRpackage_find_closest_center_interface, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_anRpackage(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}