import java.io.*;
import java.util.*;
import java.text.*;
class Dn implements Comparable<Dn>{
    private String id, name;
    private int num;

    public Dn(String id, String name, int num) {
        this.id = id;
        this.name = name;
        this.num = num;
    }
    public int compareTo(Dn other){
        return this.id.compareTo(other.id);
    }
    public String toString(){
        return String.format("%s %s %d", id, name, num);
    }
}
public class J07037_Danhsachdoanhnghiep {
    public static void main(String[] args) throws IOException{
        Scanner ip = new Scanner(new File("DN.in"));
        int t = ip.nextInt();
        ip.nextLine();
        Dn[] ds = new Dn[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String id = ip.nextLine();
            int tc = Integer.parseInt(ip.nextLine());
            ds[i] = new Dn(name, id, tc);
        }
        Arrays.sort(ds);
        for(Dn x : ds){
            System.out.println(x);
        }
    }
}
