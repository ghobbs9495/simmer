// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// add_timeout_event_
void add_timeout_event_(SEXP ent, SEXP duration_);
RcppExport SEXP simmer_add_timeout_event_(SEXP entSEXP, SEXP duration_SEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type ent(entSEXP );
        Rcpp::traits::input_parameter< SEXP >::type duration_(duration_SEXP );
        add_timeout_event_(ent, duration_);
    }
    return R_NilValue;
END_RCPP
}
// add_seize_event_
void add_seize_event_(SEXP ent, SEXP res_name_, SEXP amount_);
RcppExport SEXP simmer_add_seize_event_(SEXP entSEXP, SEXP res_name_SEXP, SEXP amount_SEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type ent(entSEXP );
        Rcpp::traits::input_parameter< SEXP >::type res_name_(res_name_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP );
        add_seize_event_(ent, res_name_, amount_);
    }
    return R_NilValue;
END_RCPP
}
// add_skip_event_
void add_skip_event_(SEXP ent, SEXP number_);
RcppExport SEXP simmer_add_skip_event_(SEXP entSEXP, SEXP number_SEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type ent(entSEXP );
        Rcpp::traits::input_parameter< SEXP >::type number_(number_SEXP );
        add_skip_event_(ent, number_);
    }
    return R_NilValue;
END_RCPP
}
// add_release_event_
void add_release_event_(SEXP ent, SEXP res_name_, SEXP amount_);
RcppExport SEXP simmer_add_release_event_(SEXP entSEXP, SEXP res_name_SEXP, SEXP amount_SEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type ent(entSEXP );
        Rcpp::traits::input_parameter< SEXP >::type res_name_(res_name_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type amount_(amount_SEXP );
        add_release_event_(ent, res_name_, amount_);
    }
    return R_NilValue;
END_RCPP
}
// add_entity_
void add_entity_(SEXP sim, SEXP ent);
RcppExport SEXP simmer_add_entity_(SEXP simSEXP, SEXP entSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        Rcpp::traits::input_parameter< SEXP >::type ent(entSEXP );
        add_entity_(sim, ent);
    }
    return R_NilValue;
END_RCPP
}
// add_resource_
void add_resource_(SEXP sim, SEXP name_, SEXP capacity_, SEXP queue_size_);
RcppExport SEXP simmer_add_resource_(SEXP simSEXP, SEXP name_SEXP, SEXP capacity_SEXP, SEXP queue_size_SEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type capacity_(capacity_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type queue_size_(queue_size_SEXP );
        add_resource_(sim, name_, capacity_, queue_size_);
    }
    return R_NilValue;
END_RCPP
}
// get_resource_capacity_
int get_resource_capacity_(SEXP sim, SEXP name_);
RcppExport SEXP simmer_get_resource_capacity_(SEXP simSEXP, SEXP name_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP );
        int __result = get_resource_capacity_(sim, name_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_resource_queue_size_
int get_resource_queue_size_(SEXP sim, SEXP name_);
RcppExport SEXP simmer_get_resource_queue_size_(SEXP simSEXP, SEXP name_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP );
        int __result = get_resource_queue_size_(sim, name_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_entity_monitor_values_
SEXP get_entity_monitor_values_(SEXP sim);
RcppExport SEXP simmer_get_entity_monitor_values_(SEXP simSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        SEXP __result = get_entity_monitor_values_(sim);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_resource_serve_mon_values_
SEXP get_resource_serve_mon_values_(SEXP sim, SEXP resource_name_);
RcppExport SEXP simmer_get_resource_serve_mon_values_(SEXP simSEXP, SEXP resource_name_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        Rcpp::traits::input_parameter< SEXP >::type resource_name_(resource_name_SEXP );
        SEXP __result = get_resource_serve_mon_values_(sim, resource_name_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// get_resource_queue_mon_values_
SEXP get_resource_queue_mon_values_(SEXP sim, SEXP resource_name_);
RcppExport SEXP simmer_get_resource_queue_mon_values_(SEXP simSEXP, SEXP resource_name_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        Rcpp::traits::input_parameter< SEXP >::type resource_name_(resource_name_SEXP );
        SEXP __result = get_resource_queue_mon_values_(sim, resource_name_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// run_
void run_(SEXP sim);
RcppExport SEXP simmer_run_(SEXP simSEXP) {
BEGIN_RCPP
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        run_(sim);
    }
    return R_NilValue;
END_RCPP
}
// Simulator__new
SEXP Simulator__new(SEXP name_, SEXP until_, SEXP verbose_);
RcppExport SEXP simmer_Simulator__new(SEXP name_SEXP, SEXP until_SEXP, SEXP verbose_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type until_(until_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type verbose_(verbose_SEXP );
        SEXP __result = Simulator__new(name_, until_, verbose_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// now_
int now_(SEXP sim);
RcppExport SEXP simmer_now_(SEXP simSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type sim(simSEXP );
        int __result = now_(sim);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// Entity__new
SEXP Entity__new(SEXP name_, SEXP activation_time_);
RcppExport SEXP simmer_Entity__new(SEXP name_SEXP, SEXP activation_time_SEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type name_(name_SEXP );
        Rcpp::traits::input_parameter< SEXP >::type activation_time_(activation_time_SEXP );
        SEXP __result = Entity__new(name_, activation_time_);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
