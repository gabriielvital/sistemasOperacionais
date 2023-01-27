public class runParOuImpar extends Thread{
    public runParOuImpar(){

    }
    @Override
    public void run(){
        for(int i=1 ; i<=exThreads.getSoma() ; i++){
            if(exThreads.getSoma() % 2 == 0){
                System.out.println("A soma é par !");
            }else{
                System.out.println("A soma é impar !");
            }
        }
    }
}
