import java.util.Scanner;

public class Miniproject {
    public static void main(String[] args){
        System.out.println("NUmber Guesser");
        int mynum = (int) (100*Math.random());

        int choice=0;
        Scanner sc = new Scanner(System.in);
        while(choice >= 0){
            System.out.print("Please Enter your guess : ");
            choice = sc.nextInt();
            if(choice < 0){
                System.out.println("Stopping...");
                break;
            }
            if(choice > mynum){
                System.out.println("You guessed larger number");
            }else if(choice < mynum && choice >= 0){
                System.out.println("You guessed smaller number");
            }else if(choice == mynum)
            {
                System.out.println("You guessed correctly : "+mynum);
                break;
            }
        }


    }
}
