class Account {
public:
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;
};

class SavingAccount : public Account {
private:
    double balance;
public:
    void deposit(double amount) override {
        balance += amount;
    }
    void withdraw(double amount) override {
        if (amount > balance) {
            // throw std::runtime_error("Insufficient funds");
        }
        balance -= amount;
    }
};