package Exp1;
import java.util.Scanner;

public class Pintia7_1{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        float exp_score = scan.nextFloat();
        float homework_score = scan.nextFloat();
        float test_score = scan.nextFloat();
        float mooc_score = scan.nextFloat();
        float midterm_score = scan.nextFloat();
        scan.close();
        // endterm * 0.6 + exp * 0.2 + homework * 0.06 + test * 0.06 + midterm * 0.02 + mooc * 0.06 = 90
        double endterm_score = (90 - exp_score * 0.2 - homework_score * 0.06 - test_score * 0.06 - midterm_score * 0.02 - mooc_score *0.06)/0.6;
        System.out.printf("%.2f", endterm_score);
    }
} 