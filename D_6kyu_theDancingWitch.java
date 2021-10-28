//https://www.codewars.com/kata/6171a85207ab6b003fadc43e

public class Kata {
    public static String figureOut(String[] arr) {  
        
      for (int i = 0; i < arr.length-1; i++) {

        String theString = arr[i];
          
        String theOtherString = arr[i+1];

        for (int j = 0; j < theString.length(); j++) {

          for (int z = 0; z < theString.length(); z++) {

            if(theString.charAt(j) != ' ' && theString.charAt(j) == theOtherString.charAt(z)) 
            {
              
              if (j == z || j == (z-1) || j == (z+1)) {
                
                continue;

              } else  {

                return Character.toString(theString.charAt(j));
                
              }
              
            }
            
          }

        }
          
      }
      
      return null;
          
    }

}
