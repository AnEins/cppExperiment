#include "gtest/gtest.h"
#include <cassert>
#include <iostream>
#include <vector>
using namespace std;
template <typename T> void print_vector(const std::vector<T> &v) {
  for (const auto &elem : v)
    cout << elem << " ";
  std::cout << "\n";
}
template <typename T>
void print_matirx(const std::vector<std::vector<T>> &mat) {
  for (const auto &row : mat) {
    print_vector(row);
  }
}
template <typename T>
std::vector<double> operator*(const std::vector<std::vector<T>> &matrix,
                              const std::vector<double> &vec) {
  auto N = vec.size();           // compatible (debug only)
  assert(matrix[0].size() == N); // Complain if sizes are not
  std::vector<double> res(N, 0.0);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      res[i] += matrix[i][j] * vec[j];
    }
  }
  return res;
}
bool test_matrix_vector_product();
TEST(add, zero) {
  std::vector<double> ref_vec = {1. / 3, 2.};
  std::vector<std::vector<double>> ref_mat = {{1., 2.}, {3., 4.}};
  std::vector<double> ref_ans = {13.2 / 3., 9.};
  std::vector<double> answer = ref_mat * ref_vec;
  EXPECT_EQ(ref_ans, answer);
}
int main() {
  std::vector<std::vector<double>> matrix = {
      {1., 0., 0.}, {0., 1., 0.}, {0., 0., 1.}};
  vector<double> v = {1, 2, 3};
  print_vector<double>(v);
  print_matirx<double>(matrix);
  std::vector<double> res = matrix * v;
  print_vector<double>(res);
  // test_matrix_vector_product();
  ::testing::InitGoogleTest();
  return RUN_ALL_TESTS();
}
bool test_matrix_vector_product() {
  bool is_test_passed = true;
  std::vector<double> ref_vec = {1. / 3, 2.};
  std::vector<std::vector<double>> ref_mat = {{1., 2.}, {3., 4.}};
  std::vector<double> ref_ans = {13. / 3., 9.};
  std::vector<double> answer = ref_mat * ref_vec;
  if (answer == ref_ans) {
    std::cout << "Tests passed!\n";
    is_test_passed = true;
  } else {
    std::cout << "Tests failed \n";
    std::cout << "Reference: ";
    print_vector(ref_ans);
    std::cout << "Computed: ";
    print_vector(answer);
    is_test_passed = false;
  }
  return is_test_passed;
}