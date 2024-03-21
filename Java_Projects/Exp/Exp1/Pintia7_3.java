package Exp1;

import java.util.Scanner;

public class Pintia7_3 {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        int[] array = new int[n];
        for (int i = 0; i < n; i++){
            array[i] = scan.nextInt();
        }
        scan.close();
        int max = 0;
        for (int i = 0; i < n; i++){
            if (array[i] > max) max = array[i];
        }
        System.out.println(max);
    }
}
