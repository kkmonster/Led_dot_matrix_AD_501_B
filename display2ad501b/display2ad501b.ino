        
        // Give it a name:
        unsigned long time;
        
        int led  =13;
        int led_set=1;
        int sin1 = 2;
        int sin2 = 3;
        int sin3 = 4;
        int clk  = 5;
        int lat  = 6;
        int str  = 7;   
     
   boolean compare1(0);
   boolean compare2(0);     

        
                       
                          
                        // 1 2 3 4 5 6 7 8 9 1011121314151617181920212223242526272829303132
    boolean data[16][32]= { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    boolean kao[16][32]= { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,1,1,0,0,1,1,1,1,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,1,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,1,0,1,0,0,1,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,1,1,1,1,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                           
    boolean cmmc[16][32]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,1,1,0,1,1,1,1,0,
                           0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,
                           0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,1,1,1,0,
                           0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
                           
      boolean data_y[16][16]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
                               1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    
    


    void led_blink(){
      
    led_set=1-led_set;
    digitalWrite(led,led_set);
    
    };


    void fn_display(boolean data[16][32]){
      
             for(int y=0; y <16 ;y++ ){
    	             for(int x=0; x <16 ;x++ ){
    	             
    	              //write data
    
    	             digitalWrite(sin1,x==y);
                     if(compare1 != data[y][15-x]){
                     compare1=data[y][15-x];
                     digitalWrite(sin2,compare1);
                     };
                     if(compare2 != data[y][31-x]){
                     compare2=data[y][31-x];
                     digitalWrite(sin3,compare2);
                     };
                     
                     
    	             //shift clk
    	             digitalWrite(clk,1);  
    	             digitalWrite(clk,0);
    	              }
    	      digitalWrite(lat,0);
    	      digitalWrite(lat,1);
    	      }
    };
        
        
        
        void setup() {       
 
          Serial.begin(9600);
          // initialize the digital pin as an output.
          
          pinMode(led, OUTPUT);  
          pinMode(sin1, OUTPUT);   
          pinMode(sin2, OUTPUT);   
          pinMode(sin3, OUTPUT);   
          pinMode(clk, OUTPUT);   
          pinMode(lat, OUTPUT);   
          pinMode(str, OUTPUT);   
        
          digitalWrite(led,0);
          digitalWrite(sin1,0);
          digitalWrite(sin2,0);
          digitalWrite(sin3,0);
          digitalWrite(clk,0);  
          digitalWrite(lat,0);
          digitalWrite(str,0);
        
        }
        
        // the loop routine runs over and over again forever:
        void loop() {
     time = micros()     ;
     
     
     
     fn_display(cmmc);
     
     
     
     
    Serial.println(micros()- time);
          }
