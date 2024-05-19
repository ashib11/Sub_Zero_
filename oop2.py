class Bank:
    def __init__(self):
        self.accounts = {}

    def deposit(self, acc_name, amount):
        if acc_name in self.accounts:
            self.accounts[acc_name] += amount
            print(f"Deposited {amount} Tk. Current balance of Account-> {acc_name}: {self.accounts[acc_name]} Tk")
        else:
            print("Account not found.")

    def withdraw(self, acc_name, amount):
        if acc_name in self.accounts:
            if self.accounts[acc_name] >= amount:
                self.accounts[acc_name] -= amount
                print(f"Withdrawn {amount} Tk. Current balance of Account-> {acc_name}: {self.accounts[acc_name]} Tk")
            else:
                print("Insufficient funds.")
        else:
            print("Account not found.")


class Accounts(Bank):
    def __init__(self):
        super().__init__()

    def apply_loan(self, acc_name, loan_type, loan_amount):
        if acc_name in self.accounts:
            print(f"Applying for a {loan_type} loan of {loan_amount} Tk")
            print(f"Account Name- {acc_name} is applying for a {loan_type} loan of {loan_amount} TK")
            if(loan_amount <= 5* self.accounts[acc_name]):
                 Loan.add_loan(loan_type,acc_name)
                 self.deposit(acc_name, loan_amount) 
                 print(f"Loan Accepted- Current Balance of {acc_name} is {self.accounts[acc_name]}")
            else:
                 print(f"Loan Rejected- Current Balance of {acc_name} is {self.accounts[acc_name]}")
             
        else:
            print("Account not found.")
        
    def account_details(self):
        for acc_name, balane in self.accounts.items():
            print(f"Account Name: {acc_name}")
            print(f"Current Balance: {balane}")


class Loan:
    loan_accounts = []

    @classmethod
    def add_loan(cls, loan_type, acc_name):
        cls.loan_accounts.append((loan_type, acc_name))


bank = Accounts()
bank.accounts["Shahadat"] = 0
bank.account_details()
bank.deposit("Shahadat", 100000)
bank.withdraw("Shahadat", 5000)
bank.apply_loan("Shahadat", "Home", 200000); 
print()
bank = Accounts()
bank.accounts["Mamun"] = 0
bank.account_details()
bank.deposit("Mamun", 100000)
bank.withdraw("Mamun", 5000)
bank.apply_loan("Mamun", "SME", 50000); 
print()
print("Loan Accounts:", Loan.loan_accounts)
