/*
    Problem Name - Tower of Hanoi Problem
    Resource - https://www.youtube.com/watch?v=u-HgzgYe8KA&t=1366s
    
*/
public class Recursion2{
    static void toh(int n,String s,String h, String d){
        if(n==0) return;
        toh(n-1,s,d,h);
        System.out.println("Transfer "+n+" from "+s + " to "+d);
        toh(n-1,h,s,d);
    }
    public static void main(String[] args){
        int n = Integer.parseInt(args[0]);
        toh(n,"S","H","D");
     // hello world

    }
}