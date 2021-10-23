//https://www.codewars.com/kata/58865bfb41e04464240000b0

using System.Collections.Generic;
using System;

public static class Kata
{
    public static string BitsWar(List<int> numbers)
    {
      
      int length = numbers.Count;
      int evenCount = 0;
      int oddCount = 0;
      String result = "";
      
      String[] binaryNum = new String[length];
      int[] originalNums = new int[length];
      
      for (int i = 0; i < length; i++) {
        
        int num = numbers[i];
        
        int temp = num;
        
        if (temp < 0) {
          
          temp = System.Math.Abs(num);
          
        }
        
        String binary = Convert.ToString(temp, 2);
        
        originalNums[i] = num;

        binaryNum[i] = binary;
        
        
      }
      
      for (int i = 0; i < length; i++) {
        
        int originalNum = originalNums[i];
        
        String theBinary = binaryNum[i];

        for (int z = 0; z < theBinary.Length; z++) {

          if (theBinary[z] == '1') {

            if (originalNum < 0) {
              
              if (originalNum % 2 == 0) {
                
                evenCount-=1;
                
              } else oddCount-=1;

            } else {
              
              if (originalNum % 2 == 0) {
                
                evenCount+=1;
                
              } else oddCount+=1;
              
            }
            
          }
          
        }
        
      }
      
    if (evenCount > oddCount) {

      result = "evens win";

    } else if (oddCount > evenCount) {

      result = "odds win";

    } else result = "tie";

    return result;
      
    }
}
