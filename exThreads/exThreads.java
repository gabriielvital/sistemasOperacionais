import java.lang.reflect.InvocationTargetException;

public class exThreads{
    public static void main(String args[]) throws InterruptedException, InvocationTargetException{
        int lim = Integer.parseInt(args[1]);
        int soma = 0;

        Thread t01 = new Thread(){
            @Override
            public void run(){
                String nomeThread = "";
                int aux = 0;
                    for(int i=1 ; i <= lim ; i++){
                        nomeThread = "Thread Contador";
                        System.out.println(i + " " + nomeThread);
                        aux += i;
                        System.out.println("A soma está em : " + aux);
                    }
                soma = aux;
                System.out.println("A soma final da thread é : " + aux);
            }
        };

        Thread t02 = new Thread(){
            @Override
            public void run(){
                final int aux = soma;
                if(aux % 2 == 0){
                    System.out.println("A soma é par !");
                }else{
                    System.out.println("A soma é impar !");
                }
            }
        };

        t01.start();
        t01.join();
        t02.start();
    }
}