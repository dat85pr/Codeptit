import java.util.*;
import java.util.Arrays;
class Giangvien implements Comparable<Giangvien>{
    private String id, name, major;

    public Giangvien(int id, String name, String major) {
        this.id = "GV" + String.format("%02d", id);
        this.name = name;
        this.major = major;
    }
    
    public String getMaj(){
        String[] list = major.split(" ");
        String res = "";
        for(String word : list){
            res += word.substring(0, 1).toUpperCase();
        }
        return res;
    }
    public String lastname(){
        String[] list = name.split(" ");
        String res = list[list.length - 1];
        return res;
    }
    @Override
    public int compareTo(Giangvien other){
        if(this.lastname().equals(other.lastname())){
            return this.id.compareTo(other.id);
        }
        return this.lastname().compareTo(other.lastname());
    }
    @Override
    public String toString(){
        return String.format("%s %s %s", id, name, getMaj());
    }
}
public class J05025_Sapxepdanhsachgiangvien {
    public static Scanner ip = new Scanner(System.in);
    public static void main(String[] args){
        int t = ip.nextInt();
        ip.nextLine();
        Giangvien[] ds = new Giangvien[t];
        for(int i = 0; i < t; i++){
            String name = ip.nextLine();
            String maj = ip.nextLine();
            ds[i] = new Giangvien(i + 1, name, maj);
        }
        Arrays.sort(ds);
        for(Giangvien x : ds){
            System.out.println(x);
        }
    }
}   