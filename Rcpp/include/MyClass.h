//
// Created by Haoda Fu on 2019-06-16.
//

#ifndef MYRCPP_INCLUDE_MYCLASS_H_
#define MYRCPP_INCLUDE_MYCLASS_H_

class Haoda{
 public:
  Haoda (int a, int b):a_{a},b_{b}{};
  int getSum();
 private:
  int a_;
  int b_;
};

#endif //MYRCPP_INCLUDE_MYCLASS_H_
