interface rekening{
    void buka_tabungan(String nama);
    void tutup_tabungan(String nama);
}

abstract class nasabah{
    abstract void buat_rekening(String no_rek);
    abstract void withdraw(int saldo);
    abstract void deposit(int saldo);
    void detail(){
        System.out.println("Rekening Anda Siap Digunakan");
    }
}

class bank extends nasabah implements rekening{
    private String no_rek;
    private String nama; 
    private int saldo;
    public void buka_tabungan(String nama){
        this.nama=nama;
        System.out.println("Nama pemilik rekening adalah "+nama);
        super.detail();
    }
    public void tutup_tabungan(String nama){
        System.out.println("Rekening Anda Ditutup, Silahkan Ambil Seluruh Sisa Saldo Anda");
        System.out.println("Sisa saldo "+saldo);
    }
    void buat_rekening(String no_rek){
        this.no_rek=no_rek;
        System.out.println(nama+" adalah pemlik rekening dengan nomor "+no_rek);
    }
    void withdraw(int saldo){
        System.out.println("Saldo awal Anda "+this.saldo);
        this.saldo=this.saldo-saldo;
        System.out.println("Saldo anda setelah withdraw "+this.saldo);
    }
    void deposit(int saldo){
        System.out.println("Saldo awal Anda "+this.saldo);
        this.saldo=this.saldo+saldo;
        System.out.println("Saldo anda setelah deposit "+this.saldo);
    }
    void detail(){
        System.out.println("Nama pemilik rekening "+this.nama);
        System.out.println("Nomor rekening "+no_rek);
        System.out.println("Saldo di tabungan "+this.saldo);
    }
}

public class NewMain {
    public static void main(String[] args) {
            bank nasabah1 = new bank();
    nasabah1.buka_tabungan("Jonathan Afriliansyah");
    System.out.println("");
    nasabah1.buat_rekening("1122334455");
    System.out.println("");
    nasabah1.deposit(1000000);
    System.out.println("");
    nasabah1.withdraw(500000);
    System.out.println("");
    nasabah1.detail();
    System.out.println("");
    nasabah1.tutup_tabungan("Jonathan Afriliansyah");
    }
}
