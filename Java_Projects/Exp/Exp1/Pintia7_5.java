package Exp1;

import java.util.Scanner;

public class Pintia7_5 {
    public static void main(String[] args){
        int[][] array = new int[13][13];
        for (int i = 0; i < 13; i++){
            array[i][0] = 1;
            array[i][i] = 1;
        }
        for (int i = 2; i < 13; i++){
            for (int j = 1; j < i; j++){
                array[i][j] = array[i-1][j-1] + array[i-1][j];
            }
        }

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.close();

        for (int i = 0; i < n; i++){
            for (int j = 0; j <= i; j++){
                System.out.printf("%-4d", array[i][j]);
            }
            System.out.printf("\n");
        }
    }
}

