public class runThreads implements Runnable{
    
    public runThreads(){

    }
    @Override
    public void run(){
        int i = 0;
        String nomeThread = "";
        while(i < 10){
            for (i=0 ; i < 10 ; i++){
                nomeThread = "Thread " + Thread.currentThread().getId();
                System.out.println(i + " " + nomeThread);
                try {
                    Thread.sleep(100);
                } catch (Exception e) {
                    System.err.println(e);
                }
            }
            System.out.println("Ok! " + nomeThread);
        }
    }
}