public class firstandlast {
    static int first=-1,last = -1;
    
    public static void fl(String s, int i, char a){
        if(i==s.length()){
            return;
        }

        if(first==-1){
            if(s.charAt(i) == a){
                first=i;
                last=i;
            }
        }else{
            if(s.charAt(i) == a){
                last=i;
            }
        }
        fl(s,i+1,a);



    }


    public static void main(String[] args) {
        fl("abcd",0, 'a');
        System.out.println("first="+first+", second="+last);
    }
}