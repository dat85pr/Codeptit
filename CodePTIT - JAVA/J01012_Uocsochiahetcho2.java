import java.util.Scanner;

public class J01012_Uocsochiahetcho2 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        while(t-- > 0){
            long n = ip.nextLong();
            if(n % 2 == 1){   
                System.out.println(0);
            }   
            else{
                int cnt = 0;
                long m = n / 2;
                for(long i = 1; i * i <= m; i++){
                    if(m % i == 0){
                        cnt++;
                        if(i != m / i) cnt++;
                    }
                }
                System.out.println(cnt);
           }    
        } 
    }  
}
