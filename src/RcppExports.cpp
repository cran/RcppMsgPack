// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// arrayEx
bool arrayEx();
RcppExport SEXP RcppMsgPack_arrayEx() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayEx());
    return rcpp_result_gen;
END_RCPP
}
// enumEx
bool enumEx();
RcppExport SEXP RcppMsgPack_enumEx() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(enumEx());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"RcppMsgPack_arrayEx", (DL_FUNC) &RcppMsgPack_arrayEx, 0},
    {"RcppMsgPack_enumEx", (DL_FUNC) &RcppMsgPack_enumEx, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppMsgPack(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}