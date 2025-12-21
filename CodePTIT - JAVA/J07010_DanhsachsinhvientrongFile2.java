import java.io.*;
import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;
import java.text.*;
class Sinhvien{
    private String id, name, lop, ns;
    private float gpa;

    public Sinhvien(int id, String name, String lop, String ns, float gpa) throws ParseException{
        this.id = "B20DCCN" + String.format("%03d", id);
        this.name = name;
        this.lop = lop;
        SimpleDateFormat formatter = new SimpleDateFormat("dd/mm/yyyy");
        this.ns = formatter.format(formatter.parse(ns));
        this.gpa = gpa;
    }
    public String toString(){
        return String.format("%s %s %s %s %.2f", id, name, lop, ns, gpa);
    }
}
public class J07010_DanhsachsinhvientrongFile2 {
    public static void main(String[] args) throws FileNotFoundException, ParseException{
        Scanner ip = new Scanner(new File("SV.in"));
        int t = ip.nextInt();
        ip.nextLine();
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String lop = ip.nextLine();
            String ns = ip.nextLine();
            float gpa = Float.parseFloat(ip.nextLine());
            Sinhvien x = new Sinhvien(i + 1, name, lop, ns, gpa);
            System.out.println(x);
        }

    }
}
