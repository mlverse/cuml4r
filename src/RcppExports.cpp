// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// agglomerative_clustering
Rcpp::List agglomerative_clustering(Rcpp::NumericMatrix const& x, bool const pairwise_conn, int const metric, int const n_neighbors, int const n_clusters);
RcppExport SEXP _cuml_agglomerative_clustering(SEXP xSEXP, SEXP pairwise_connSEXP, SEXP metricSEXP, SEXP n_neighborsSEXP, SEXP n_clustersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool const >::type pairwise_conn(pairwise_connSEXP);
    Rcpp::traits::input_parameter< int const >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< int const >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< int const >::type n_clusters(n_clustersSEXP);
    rcpp_result_gen = Rcpp::wrap(agglomerative_clustering(x, pairwise_conn, metric, n_neighbors, n_clusters));
    return rcpp_result_gen;
END_RCPP
}
// has_libcuml
bool has_libcuml();
RcppExport SEXP _cuml_has_libcuml() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(has_libcuml());
    return rcpp_result_gen;
END_RCPP
}
// dbscan
Rcpp::List dbscan(Rcpp::NumericMatrix const& x, int const min_pts, double const eps, size_t const max_bytes_per_batch, int const verbosity);
RcppExport SEXP _cuml_dbscan(SEXP xSEXP, SEXP min_ptsSEXP, SEXP epsSEXP, SEXP max_bytes_per_batchSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int const >::type min_pts(min_ptsSEXP);
    Rcpp::traits::input_parameter< double const >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< size_t const >::type max_bytes_per_batch(max_bytes_per_batchSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(dbscan(x, min_pts, eps, max_bytes_per_batch, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// fil_enabled
bool fil_enabled();
RcppExport SEXP _cuml_fil_enabled() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(fil_enabled());
    return rcpp_result_gen;
END_RCPP
}
// fil_load_model
SEXP fil_load_model(int const model_type, std::string const& filename, int const algo, bool const classification, float const threshold, int const storage_type, int const blocks_per_sm, int const threads_per_tree, int const n_items);
RcppExport SEXP _cuml_fil_load_model(SEXP model_typeSEXP, SEXP filenameSEXP, SEXP algoSEXP, SEXP classificationSEXP, SEXP thresholdSEXP, SEXP storage_typeSEXP, SEXP blocks_per_smSEXP, SEXP threads_per_treeSEXP, SEXP n_itemsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int const >::type model_type(model_typeSEXP);
    Rcpp::traits::input_parameter< std::string const& >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int const >::type algo(algoSEXP);
    Rcpp::traits::input_parameter< bool const >::type classification(classificationSEXP);
    Rcpp::traits::input_parameter< float const >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int const >::type storage_type(storage_typeSEXP);
    Rcpp::traits::input_parameter< int const >::type blocks_per_sm(blocks_per_smSEXP);
    Rcpp::traits::input_parameter< int const >::type threads_per_tree(threads_per_treeSEXP);
    Rcpp::traits::input_parameter< int const >::type n_items(n_itemsSEXP);
    rcpp_result_gen = Rcpp::wrap(fil_load_model(model_type, filename, algo, classification, threshold, storage_type, blocks_per_sm, threads_per_tree, n_items));
    return rcpp_result_gen;
END_RCPP
}
// fil_predict
Rcpp::NumericMatrix fil_predict(SEXP const& model, Rcpp::NumericMatrix const& x, bool const output_probabilities);
RcppExport SEXP _cuml_fil_predict(SEXP modelSEXP, SEXP xSEXP, SEXP output_probabilitiesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP const& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool const >::type output_probabilities(output_probabilitiesSEXP);
    rcpp_result_gen = Rcpp::wrap(fil_predict(model, x, output_probabilities));
    return rcpp_result_gen;
END_RCPP
}
// kmeans
Rcpp::List kmeans(Rcpp::NumericMatrix const& x, int const k, int const max_iters, double const tol, int const init_method, Rcpp::NumericMatrix const& centroids, int const seed, int const verbosity);
RcppExport SEXP _cuml_kmeans(SEXP xSEXP, SEXP kSEXP, SEXP max_itersSEXP, SEXP tolSEXP, SEXP init_methodSEXP, SEXP centroidsSEXP, SEXP seedSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int const >::type k(kSEXP);
    Rcpp::traits::input_parameter< int const >::type max_iters(max_itersSEXP);
    Rcpp::traits::input_parameter< double const >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int const >::type init_method(init_methodSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type centroids(centroidsSEXP);
    Rcpp::traits::input_parameter< int const >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(kmeans(x, k, max_iters, tol, init_method, centroids, seed, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// pca_fit_transform
Rcpp::List pca_fit_transform(Rcpp::NumericMatrix const& x, double const tol, int const n_iters, int const verbosity, int const n_components, int const algo, bool const whiten, bool const transform_input);
RcppExport SEXP _cuml_pca_fit_transform(SEXP xSEXP, SEXP tolSEXP, SEXP n_itersSEXP, SEXP verbositySEXP, SEXP n_componentsSEXP, SEXP algoSEXP, SEXP whitenSEXP, SEXP transform_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double const >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int const >::type n_iters(n_itersSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    Rcpp::traits::input_parameter< int const >::type n_components(n_componentsSEXP);
    Rcpp::traits::input_parameter< int const >::type algo(algoSEXP);
    Rcpp::traits::input_parameter< bool const >::type whiten(whitenSEXP);
    Rcpp::traits::input_parameter< bool const >::type transform_input(transform_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(pca_fit_transform(x, tol, n_iters, verbosity, n_components, algo, whiten, transform_input));
    return rcpp_result_gen;
END_RCPP
}
// pca_inverse_transform
Rcpp::NumericMatrix pca_inverse_transform(Rcpp::List model, Rcpp::NumericMatrix const& x);
RcppExport SEXP _cuml_pca_inverse_transform(SEXP modelSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(pca_inverse_transform(model, x));
    return rcpp_result_gen;
END_RCPP
}
// rf_classifier_fit
SEXP rf_classifier_fit(Rcpp::NumericMatrix const& input, Rcpp::IntegerVector const& labels, int const n_trees, bool const bootstrap, float const max_samples, int const n_streams, int const max_depth, int const max_leaves, float const max_features, int const n_bins, int const min_samples_leaf, int const min_samples_split, int const split_criterion, float const min_impurity_decrease, int const max_batch_size, int const verbosity);
RcppExport SEXP _cuml_rf_classifier_fit(SEXP inputSEXP, SEXP labelsSEXP, SEXP n_treesSEXP, SEXP bootstrapSEXP, SEXP max_samplesSEXP, SEXP n_streamsSEXP, SEXP max_depthSEXP, SEXP max_leavesSEXP, SEXP max_featuresSEXP, SEXP n_binsSEXP, SEXP min_samples_leafSEXP, SEXP min_samples_splitSEXP, SEXP split_criterionSEXP, SEXP min_impurity_decreaseSEXP, SEXP max_batch_sizeSEXP, SEXP verbositySEXP) {
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
RcppExport SEXP _cuml_rf_classifier_predict(SEXP model_xptrSEXP, SEXP inputSEXP, SEXP verbositySEXP) {
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
// rf_regressor_fit
SEXP rf_regressor_fit(Rcpp::NumericMatrix const& input, Rcpp::NumericVector const& responses, int const n_trees, bool const bootstrap, float const max_samples, int const n_streams, int const max_depth, int const max_leaves, float const max_features, int const n_bins, int const min_samples_leaf, int const min_samples_split, int const split_criterion, float const min_impurity_decrease, int const max_batch_size, int const verbosity);
RcppExport SEXP _cuml_rf_regressor_fit(SEXP inputSEXP, SEXP responsesSEXP, SEXP n_treesSEXP, SEXP bootstrapSEXP, SEXP max_samplesSEXP, SEXP n_streamsSEXP, SEXP max_depthSEXP, SEXP max_leavesSEXP, SEXP max_featuresSEXP, SEXP n_binsSEXP, SEXP min_samples_leafSEXP, SEXP min_samples_splitSEXP, SEXP split_criterionSEXP, SEXP min_impurity_decreaseSEXP, SEXP max_batch_sizeSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type responses(responsesSEXP);
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
    rcpp_result_gen = Rcpp::wrap(rf_regressor_fit(input, responses, n_trees, bootstrap, max_samples, n_streams, max_depth, max_leaves, max_features, n_bins, min_samples_leaf, min_samples_split, split_criterion, min_impurity_decrease, max_batch_size, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// rf_regressor_predict
Rcpp::NumericVector rf_regressor_predict(SEXP model_xptr, Rcpp::NumericMatrix const& input, int const verbosity);
RcppExport SEXP _cuml_rf_regressor_predict(SEXP model_xptrSEXP, SEXP inputSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_xptr(model_xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(rf_regressor_predict(model_xptr, input, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// rproj_johnson_lindenstrauss_min_dim
size_t rproj_johnson_lindenstrauss_min_dim(size_t const n_samples, double const eps);
RcppExport SEXP _cuml_rproj_johnson_lindenstrauss_min_dim(SEXP n_samplesSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t const >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< double const >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(rproj_johnson_lindenstrauss_min_dim(n_samples, eps));
    return rcpp_result_gen;
END_RCPP
}
// rproj_fit
SEXP rproj_fit(int const n_samples, int const n_features, int const n_components, double const eps, bool const gaussian_method, double const density, int const random_state);
RcppExport SEXP _cuml_rproj_fit(SEXP n_samplesSEXP, SEXP n_featuresSEXP, SEXP n_componentsSEXP, SEXP epsSEXP, SEXP gaussian_methodSEXP, SEXP densitySEXP, SEXP random_stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int const >::type n_samples(n_samplesSEXP);
    Rcpp::traits::input_parameter< int const >::type n_features(n_featuresSEXP);
    Rcpp::traits::input_parameter< int const >::type n_components(n_componentsSEXP);
    Rcpp::traits::input_parameter< double const >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< bool const >::type gaussian_method(gaussian_methodSEXP);
    Rcpp::traits::input_parameter< double const >::type density(densitySEXP);
    Rcpp::traits::input_parameter< int const >::type random_state(random_stateSEXP);
    rcpp_result_gen = Rcpp::wrap(rproj_fit(n_samples, n_features, n_components, eps, gaussian_method, density, random_state));
    return rcpp_result_gen;
END_RCPP
}
// rproj_transform
Rcpp::NumericMatrix rproj_transform(SEXP rproj_ctx_xptr, Rcpp::NumericMatrix const& input);
RcppExport SEXP _cuml_rproj_transform(SEXP rproj_ctx_xptrSEXP, SEXP inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rproj_ctx_xptr(rproj_ctx_xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    rcpp_result_gen = Rcpp::wrap(rproj_transform(rproj_ctx_xptr, input));
    return rcpp_result_gen;
END_RCPP
}
// svc_fit
SEXP svc_fit(Rcpp::NumericMatrix const& input, Rcpp::NumericVector const& labels, double const cost, int const kernel, double const gamma, double const coef0, int const degree, double const tol, int const max_iter, int const nochange_steps, double const cache_size, Rcpp::NumericVector const& sample_weights, int const verbosity);
RcppExport SEXP _cuml_svc_fit(SEXP inputSEXP, SEXP labelsSEXP, SEXP costSEXP, SEXP kernelSEXP, SEXP gammaSEXP, SEXP coef0SEXP, SEXP degreeSEXP, SEXP tolSEXP, SEXP max_iterSEXP, SEXP nochange_stepsSEXP, SEXP cache_sizeSEXP, SEXP sample_weightsSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type labels(labelsSEXP);
    Rcpp::traits::input_parameter< double const >::type cost(costSEXP);
    Rcpp::traits::input_parameter< int const >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< double const >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double const >::type coef0(coef0SEXP);
    Rcpp::traits::input_parameter< int const >::type degree(degreeSEXP);
    Rcpp::traits::input_parameter< double const >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int const >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int const >::type nochange_steps(nochange_stepsSEXP);
    Rcpp::traits::input_parameter< double const >::type cache_size(cache_sizeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type sample_weights(sample_weightsSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(svc_fit(input, labels, cost, kernel, gamma, coef0, degree, tol, max_iter, nochange_steps, cache_size, sample_weights, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// svc_predict
SEXP svc_predict(SEXP model_xptr, Rcpp::NumericMatrix const& input, bool predict_class);
RcppExport SEXP _cuml_svc_predict(SEXP model_xptrSEXP, SEXP inputSEXP, SEXP predict_classSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type model_xptr(model_xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type input(inputSEXP);
    Rcpp::traits::input_parameter< bool >::type predict_class(predict_classSEXP);
    rcpp_result_gen = Rcpp::wrap(svc_predict(model_xptr, input, predict_class));
    return rcpp_result_gen;
END_RCPP
}
// svr_fit
SEXP svr_fit(Rcpp::NumericMatrix const& X, Rcpp::NumericVector const& y, double const cost, int const kernel, double const gamma, double const coef0, int const degree, double const tol, int const max_iter, int const nochange_steps, double const cache_size, double epsilon, Rcpp::NumericVector const& sample_weights, int const verbosity);
RcppExport SEXP _cuml_svr_fit(SEXP XSEXP, SEXP ySEXP, SEXP costSEXP, SEXP kernelSEXP, SEXP gammaSEXP, SEXP coef0SEXP, SEXP degreeSEXP, SEXP tolSEXP, SEXP max_iterSEXP, SEXP nochange_stepsSEXP, SEXP cache_sizeSEXP, SEXP epsilonSEXP, SEXP sample_weightsSEXP, SEXP verbositySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< double const >::type cost(costSEXP);
    Rcpp::traits::input_parameter< int const >::type kernel(kernelSEXP);
    Rcpp::traits::input_parameter< double const >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double const >::type coef0(coef0SEXP);
    Rcpp::traits::input_parameter< int const >::type degree(degreeSEXP);
    Rcpp::traits::input_parameter< double const >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int const >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< int const >::type nochange_steps(nochange_stepsSEXP);
    Rcpp::traits::input_parameter< double const >::type cache_size(cache_sizeSEXP);
    Rcpp::traits::input_parameter< double >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type sample_weights(sample_weightsSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    rcpp_result_gen = Rcpp::wrap(svr_fit(X, y, cost, kernel, gamma, coef0, degree, tol, max_iter, nochange_steps, cache_size, epsilon, sample_weights, verbosity));
    return rcpp_result_gen;
END_RCPP
}
// svr_predict
Rcpp::NumericVector svr_predict(SEXP svr_xptr, Rcpp::NumericMatrix const& X);
RcppExport SEXP _cuml_svr_predict(SEXP svr_xptrSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type svr_xptr(svr_xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(svr_predict(svr_xptr, X));
    return rcpp_result_gen;
END_RCPP
}
// tsne_fit
Rcpp::NumericMatrix tsne_fit(Rcpp::NumericMatrix const& x, int const dim, int const n_neighbors, float const theta, float const epssq, float const perplexity, int const perplexity_max_iter, float const perplexity_tol, float const early_exaggeration, float const late_exaggeration, int const exaggeration_iter, float const min_gain, float const pre_learning_rate, float const post_learning_rate, int const max_iter, float const min_grad_norm, float const pre_momentum, float const post_momentum, int64_t const random_state, int const verbosity, bool const initialize_embeddings, bool const square_distances, int const algo);
RcppExport SEXP _cuml_tsne_fit(SEXP xSEXP, SEXP dimSEXP, SEXP n_neighborsSEXP, SEXP thetaSEXP, SEXP epssqSEXP, SEXP perplexitySEXP, SEXP perplexity_max_iterSEXP, SEXP perplexity_tolSEXP, SEXP early_exaggerationSEXP, SEXP late_exaggerationSEXP, SEXP exaggeration_iterSEXP, SEXP min_gainSEXP, SEXP pre_learning_rateSEXP, SEXP post_learning_rateSEXP, SEXP max_iterSEXP, SEXP min_grad_normSEXP, SEXP pre_momentumSEXP, SEXP post_momentumSEXP, SEXP random_stateSEXP, SEXP verbositySEXP, SEXP initialize_embeddingsSEXP, SEXP square_distancesSEXP, SEXP algoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int const >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< int const >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< float const >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< float const >::type epssq(epssqSEXP);
    Rcpp::traits::input_parameter< float const >::type perplexity(perplexitySEXP);
    Rcpp::traits::input_parameter< int const >::type perplexity_max_iter(perplexity_max_iterSEXP);
    Rcpp::traits::input_parameter< float const >::type perplexity_tol(perplexity_tolSEXP);
    Rcpp::traits::input_parameter< float const >::type early_exaggeration(early_exaggerationSEXP);
    Rcpp::traits::input_parameter< float const >::type late_exaggeration(late_exaggerationSEXP);
    Rcpp::traits::input_parameter< int const >::type exaggeration_iter(exaggeration_iterSEXP);
    Rcpp::traits::input_parameter< float const >::type min_gain(min_gainSEXP);
    Rcpp::traits::input_parameter< float const >::type pre_learning_rate(pre_learning_rateSEXP);
    Rcpp::traits::input_parameter< float const >::type post_learning_rate(post_learning_rateSEXP);
    Rcpp::traits::input_parameter< int const >::type max_iter(max_iterSEXP);
    Rcpp::traits::input_parameter< float const >::type min_grad_norm(min_grad_normSEXP);
    Rcpp::traits::input_parameter< float const >::type pre_momentum(pre_momentumSEXP);
    Rcpp::traits::input_parameter< float const >::type post_momentum(post_momentumSEXP);
    Rcpp::traits::input_parameter< int64_t const >::type random_state(random_stateSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    Rcpp::traits::input_parameter< bool const >::type initialize_embeddings(initialize_embeddingsSEXP);
    Rcpp::traits::input_parameter< bool const >::type square_distances(square_distancesSEXP);
    Rcpp::traits::input_parameter< int const >::type algo(algoSEXP);
    rcpp_result_gen = Rcpp::wrap(tsne_fit(x, dim, n_neighbors, theta, epssq, perplexity, perplexity_max_iter, perplexity_tol, early_exaggeration, late_exaggeration, exaggeration_iter, min_gain, pre_learning_rate, post_learning_rate, max_iter, min_grad_norm, pre_momentum, post_momentum, random_state, verbosity, initialize_embeddings, square_distances, algo));
    return rcpp_result_gen;
END_RCPP
}
// tsvd_fit_transform
Rcpp::List tsvd_fit_transform(Rcpp::NumericMatrix const& x, double const tol, int const n_iters, int const verbosity, int const n_components, int const algo, bool const transform_input);
RcppExport SEXP _cuml_tsvd_fit_transform(SEXP xSEXP, SEXP tolSEXP, SEXP n_itersSEXP, SEXP verbositySEXP, SEXP n_componentsSEXP, SEXP algoSEXP, SEXP transform_inputSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< double const >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< int const >::type n_iters(n_itersSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    Rcpp::traits::input_parameter< int const >::type n_components(n_componentsSEXP);
    Rcpp::traits::input_parameter< int const >::type algo(algoSEXP);
    Rcpp::traits::input_parameter< bool const >::type transform_input(transform_inputSEXP);
    rcpp_result_gen = Rcpp::wrap(tsvd_fit_transform(x, tol, n_iters, verbosity, n_components, algo, transform_input));
    return rcpp_result_gen;
END_RCPP
}
// tsvd_inverse_transform
Rcpp::NumericMatrix tsvd_inverse_transform(Rcpp::List model, Rcpp::NumericMatrix const& x);
RcppExport SEXP _cuml_tsvd_inverse_transform(SEXP modelSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(tsvd_inverse_transform(model, x));
    return rcpp_result_gen;
END_RCPP
}
// umap_fit
Rcpp::List umap_fit(Rcpp::NumericMatrix const& x, Rcpp::NumericVector const& y, int const n_neighbors, int const n_components, int const n_epochs, float const learning_rate, float const min_dist, float const spread, float const set_op_mix_ratio, int const local_connectivity, float const repulsion_strength, int const negative_sample_rate, float const transform_queue_size, int const verbosity, float const a, float const b, int const init, int const target_n_neighbors, int const target_metric, float const target_weight, uint64_t const random_state, bool const deterministic);
RcppExport SEXP _cuml_umap_fit(SEXP xSEXP, SEXP ySEXP, SEXP n_neighborsSEXP, SEXP n_componentsSEXP, SEXP n_epochsSEXP, SEXP learning_rateSEXP, SEXP min_distSEXP, SEXP spreadSEXP, SEXP set_op_mix_ratioSEXP, SEXP local_connectivitySEXP, SEXP repulsion_strengthSEXP, SEXP negative_sample_rateSEXP, SEXP transform_queue_sizeSEXP, SEXP verbositySEXP, SEXP aSEXP, SEXP bSEXP, SEXP initSEXP, SEXP target_n_neighborsSEXP, SEXP target_metricSEXP, SEXP target_weightSEXP, SEXP random_stateSEXP, SEXP deterministicSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int const >::type n_neighbors(n_neighborsSEXP);
    Rcpp::traits::input_parameter< int const >::type n_components(n_componentsSEXP);
    Rcpp::traits::input_parameter< int const >::type n_epochs(n_epochsSEXP);
    Rcpp::traits::input_parameter< float const >::type learning_rate(learning_rateSEXP);
    Rcpp::traits::input_parameter< float const >::type min_dist(min_distSEXP);
    Rcpp::traits::input_parameter< float const >::type spread(spreadSEXP);
    Rcpp::traits::input_parameter< float const >::type set_op_mix_ratio(set_op_mix_ratioSEXP);
    Rcpp::traits::input_parameter< int const >::type local_connectivity(local_connectivitySEXP);
    Rcpp::traits::input_parameter< float const >::type repulsion_strength(repulsion_strengthSEXP);
    Rcpp::traits::input_parameter< int const >::type negative_sample_rate(negative_sample_rateSEXP);
    Rcpp::traits::input_parameter< float const >::type transform_queue_size(transform_queue_sizeSEXP);
    Rcpp::traits::input_parameter< int const >::type verbosity(verbositySEXP);
    Rcpp::traits::input_parameter< float const >::type a(aSEXP);
    Rcpp::traits::input_parameter< float const >::type b(bSEXP);
    Rcpp::traits::input_parameter< int const >::type init(initSEXP);
    Rcpp::traits::input_parameter< int const >::type target_n_neighbors(target_n_neighborsSEXP);
    Rcpp::traits::input_parameter< int const >::type target_metric(target_metricSEXP);
    Rcpp::traits::input_parameter< float const >::type target_weight(target_weightSEXP);
    Rcpp::traits::input_parameter< uint64_t const >::type random_state(random_stateSEXP);
    Rcpp::traits::input_parameter< bool const >::type deterministic(deterministicSEXP);
    rcpp_result_gen = Rcpp::wrap(umap_fit(x, y, n_neighbors, n_components, n_epochs, learning_rate, min_dist, spread, set_op_mix_ratio, local_connectivity, repulsion_strength, negative_sample_rate, transform_queue_size, verbosity, a, b, init, target_n_neighbors, target_metric, target_weight, random_state, deterministic));
    return rcpp_result_gen;
END_RCPP
}
// umap_transform
Rcpp::NumericMatrix umap_transform(Rcpp::List const& model, Rcpp::NumericMatrix const& x);
RcppExport SEXP _cuml_umap_transform(SEXP modelSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List const& >::type model(modelSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix const& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(umap_transform(model, x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cuml_agglomerative_clustering", (DL_FUNC) &_cuml_agglomerative_clustering, 5},
    {"_cuml_has_libcuml", (DL_FUNC) &_cuml_has_libcuml, 0},
    {"_cuml_dbscan", (DL_FUNC) &_cuml_dbscan, 5},
    {"_cuml_fil_enabled", (DL_FUNC) &_cuml_fil_enabled, 0},
    {"_cuml_fil_load_model", (DL_FUNC) &_cuml_fil_load_model, 9},
    {"_cuml_fil_predict", (DL_FUNC) &_cuml_fil_predict, 3},
    {"_cuml_kmeans", (DL_FUNC) &_cuml_kmeans, 8},
    {"_cuml_pca_fit_transform", (DL_FUNC) &_cuml_pca_fit_transform, 8},
    {"_cuml_pca_inverse_transform", (DL_FUNC) &_cuml_pca_inverse_transform, 2},
    {"_cuml_rf_classifier_fit", (DL_FUNC) &_cuml_rf_classifier_fit, 16},
    {"_cuml_rf_classifier_predict", (DL_FUNC) &_cuml_rf_classifier_predict, 3},
    {"_cuml_rf_regressor_fit", (DL_FUNC) &_cuml_rf_regressor_fit, 16},
    {"_cuml_rf_regressor_predict", (DL_FUNC) &_cuml_rf_regressor_predict, 3},
    {"_cuml_rproj_johnson_lindenstrauss_min_dim", (DL_FUNC) &_cuml_rproj_johnson_lindenstrauss_min_dim, 2},
    {"_cuml_rproj_fit", (DL_FUNC) &_cuml_rproj_fit, 7},
    {"_cuml_rproj_transform", (DL_FUNC) &_cuml_rproj_transform, 2},
    {"_cuml_svc_fit", (DL_FUNC) &_cuml_svc_fit, 13},
    {"_cuml_svc_predict", (DL_FUNC) &_cuml_svc_predict, 3},
    {"_cuml_svr_fit", (DL_FUNC) &_cuml_svr_fit, 14},
    {"_cuml_svr_predict", (DL_FUNC) &_cuml_svr_predict, 2},
    {"_cuml_tsne_fit", (DL_FUNC) &_cuml_tsne_fit, 23},
    {"_cuml_tsvd_fit_transform", (DL_FUNC) &_cuml_tsvd_fit_transform, 7},
    {"_cuml_tsvd_inverse_transform", (DL_FUNC) &_cuml_tsvd_inverse_transform, 2},
    {"_cuml_umap_fit", (DL_FUNC) &_cuml_umap_fit, 22},
    {"_cuml_umap_transform", (DL_FUNC) &_cuml_umap_transform, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_cuml(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
