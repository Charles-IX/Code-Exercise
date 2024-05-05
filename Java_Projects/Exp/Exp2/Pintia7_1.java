package Exp2;

import java.util.Scanner;

class BankAccount{
    static int balance = 0;
    static void init(int amount){
        balance = amount;
    }
    static int getBalance(){
        return balance;
    }
    static int withdraw(int amount){
        balance -= amount;
        return balance;
    }
    static int deposit(int amount){
        balance += amount;
        return balance;
    }
}

public class Pintia7_1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int init = scan.nextInt();
        int withdraw = scan.nextInt();
        int deposit = scan.nextInt();
        scan.close();
        if (init >= 0 && withdraw >= 0 && deposit >= 0){
            BankAccount.init(init);
            if (init >= withdraw){
                System.out.println("账户的初始余额是:" + BankAccount.getBalance());
                System.out.println("取款后,账户的余额是:" + BankAccount.withdraw(withdraw));
                System.out.println("存款后,账户的余额是:" + BankAccount.deposit(deposit));
            }
            else{
                System.out.println("账户余额不足");
                System.out.println("账户的初始余额是:" + BankAccount.getBalance());
            }
        }
        else{
            System.out.println("输入的数据不能为负数");
        }
    }
}