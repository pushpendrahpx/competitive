public class allsubsequence {
    static void generate(String input,String output, int i){
        if(i==input.length()) { System.out.println(output); return;}
        char curr = input.charAt(i);
        generate(input, output+curr,i+1);
        generate(input, output,i+1);
    }
    public static void main(String[] args) {
        String s = "abc";
        generate(s,"",0);
    }
}