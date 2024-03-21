package Exp1;

import java.util.Scanner;

public class Pintia7_6 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String line;
        do{
            line = scan.nextLine();
            int sum = 0;
            for (int i = 0; i < line.length(); i++){
                if (Character.isDigit(line.charAt(i))){
                    sum += Character.getNumericValue(line.charAt(i));
                }
            }
            if (line.equals("end") == false) System.out.println(sum);
        }
        while (line.equals("end") == false);
        scan.close();
    }
}

