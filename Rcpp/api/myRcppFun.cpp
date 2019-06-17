//
// Created by Haoda Fu on 2019-06-16.
//

#include <Rcpp.h>
#include "MyClass.h"
extern "C" SEXP myFun(SEXP xa,SEXP xb) {
  int a = Rcpp::as<int>(xa);
  int b = Rcpp::as<int>(xb);
  Haoda abc(a,b);
  int sum = abc.getSum();
  return (Rcpp::wrap(sum));
}

