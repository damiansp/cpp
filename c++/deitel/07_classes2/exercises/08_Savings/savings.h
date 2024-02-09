class SavingsAccount {
 private:
  double balance;

 public:
  static double annual_interest_rate = 0.03;
  static void modify_interest_rate(double);
  double get_monthly_interest();
};
