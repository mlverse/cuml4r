// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// dbscan
Rcpp::List dbscan(Rcpp::NumericMatrix const& x, int const min_pts, double const eps, size_t const max_bytes_per_batch);
RcppExport SEXP _cuml4r_dbscan(SEXP xSEXP, SEXP min_ptsSEXP, SEXP epsSEXP, SEXP max_bytes_per_batchSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int const >::type min_pts(min_ptsSEXP);
    Rcpp::traits::input_parameter< double const >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< size_t const >::type max_bytes_per_batch(max_bytes_per_batchSEXP);
    rcpp_result_gen = Rcpp::wrap(dbscan(x, min_pts, eps, max_bytes_per_batch));
    return rcpp_result_gen;
END_RCPP
}
// kmeans
Rcpp::List kmeans(Rcpp::NumericMatrix const& x, int const k, int const max_iters);
RcppExport SEXP _cuml4r_kmeans(SEXP xSEXP, SEXP kSEXP, SEXP max_itersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int const >::type k(kSEXP);
    Rcpp::traits::input_parameter< int const >::type max_iters(max_itersSEXP);
    rcpp_result_gen = Rcpp::wrap(kmeans(x, k, max_iters));
    return rcpp_result_gen;
END_RCPP
}
// rf_classifier_fit
SEXP rf_classifier_fit(Rcpp::NumericMatrix const& input, Rcpp::IntegerVector const& labels, int const n_trees, bool const bootstrap, float const max_samples, int const n_streams, int const max_depth, int const max_leaves, float const max_features, int const n_bins, int const min_samples_leaf, int const min_samples_split, int const split_criterion, float const min_impurity_decrease, int const max_batch_size, int const verbosity);
RcppExport SEXP _cuml4r_rf_classifier_fit(SEXP inputSEXP, SEXP labelsSEXP, SEXP n_treesSEXP, SEXP bootstrapSEXP, SEXP max_samplesSEXP, SEXP n_streamsSEXP, SEXP max_depthSEXP, SEXP max_leavesSEXP, SEXP max_featuresSEXP, SEXP n_binsSEXP, SEXP min_samples_leafSEXP, SEXP min_samples_splitSEXP, SEXP split_criterionSEXP, SEXP min_impurity_decreaseSEXP, SEXP max_batch_sizeSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector const& >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< int const >::type n_trees(n_treesSEXP);
    Rcpp::traits::input_parameter< bool const >::type bootstrap(bootstrapSEXP);
    Rcpp::traits::input_parameter< float const >::type max_samples(max_samplesSEXP);
    Rcpp::traits::input_parameter< int const >::type n_streams(n_streamsSEXP);
    Rcpp::traits::input_parameter< int const >::type max_depth(max_depthSEXP);
    Rcpp::traits::input_parameter< int const >::type max_leaves(max_leavesSEXP);
    Rcpp::traits::input_parameter< float const >::type max_features(max_featuresSEXP);
    Rcpp::traits::input_parameter< int const >::type n_bins(n_binsSEXP);
    Rcpp::traits::input_parameter< int const >::type min_samples_leaf(min_samples_leafSEXP);
    Rcpp::traits::input_parameter< int const >::type min_samples_split(min_samples_splitSEXP);
    Rcpp::traits::input_parameter< int const >::type split_criterion(split_criterionSEXP);
    Rcpp::traits::input_parameter< float const >::type min_impurity_decrease(min_impurity_decreaseSEXP);
    Rcpp::traits::input_parameter< int const >::type max_batch_size(max_batch_sizeSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(rf_classifier_fit(input, labels, n_trees, bootstrap, max_samples, n_streams, max_depth, max_leaves, max_features, n_bins, min_samples_leaf, min_samples_split, split_criterion, min_impurity_decrease, max_batch_size, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// rf_classifier_predict
Rcpp::IntegerVector rf_classifier_predict(SEXP model_xptr, Rcpp::NumericMatrix const& input, int const verbosity);
RcppExport SEXP _cuml4r_rf_classifier_predict(SEXP model_xptrSEXP, SEXP inputSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_xptr(model_xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(rf_classifier_predict(model_xptr, input, verbosity));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cuml4r_dbscan", (DL_FUNC) &_cuml4r_dbscan, 4},
    {"_cuml4r_kmeans", (DL_FUNC) &_cuml4r_kmeans, 3},
    {"_cuml4r_rf_classifier_fit", (DL_FUNC) &_cuml4r_rf_classifier_fit, 16},
    {"_cuml4r_rf_classifier_predict", (DL_FUNC) &_cuml4r_rf_classifier_predict, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_cuml4r(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
