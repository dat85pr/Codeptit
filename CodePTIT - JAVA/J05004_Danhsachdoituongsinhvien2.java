import java.util.*;
import static java.lang.Math.*;
class Sinhvien{
    private String id, name, lop, ns;
    private float gpa;
    public Sinhvien(int id, String name, String lop, String ns, float gpa) {
        this.id = "B20DCCN" + String.format("%03d", id);
        this.name = name;
        this.lop = lop;
        this.ns = ns;
        this.gpa = gpa;
    }
    public String formns(){
        StringBuilder sb = new StringBuilder(ns);
        if(sb.charAt(1) == '/') sb.insert(0, "0");
        if(sb.charAt(4) == '/') sb.insert(3, "0");
        return sb.toString();
    }
    public String formname(){
        StringBuilder sb = new StringBuilder();
        String[] res = name.split(" ");
        for(String word : res){
            if(!word.isEmpty()){
                sb.append(word.substring(0, 1).toUpperCase())
                        .append(word.substring(1).toLowerCase()).append(" ");
            }
        }
        return sb.toString();
    }
    @Override
    public String toString(){
        return String.format("%s %s %s %s %.2f", id, formname(), lop, formns(), gpa);
    }
}
public class J05004_Danhsachdoituongsinhvien2 {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Sinhvien[] a = new Sinhvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String lop = ip.nextLine();
            String ns = ip.nextLine();
            float x = ip.nextFloat();
            ip.nextLine();
            a[i] = new Sinhvien(i + 1, name, lop, ns, x);
        }
        for(Sinhvien x : a){
            System.out.println(x);
        }
    }
}