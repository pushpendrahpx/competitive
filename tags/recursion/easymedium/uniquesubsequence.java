import java.util.HashSet;

public class uniquesubsequence {
    public static HashSet<String> set = new HashSet<>();
    static void generate(String input,String output, int i){
        if(i==input.length()) { 
           if(!set.contains(output)){
            System.out.println(output);
            set.add(output);
           } 
        return;}
        char curr = input.charAt(i);
        generate(input, output+curr,i+1);
        generate(input, output,i+1);
    }
    public static void main(String[] args) {
        String s = "aaa";
        generate(s,"",0);
    }
}