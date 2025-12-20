import java.util.*;
import java.util.Arrays;
import java.io.File;
import java.io.FileNotFoundException;
class Monhoc implements Comparable<Monhoc>{
    private String id, name, hthuc;

    public Monhoc(String id, String name, String hthuc) {
        this.id = id;
        this.name = name;
        this.hthuc = hthuc;
    }
    public int compareTo(Monhoc other){
        return this.id.compareTo(other.id);
    }
    public String toString(){
        return String.format("%s %s %s", id, name, hthuc);
    }
}
public class J07058_Danhsachmonthi {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner ip = new Scanner(new File("MONHOC.in"));
        int t = ip.nextInt();
        Monhoc[] ds = new Monhoc[t];
        ip.nextLine();
        for(int i = 0; i < t; i++){
            String id = ip.nextLine();
            String name = ip.nextLine();
            String hthuc = ip.nextLine();
            ds[i] = new Monhoc(id, name, hthuc);
        }
        Arrays.sort(ds);
        for(Monhoc x : ds){
            System.out.println(x);
        }
    }
}   