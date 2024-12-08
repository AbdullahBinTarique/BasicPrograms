package bankAccountChallenge;

import java.util.Scanner;

class Bankfields {
    private String accountNumber;
    private float accountBalance = 0.00f;
    private String customerName;
    private String Email;
    private String Phone;

    public void setAccountBalance(String accountBalance) {
        this.accountBalance = Float.parseFloat(accountBalance);
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public void setEmail(String email) {
        Email = email;
    }

    public void setPhone(String phone) {
        Phone = phone;
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public float getAccountBalance() {
        return accountBalance;
    }

    public String getCustomerName() {
        return customerName;
    }

    public String getEmail() {
        return Email;
    }

    public String getPhone() {
        return Phone;
    }

    public void Createaccount() {
        System.out.println("Enter Your Name");
        Scanner sc = new Scanner(System.in);
        setCustomerName(sc.nextLine());
        System.out.println("Enter Your Email");
        setEmail(sc.nextLine());
        System.out.println("Enter Your Phone Number");
        setPhone(sc.nextLine());
        System.out.println("Enter amount you wanna deposit");
        setAccountBalance(sc.nextLine());
        System.out.println("Enter Your desired account number ");
        setAccountNumber(sc.nextLine());
    }

    public void Withdrawl(float amt) {
        if (amt > getAccountBalance())
            System.out.println("The amt cant be withdrawn insufficient balance!");
        else System.out.println("Amt withdrawn successfully Remaining balance " + (getAccountBalance() - amt));
        setAccountBalance(String.valueOf((getAccountBalance() - amt)));
    }

    public void Deposit(float amt) {
        System.out.println("Enter amt to deposit");
        setAccountBalance(String.valueOf(getAccountBalance() + amt));
        System.out.println("The current Balance is " + getAccountBalance());
    }
}
