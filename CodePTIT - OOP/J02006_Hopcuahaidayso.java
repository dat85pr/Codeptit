import java.util.*;
public class J02006_Hopcuahaidayso { 
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int a = ip.nextInt();
        int b = ip.nextInt();
        int[] h = new int[a];
        int[] k = new int[b];
        Set<Integer> se = new TreeSet<>();
        for(int i = 0; i < a; i++){
            h[i] = ip.nextInt();
            se.add(h[i]);
        }
        for(int i = 0; i < b; i++){
            k[i] = ip.nextInt();
            se.add(k[i]);
        }
        for(int x : se){
            System.out.print(x + " ");
        }
    }   
}

