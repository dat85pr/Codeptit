import java.util.*;
import java.io.*;
import java.util.Arrays;
class Company implements Comparable<Company>{
    private String id, name;
    private int employee;

    public Company(String id, String name, int employee) {
        this.id = id;
        this.name = name;
        this.employee = employee;
    }

    public int getEmployee() {
        return employee;
    }
    
    @Override
    public int compareTo(Company other){
        if(this.employee == other.employee){
            return this.id.compareTo(other.id);
        }
        return other.employee - this.employee;
    }
    @Override
    public String toString(){
        return String.format("%s %s %d", id, name, employee);
    }
}
public class J05029_Danhsachdoanhnghiepnhansinhvienthuctap2 {
    public static void main(String[] args){
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Company[] ds = new Company[t];
        for(int i = 0; i < t; i++){
            String id = ip.nextLine();
            String name = ip.nextLine();
            int em = ip.nextInt();
            ip.nextLine();
            ds[i] = new Company(id, name, em);
        }
        Arrays.sort(ds);
        int q = ip.nextInt();
        while(q-- > 0){
            int m = ip.nextInt();
            int n = ip.nextInt();
            System.out.println(String.format("DANH SACH DOANH NGHIEP NHAN TU %d DEN %d SINH VIEN:", m, n));
            for(Company x : ds){ 
                if(x.getEmployee() >= m && x.getEmployee() <= n){
                    System.out.println(x);
                }
            }
        }
    }
}   