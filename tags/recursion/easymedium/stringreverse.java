public class stringreverse {
    public static void reverse(String S) {
        if(S.length()==0) return;
        reverse(S.substring(1, S.length()));
        System.out.print(S.charAt(0));
    }
    public static void main(String[] args) {
        reverse("Neelam");        
    }
}