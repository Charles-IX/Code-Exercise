package Exp1;

import java.util.Scanner;

public class Pintia7_4 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        while(scan.hasNext() == true){
            double a = scan.nextDouble();
            double b = scan.nextDouble();
            double ans = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2));
            System.out.printf("%.2f\n", ans);
        }
        scan.close();
    }
}
