import java.util.*;
import java.io.File;
import java.io.FileNotFoundException;
class Giangvien{
    private String id, name, maj;

    public Giangvien(int id, String name, String maj) {
        this.id = "GV" + String.format("%02d", id);
        this.name = name;
        this.maj = maj;
    }
    public String getfullname(){
        return name.toLowerCase();
    }
    public String newmaj(){
        String[] x = maj.split("\\s+");
        StringBuilder res = new StringBuilder();
        for(String word : x){
            res.append(Character.toUpperCase(word.charAt(0)));
        }
        return res.toString();
    }
    public String toString(){
        return String.format("%s %s %s", id, name, this.newmaj());
    }
}
public class J05027_Timkiemgiangvien {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        Giangvien[] ds = new Giangvien[t];
        for (int i = 0; i < t; i++) {
            String name = ip.nextLine();
            String maj = ip.nextLine();
            ds[i] = new Giangvien(i + 1, name, maj);
        }
        int q = ip.nextInt();
        ip.nextLine();
        while(q-- > 0){
            String s = ip.nextLine();
            String a = s.toLowerCase();
            System.out.println(String.format("DANH SACH GIANG VIEN THEO TU KHOA %s:", s));
            for(Giangvien x : ds){
                if(x.getfullname().contains(a)){
                    System.out.println(x);
                }
            }
        }
    }
}
