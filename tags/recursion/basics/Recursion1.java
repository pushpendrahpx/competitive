public class Recursion1{
    static int recur(int n1,int n2){
        if(n2 == 0){
            return 0;
        }

        return n1+recur(n1,n2-1);



    }
    
    public static void main(String[] args){
        int n1=5, n2=4;
        System.out.println(recur(n1,n2));
        
    }
}