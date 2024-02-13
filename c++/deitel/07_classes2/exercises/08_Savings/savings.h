class SavingsAccount {
 private:
  double balance;

 public:
  SavingsAccount(double);
  static double annual_interest_rate;
  static void modify_interest_rate(double);
  void get_monthly_interest();
};
