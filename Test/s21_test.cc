#include <cmath>
#include <iostream>

#include "../Model/credit.h"
#include "../Model/error.h"
#include "../Model/model.h"
#include "gtest/gtest.h"

TEST(calculator, sum_1) {
  std::string start_string = "1+1";
  double result = 0;
  s21::Model m;
  m.Set(start_string, 3.14);
  result = m.Count(3.14);
  EXPECT_NEAR(result, 2, 0.0000001);
}

TEST(calculator, sum_2) {
  std::string start_string = "-1+2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);
  EXPECT_NEAR(result, 1, 0.0000001);
}

TEST(calculator, sum_3) {
  std::string start_string = "0+0";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.0, 0.0000001);
}

TEST(exceptions, sum_4) {
  std::string start_string = ".";
  std::string err = "";
  s21::Model m;
  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

TEST(exceptions, sum_5) {
  std::string start_string = "4(84+7)";
  std::string err = "";
  s21::Model m;
  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

//----------------------------------------------------------------------------------------------//

TEST(calculator, sub_1) {
  std::string start_string = "-1-----1";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -2, 0.0000001);
}

TEST(calculator, sub_2) {
  std::string start_string = "-1--1";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0, 0.0000001);
}

TEST(calculator, sub_3) {
  std::string start_string = "342-342";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.0, 0.0000001);
}

TEST(calculator, sub_4) {
  std::string start_string = "4394092-49348938493-823498--384398493840";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 335053125941, 0.0000001);
}

TEST(calculator, sub_5) {
  std::string start_string = "(838383-1232) -(299320930-1)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -298483778, 0.0000001);
}

//----------------------------------------------------------------------------------------------//

TEST(calculator, mul_1) {
  std::string start_string = "10*5";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 50.0, 0.0000001);
}

TEST(calculator, mul_2) {
  std::string start_string = "-0*459";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.0, 0.0000001);
}

TEST(calculator, mul_3) {
  std::string start_string = "0*1023/0";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_TRUE(std::isnan(result));
}

TEST(calculator, mul_4) {
  std::string start_string = "2*2*2*8";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 64.0, 0.0000001);
}

TEST(calculator, mul_5) {
  std::string start_string = "-7*7";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -49.0, 0.0000001);
}

//----------------------------------------------------------------------------------------------//

TEST(calculator, div_1) {
  std::string start_string = "10/2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 5.0, 0.0000001);
}

TEST(calculator, div_2) {
  std::string start_string = "0/3423432";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.0, 0.0000001);
}

TEST(calculator, div_3) {
  std::string start_string = "31.349304/2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 15.674652, 0.0000001);
}

TEST(calculator, div_4) {
  std::string start_string = "102.3/3/2/5/5";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.682, 0.0000001);
}

TEST(calculator, div_5) {
  std::string start_string = "-999/0";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_TRUE(result == (-999.0 / 0.0));
}

//----------------------------------------------------------------------------------------------//

TEST(calculator, power_1) {
  std::string start_string = "10^2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 100.0, 0.0000001);
}

TEST(calculator, power_2) {
  std::string start_string = "-12^2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -144, 0.0000001);
}

TEST(calculator, power_3) {
  std::string start_string = "(-12)^2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 144, 0.0000001);
}

TEST(calculator, power_4) {
  std::string start_string = "2^2^3";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 256, 0.0000001);
}

TEST(calculator, power_5) {
  std::string start_string = "-1^3";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -1.0, 0.0000001);
}

// TEST(calculator, power_6) {
//   std::string start_string = "ab(3)^2 + ab(2)^3";
//   std::string err = "";
//   double result = 0;
//   std::list<s21::Lexeme> postfix;
// std::list<s21::Lexeme> postfix = m.Count();
//   err = controller.PolishNotation(start_string, postfix, 3.14);
//   result = controller.Calculate(3.14, postfix);
//
//   EXPECT_NEAR(result, 17, 0.0000001);
// }

//----------------------------------------------------------------------------------------------//

TEST(calculator, cos_sin_1) {
  std::string start_string = "cos-100";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, cos(-100), 0.0000001);
}

TEST(calculator, cos_sin_2) {
  std::string start_string = "cos(1)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, cos(1), 0.0000001);
}

TEST(calculator, cos_sin_3) {
  std::string start_string = "cos-5";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, cos(-5), 0.0000001);
}

TEST(calculator, sine_1) {
  std::string start_string = "sin(63)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, sin(63), 0.0000001);
}

TEST(calculator, sqrt_1) {
  std::string start_string = "sqrt(9)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 3, 0.0000001);
}

TEST(calculator, log_1) {
  std::string start_string = "log(10)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, log10(10), 0.0000001);
}

TEST(calculator, ln_1) {
  std::string start_string = "ln(9)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, log(9), 0.0000001);
}

TEST(calculator, tan_1) {
  std::string start_string = "tan(9)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, tan(9), 0.0000001);
}

TEST(calculator, acos_1) {
  std::string start_string = "tan(1.5708)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, tan(1.5708), 0.0000001);
}

TEST(calculator, asin_1) {
  std::string start_string = "asin(0.5)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, asin(0.5), 0.0000001);
}

