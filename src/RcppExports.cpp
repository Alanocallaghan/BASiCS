// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// HiddenBASiCS_MCMCcpp
Rcpp::List HiddenBASiCS_MCMCcpp(int N, int Thin, int Burn, NumericMatrix Counts, NumericMatrix BatchDesign, NumericVector muSpikes, NumericVector mu0, NumericVector delta0, NumericVector phi0, NumericVector s0, NumericVector nu0, NumericVector theta0, double s2mu, double adelta, double bdelta, double s2delta, double prior_delta, NumericVector aphi, double as, double bs, double atheta, double btheta, double ar, NumericVector LSmu0, NumericVector LSdelta0, double LSphi0, NumericVector LSnu0, NumericVector LStheta0, NumericVector sumByCellAll, NumericVector sumByCellBio, NumericVector sumByGeneAll, NumericVector sumByGeneBio, int StoreAdapt, int EndAdapt, int PrintProgress);
RcppExport SEXP _BASiCS_HiddenBASiCS_MCMCcpp(SEXP NSEXP, SEXP ThinSEXP, SEXP BurnSEXP, SEXP CountsSEXP, SEXP BatchDesignSEXP, SEXP muSpikesSEXP, SEXP mu0SEXP, SEXP delta0SEXP, SEXP phi0SEXP, SEXP s0SEXP, SEXP nu0SEXP, SEXP theta0SEXP, SEXP s2muSEXP, SEXP adeltaSEXP, SEXP bdeltaSEXP, SEXP s2deltaSEXP, SEXP prior_deltaSEXP, SEXP aphiSEXP, SEXP asSEXP, SEXP bsSEXP, SEXP athetaSEXP, SEXP bthetaSEXP, SEXP arSEXP, SEXP LSmu0SEXP, SEXP LSdelta0SEXP, SEXP LSphi0SEXP, SEXP LSnu0SEXP, SEXP LStheta0SEXP, SEXP sumByCellAllSEXP, SEXP sumByCellBioSEXP, SEXP sumByGeneAllSEXP, SEXP sumByGeneBioSEXP, SEXP StoreAdaptSEXP, SEXP EndAdaptSEXP, SEXP PrintProgressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type Thin(ThinSEXP);
    Rcpp::traits::input_parameter< int >::type Burn(BurnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Counts(CountsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type BatchDesign(BatchDesignSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type muSpikes(muSpikesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta0(delta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s0(s0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu0(nu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type s2mu(s2muSEXP);
    Rcpp::traits::input_parameter< double >::type adelta(adeltaSEXP);
    Rcpp::traits::input_parameter< double >::type bdelta(bdeltaSEXP);
    Rcpp::traits::input_parameter< double >::type s2delta(s2deltaSEXP);
    Rcpp::traits::input_parameter< double >::type prior_delta(prior_deltaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aphi(aphiSEXP);
    Rcpp::traits::input_parameter< double >::type as(asSEXP);
    Rcpp::traits::input_parameter< double >::type bs(bsSEXP);
    Rcpp::traits::input_parameter< double >::type atheta(athetaSEXP);
    Rcpp::traits::input_parameter< double >::type btheta(bthetaSEXP);
    Rcpp::traits::input_parameter< double >::type ar(arSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSmu0(LSmu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSdelta0(LSdelta0SEXP);
    Rcpp::traits::input_parameter< double >::type LSphi0(LSphi0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSnu0(LSnu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LStheta0(LStheta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByCellAll(sumByCellAllSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByCellBio(sumByCellBioSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByGeneAll(sumByGeneAllSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByGeneBio(sumByGeneBioSEXP);
    Rcpp::traits::input_parameter< int >::type StoreAdapt(StoreAdaptSEXP);
    Rcpp::traits::input_parameter< int >::type EndAdapt(EndAdaptSEXP);
    Rcpp::traits::input_parameter< int >::type PrintProgress(PrintProgressSEXP);
    rcpp_result_gen = Rcpp::wrap(HiddenBASiCS_MCMCcpp(N, Thin, Burn, Counts, BatchDesign, muSpikes, mu0, delta0, phi0, s0, nu0, theta0, s2mu, adelta, bdelta, s2delta, prior_delta, aphi, as, bs, atheta, btheta, ar, LSmu0, LSdelta0, LSphi0, LSnu0, LStheta0, sumByCellAll, sumByCellBio, sumByGeneAll, sumByGeneBio, StoreAdapt, EndAdapt, PrintProgress));
    return rcpp_result_gen;
END_RCPP
}
// HiddenBASiCS_MCMCcppReg
Rcpp::List HiddenBASiCS_MCMCcppReg(int N, int Thin, int Burn, NumericMatrix Counts, NumericMatrix BatchDesign, NumericVector muSpikes, NumericVector mu0, NumericVector delta0, NumericVector phi0, NumericVector s0, NumericVector nu0, NumericVector theta0, double s2mu, NumericVector aphi, double as, double bs, double atheta, double btheta, double ar, NumericVector LSmu0, NumericVector LSdelta0, double LSphi0, NumericVector LSnu0, NumericVector LStheta0, NumericVector sumByCellAll, NumericVector sumByCellBio, NumericVector sumByGeneAll, NumericVector sumByGeneBio, int StoreAdapt, int EndAdapt, int PrintProgress, int k, NumericVector m0, NumericMatrix V0, double sigma2_a0, double sigma2_b0, NumericVector beta0, double sigma20, double eta0, NumericVector lambda0, double const& variance);
RcppExport SEXP _BASiCS_HiddenBASiCS_MCMCcppReg(SEXP NSEXP, SEXP ThinSEXP, SEXP BurnSEXP, SEXP CountsSEXP, SEXP BatchDesignSEXP, SEXP muSpikesSEXP, SEXP mu0SEXP, SEXP delta0SEXP, SEXP phi0SEXP, SEXP s0SEXP, SEXP nu0SEXP, SEXP theta0SEXP, SEXP s2muSEXP, SEXP aphiSEXP, SEXP asSEXP, SEXP bsSEXP, SEXP athetaSEXP, SEXP bthetaSEXP, SEXP arSEXP, SEXP LSmu0SEXP, SEXP LSdelta0SEXP, SEXP LSphi0SEXP, SEXP LSnu0SEXP, SEXP LStheta0SEXP, SEXP sumByCellAllSEXP, SEXP sumByCellBioSEXP, SEXP sumByGeneAllSEXP, SEXP sumByGeneBioSEXP, SEXP StoreAdaptSEXP, SEXP EndAdaptSEXP, SEXP PrintProgressSEXP, SEXP kSEXP, SEXP m0SEXP, SEXP V0SEXP, SEXP sigma2_a0SEXP, SEXP sigma2_b0SEXP, SEXP beta0SEXP, SEXP sigma20SEXP, SEXP eta0SEXP, SEXP lambda0SEXP, SEXP varianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type Thin(ThinSEXP);
    Rcpp::traits::input_parameter< int >::type Burn(BurnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Counts(CountsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type BatchDesign(BatchDesignSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type muSpikes(muSpikesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta0(delta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s0(s0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu0(nu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type s2mu(s2muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type aphi(aphiSEXP);
    Rcpp::traits::input_parameter< double >::type as(asSEXP);
    Rcpp::traits::input_parameter< double >::type bs(bsSEXP);
    Rcpp::traits::input_parameter< double >::type atheta(athetaSEXP);
    Rcpp::traits::input_parameter< double >::type btheta(bthetaSEXP);
    Rcpp::traits::input_parameter< double >::type ar(arSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSmu0(LSmu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSdelta0(LSdelta0SEXP);
    Rcpp::traits::input_parameter< double >::type LSphi0(LSphi0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSnu0(LSnu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LStheta0(LStheta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByCellAll(sumByCellAllSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByCellBio(sumByCellBioSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByGeneAll(sumByGeneAllSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByGeneBio(sumByGeneBioSEXP);
    Rcpp::traits::input_parameter< int >::type StoreAdapt(StoreAdaptSEXP);
    Rcpp::traits::input_parameter< int >::type EndAdapt(EndAdaptSEXP);
    Rcpp::traits::input_parameter< int >::type PrintProgress(PrintProgressSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m0(m0SEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type V0(V0SEXP);
    Rcpp::traits::input_parameter< double >::type sigma2_a0(sigma2_a0SEXP);
    Rcpp::traits::input_parameter< double >::type sigma2_b0(sigma2_b0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta0(beta0SEXP);
    Rcpp::traits::input_parameter< double >::type sigma20(sigma20SEXP);
    Rcpp::traits::input_parameter< double >::type eta0(eta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lambda0(lambda0SEXP);
    Rcpp::traits::input_parameter< double const& >::type variance(varianceSEXP);
    rcpp_result_gen = Rcpp::wrap(HiddenBASiCS_MCMCcppReg(N, Thin, Burn, Counts, BatchDesign, muSpikes, mu0, delta0, phi0, s0, nu0, theta0, s2mu, aphi, as, bs, atheta, btheta, ar, LSmu0, LSdelta0, LSphi0, LSnu0, LStheta0, sumByCellAll, sumByCellBio, sumByGeneAll, sumByGeneBio, StoreAdapt, EndAdapt, PrintProgress, k, m0, V0, sigma2_a0, sigma2_b0, beta0, sigma20, eta0, lambda0, variance));
    return rcpp_result_gen;
END_RCPP
}
// HiddenBASiCS_MCMCcppNoSpikes
Rcpp::List HiddenBASiCS_MCMCcppNoSpikes(int N, int Thin, int Burn, NumericMatrix Counts, NumericMatrix BatchDesign, NumericVector mu0, NumericVector delta0, NumericVector phi0, NumericVector nu0, NumericVector theta0, double s2mu, double adelta, double bdelta, double s2delta, double prior_delta, double aphi, double bphi, double atheta, double btheta, double ar, NumericVector LSmu0, NumericVector LSdelta0, NumericVector LSnu0, NumericVector LStheta0, NumericVector sumByCellAll, NumericVector sumByGeneAll, int StoreAdapt, int EndAdapt, int PrintProgress, double Constrain, NumericVector Index, int RefGene, NumericVector RefGenes, NumericVector ConstrainGene, NumericVector NotConstrainGene, int ConstrainType, int StochasticRef);
RcppExport SEXP _BASiCS_HiddenBASiCS_MCMCcppNoSpikes(SEXP NSEXP, SEXP ThinSEXP, SEXP BurnSEXP, SEXP CountsSEXP, SEXP BatchDesignSEXP, SEXP mu0SEXP, SEXP delta0SEXP, SEXP phi0SEXP, SEXP nu0SEXP, SEXP theta0SEXP, SEXP s2muSEXP, SEXP adeltaSEXP, SEXP bdeltaSEXP, SEXP s2deltaSEXP, SEXP prior_deltaSEXP, SEXP aphiSEXP, SEXP bphiSEXP, SEXP athetaSEXP, SEXP bthetaSEXP, SEXP arSEXP, SEXP LSmu0SEXP, SEXP LSdelta0SEXP, SEXP LSnu0SEXP, SEXP LStheta0SEXP, SEXP sumByCellAllSEXP, SEXP sumByGeneAllSEXP, SEXP StoreAdaptSEXP, SEXP EndAdaptSEXP, SEXP PrintProgressSEXP, SEXP ConstrainSEXP, SEXP IndexSEXP, SEXP RefGeneSEXP, SEXP RefGenesSEXP, SEXP ConstrainGeneSEXP, SEXP NotConstrainGeneSEXP, SEXP ConstrainTypeSEXP, SEXP StochasticRefSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type Thin(ThinSEXP);
    Rcpp::traits::input_parameter< int >::type Burn(BurnSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Counts(CountsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type BatchDesign(BatchDesignSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type delta0(delta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type phi0(phi0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nu0(nu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta0(theta0SEXP);
    Rcpp::traits::input_parameter< double >::type s2mu(s2muSEXP);
    Rcpp::traits::input_parameter< double >::type adelta(adeltaSEXP);
    Rcpp::traits::input_parameter< double >::type bdelta(bdeltaSEXP);
    Rcpp::traits::input_parameter< double >::type s2delta(s2deltaSEXP);
    Rcpp::traits::input_parameter< double >::type prior_delta(prior_deltaSEXP);
    Rcpp::traits::input_parameter< double >::type aphi(aphiSEXP);
    Rcpp::traits::input_parameter< double >::type bphi(bphiSEXP);
    Rcpp::traits::input_parameter< double >::type atheta(athetaSEXP);
    Rcpp::traits::input_parameter< double >::type btheta(bthetaSEXP);
    Rcpp::traits::input_parameter< double >::type ar(arSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSmu0(LSmu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSdelta0(LSdelta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LSnu0(LSnu0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LStheta0(LStheta0SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByCellAll(sumByCellAllSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sumByGeneAll(sumByGeneAllSEXP);
    Rcpp::traits::input_parameter< int >::type StoreAdapt(StoreAdaptSEXP);
    Rcpp::traits::input_parameter< int >::type EndAdapt(EndAdaptSEXP);
    Rcpp::traits::input_parameter< int >::type PrintProgress(PrintProgressSEXP);
    Rcpp::traits::input_parameter< double >::type Constrain(ConstrainSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Index(IndexSEXP);
    Rcpp::traits::input_parameter< int >::type RefGene(RefGeneSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type RefGenes(RefGenesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ConstrainGene(ConstrainGeneSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type NotConstrainGene(NotConstrainGeneSEXP);
    Rcpp::traits::input_parameter< int >::type ConstrainType(ConstrainTypeSEXP);
    Rcpp::traits::input_parameter< int >::type StochasticRef(StochasticRefSEXP);
    rcpp_result_gen = Rcpp::wrap(HiddenBASiCS_MCMCcppNoSpikes(N, Thin, Burn, Counts, BatchDesign, mu0, delta0, phi0, nu0, theta0, s2mu, adelta, bdelta, s2delta, prior_delta, aphi, bphi, atheta, btheta, ar, LSmu0, LSdelta0, LSnu0, LStheta0, sumByCellAll, sumByGeneAll, StoreAdapt, EndAdapt, PrintProgress, Constrain, Index, RefGene, RefGenes, ConstrainGene, NotConstrainGene, ConstrainType, StochasticRef));
    return rcpp_result_gen;
END_RCPP
}
// HiddenBASiCS_DenoisedRates
arma::mat HiddenBASiCS_DenoisedRates(NumericMatrix CountsBio, NumericMatrix Mu, NumericMatrix TransInvDelta, NumericMatrix PhiNu, int N, int q0, int n);
RcppExport SEXP _BASiCS_HiddenBASiCS_DenoisedRates(SEXP CountsBioSEXP, SEXP MuSEXP, SEXP TransInvDeltaSEXP, SEXP PhiNuSEXP, SEXP NSEXP, SEXP q0SEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type CountsBio(CountsBioSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Mu(MuSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type TransInvDelta(TransInvDeltaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type PhiNu(PhiNuSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type q0(q0SEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(HiddenBASiCS_DenoisedRates(CountsBio, Mu, TransInvDelta, PhiNu, N, q0, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BASiCS_HiddenBASiCS_MCMCcpp", (DL_FUNC) &_BASiCS_HiddenBASiCS_MCMCcpp, 35},
    {"_BASiCS_HiddenBASiCS_MCMCcppReg", (DL_FUNC) &_BASiCS_HiddenBASiCS_MCMCcppReg, 41},
    {"_BASiCS_HiddenBASiCS_MCMCcppNoSpikes", (DL_FUNC) &_BASiCS_HiddenBASiCS_MCMCcppNoSpikes, 37},
    {"_BASiCS_HiddenBASiCS_DenoisedRates", (DL_FUNC) &_BASiCS_HiddenBASiCS_DenoisedRates, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_BASiCS(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
