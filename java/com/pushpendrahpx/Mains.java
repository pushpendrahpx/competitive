package com.pushpendrahpx;
import java.util.Arrays;
import java.util.Scanner;

public class Mains{


    public static void sum(int a,int b){
        Integer c = a+b;
        System.out.println("Result is "+c.toString());
    }
    public static void main(String[] args) {
        // String names = "Pushpendra";
        // String a = names;
        // System.out.println(a);


        /*
            byte => 1
            short => 2
            int => 4
            long => 8
            float => 4
            double => 8
            char 2
            boolean => 1


        */
        // double f = 3.14;
        // System.out.println(f);
        
        // String s1 = "aman";
        // String s2 = "akku";
        // String s3 = s1+" and "+s2;
        // s3 = s3.replace('a', 'b');
        // s3 = s3.substring(5, 8);
        // System.out.print(s3);
        
        // int[] a = {11,33,14};
        // Arrays.sort(a);
        // for(int i=0; i < a.length; i++){
        //     System.out.println(a[i]);
        // }

        // int[][] finalmarks = {{1,3,4},{3,1,4}};

        // for(int i=0; i < finalmarks.length; i++){
        //     for(int j =0 ; j < finalmarks[i].length; j++){
        //         System.out.print(finalmarks[i][j]+" ");
        //     }
        //     System.out.print('\n');
        // }



        // casting
        // double price = 294.32;
        // double bill = price + 23.21;
        // System.out.println(bill);
        // int a = 23;
        // int b = (int)( a+price);
        // System.out.println(b);
        
        // final float pi = 3.14F;
        // System.out.println(pi);

        // Operators
        // int a=1;
        // int b = 2;
        // System.out.print(a+b);
        // System.out.println();
        
        // int a  = 5,b = 6;
        // System.out.println(Math.max(a,b));
        // // random function 0.0 - 1.0
        // System.out.println(((int) (100*Math.random())));


        // Readinbg input
        // Scanner sc = new Scanner(System.in);
        // String name = sc.nextLine();
        // System.out.println(name);

        // Comparison operators
        // a==b
        // a != b
        // a < b
        // a > b
        // a<= b
        // a >= b

        //logical operators
        // && 
        // 


        // try , catch in Exception handle
            int[] a = {1,3,4};

            try{
            System.out.println(a[5]);
            }catch(Exception exception){
                System.out.println();
            }


            sum(1,3);



            System.out.println("Student name : pushpendra");

    }
}