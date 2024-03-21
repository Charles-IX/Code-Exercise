package Exp1;

import java.util.Scanner;

public class Pintia7_2 {
    public static void main(String[] args){
        String state;
        Scanner scan = new Scanner(System.in);
        int age = scan.nextInt();
        scan.close();
        if (age >= 0 && age < 10) state = "垂髫之年";
        else if (age < 20) state = "志学之年";
        else if (age < 30) state = "弱冠之年";
        else if (age < 40) state = "而立之年";
        else if (age < 50) state = "不惑之年";
        else if (age < 60) state = "知命之年";
        else if (age < 70) state = "花甲之年";
        else if (age < 80) state = "古稀之年";
        else if (age < 90) state = "杖朝之年";
        else state = "耄耋之年";
        System.out.println(state);
    }
}
