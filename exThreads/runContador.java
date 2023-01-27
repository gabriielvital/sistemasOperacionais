public class runContador extends Thread{
    private int lim;
    private int soma;
    public runContador(){
        lim = 0;
        soma = 0;
    }
    public runContador(int numFcd){
        lim = numFcd;
        soma = 0;
    }
    @Override
    public void run(){
        String nomeThread = "";
            for(int i=1 ; i <= lim ; i++){
                nomeThread = "Thread Contador";
                System.out.println(i + " " + nomeThread);
                soma = soma + i;
                System.out.println("A soma está em : " + soma);
            }
        System.out.println("A soma final da thread é : " + soma);
    }
}