TEST(calculator, atan_1) {
  std::string start_string = "atan(0)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, atan(0), 0.0000001);
}

TEST(calculator, cos_sin_5) {
  std::string start_string = "cos1.232";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, cos(1.232), 0.0000001);
}

TEST(calculator, mix_1) {
  std::string start_string = "(1+2)*3+5*4";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 29.0, 0.0000001);
}

TEST(calculator, mix_2) {
  std::string start_string = "(((1+2)))*3";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 9.0, 0.0000001);
}

TEST(calculator, mix_3) {
  std::string start_string = "839*(23920+12-30-2)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 20052100, 0.0000001);
}

TEST(calculator, mix_4) {
  std::string start_string = "(((1*2)))-3";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -1.0, 0.0000001);
}

TEST(calculator, mix_5) {
  std::string start_string = "1+2+3*(0-1)+(-1)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -1.0, 0.0000001);
}

TEST(calculator, mix_6) {
  std::string start_string = "3+4*2/(1-5)^2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 3.5, 0.0000001);
}

TEST(calculator, mix_7) {
  std::string start_string = "2+3^(2*1+1)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 29.0, 0.0000001);
}

TEST(calculator, mix_8) {
  std::string start_string = "3+5*2/(6-4)^2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 5.5, 0.0000001);
}

TEST(calculator, mix_9) {
  std::string start_string = "3+4*2/(2+0)^(3^1)*100";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 103.0, 0.0000001);
}

TEST(calculator, mix_10) {
  std::string start_string = "11+(7^2)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 60.0, 0.0000001);
}

TEST(calculator, mix_11) {
  std::string start_string = "11+7^2";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 60.0, 0.0000001);
}

TEST(calculator, mix_12) {
  std::string start_string = "(0.432*54.2/4^2-(-8*4))*0.02";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.669268, 0.0000001);
}

TEST(calculator, empty) {
  std::string start_string = "";
  std::string err = "";
  s21::Model m;
  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

// -----------------------------------------------
TEST(calculator, mix_13) {
  std::string start_string = "11-(123124.0001+(42-32.327)-32)*423/432";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, -120526.054910, 0.000001);
}

TEST(calculator, mix_14) {
  std::string start_string = "32mod(32-30)";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);

  EXPECT_NEAR(result, 0.0, 0.0000001);
}

// //*_*_*_**_*_*_**_*_*_**_*_*_**_*_*_**_*_*_**_*_*_**_*_*_*

TEST(exceptions, mix_15) {
  std::string start_string = "(1+";
  std::string err = "";
  s21::Model m;
  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

TEST(exceptions, mix_16) {
  std::string start_string = "1*/+5";
  std::string err = "";
  s21::Model m;
  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

TEST(exceptions, mix_17) {
  std::string start_string = "sik()1";
  std::string err = "";
  s21::Model m;

  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

TEST(exceptions, mix_18) {
  std::string start_string = "4(84+1)";
  std::string err = "";
  s21::Model m;

  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

TEST(exceptions, mix_19) {
  std::string start_string = "1/0";
  std::string err = "";
  s21::Model m;
  double result = 0;
  m.Set(start_string, 3.14);
  result = m.Count(3.14);
  EXPECT_TRUE(std::isinf(result));
}

TEST(exceptions, mix_20) {
  std::string start_string = "sincossin";
  std::string err = "";
  s21::Model m;

  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

TEST(exceptions, mix_21) {
  std::string start_string = "0/0";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);
  result = m.Count(3.14);
  EXPECT_TRUE(std::isnan(result));
}

TEST(calculator, mix_22) {
  std::string start_string = "x+1434,23+1";
  std::string err = "";
  double result = 0;
  s21::Model m;

  m.Set(start_string, 3.14);

  result = m.Count(3.14);
  EXPECT_NEAR(result, 1438.37, 0.000001);
}

TEST(calculator, mix_23) {
  std::string start_string = "(+)";
  std::string err = "";
  s21::Model m;
  m.Set(start_string, 3.14);
  EXPECT_THROW(m.Count(), s21::Error);
}

//----------------------------------------------------------------------------------------------//

TEST(calculator, credit_annuity_1) {
  // size_t term = 10;
  // double sum = 10000;
  // double interest = 10;
  // s21::CreditController controller;
  // controller.CountAnnuity(sum, term, interest);
  // EXPECT_NEAR(controller.GetMonthlyPayment()[0], 1046.40, 0.1);
  // EXPECT_NEAR(controller.GetOverpayment(), 464.00, 0.1);
  // EXPECT_NEAR(controller.GetPsk(), 10464.00, 0.1);
}

TEST(calculator, credit_diff_1) {
  // size_t term = 10;
  // double sum = 10000;
  // double interest = 10;
  // s21::CreditController controller;
  // controller.CountDiffer(sum, term, interest);
  // EXPECT_NEAR(controller.GetMonthlyPayment()[0], 1083.33, 0.1);
  // EXPECT_NEAR(controller.GetOverpayment(), 458.33, 0.1);
  // EXPECT_NEAR(controller.GetPsk(), 10458.33, 0.1);
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}