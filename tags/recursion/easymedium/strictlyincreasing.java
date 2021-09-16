import java.util.ArrayList;
import java.util.Arrays;

public class strictlyincreasing {
    static boolean checkinc(ArrayList<Integer> list,int i){
        if(i == list.size()){
            return true;
        } // base case


        if(list.get(i-1) <= list.get(i)){
            return checkinc(list, i+1);     
        }else{
            return false;
        }
    }

    public static void main(String[] args) {
        ArrayList<Integer> list=new ArrayList<Integer>(Arrays.asList(1,2,5,5));//Creating arraylist    
        
        if(checkinc(list,1)){
            System.out.println("TRUE");
        }else{
            System.out.println("FALSE");
        }
        


    }
}