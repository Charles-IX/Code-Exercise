package Exp1;

import java.util.Scanner;
import java.util.ArrayList;

public class Pintia7_4_deprecated {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        ArrayList<Float> array = new ArrayList<Float>();
        while (scan.hasNextFloat() == true){
            array.add(scan.nextFloat());
        }
        scan.close();
        // float[] arr = array.toArray(new float[0]);
        double[] ans = new double[array.size() / 2];
        for (int i = 0; i < array.size(); i += 2){
            double square = (Math.pow(array.get(i), 2) + Math.pow(array.get(i + 1), 2));
            ans[i / 2] = Math.sqrt(square);
        }
        for (int i = 0; i < ans.length; i++){
            System.out.println(ans[i]);
        }
    }
}
