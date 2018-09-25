

/* This program generates the file of random integers through the srand() and rand() functions found in <cstdlib> 
   The program takes the 4 input from the user 
            1) random number seed                      --- seed
            2) A maximum value                         --- maxVal
            3) number values to generated              --- numOfVal 
            4) name of the output file to store values --- file
   The program also check for invalid input
*/

// the generate.h consists of all the header files and using declarations required for this program and allocated in assign3 directory 
#include "generate.h"


    int main()
    {
        // Variable declarations 
        int seed=0, maxVal=0,numOfVal=0;     
        int randomInt;
        ofstream outfile;
        string file;

        // inputing the data from the user
        cout<<"Enter a randin number seed"<<endl;          

            // Calling error check function which takes user input and checks for invalid input 
            seed=errChk();
        
        cout<<"Enter a maximum value"<<endl;

            // Calling error check function which takes user input and checks for invalid input 
              maxVal=errChk();
       
        cout<<"Enter the number of vallues"<<endl;
        
            // Calling error check function which takes user input and checks for invalid input 
               numOfVal=errChk();  

        cout<<"Enter the name of the output file to be"<<endl;
        cin>>file;

     
        outfile.open(file.c_str());                            //opening the file 

        srand(seed);                                        // intializing the random number generator
    
            // the loop runs to create the random numbers user asks for
            for(int i =0; i<numOfVal; i++)                    
            {
                randomInt = rand();
                int val = randomInt % maxVal ;        

                outfile<<val<<endl;           
              
            } 


          
       outfile.close();                                       // closing the file 

      return 1;
    }



       /* This is function takes user input for interger and check for a invalid input 
          the function take no parameter and returns the user input is it is valid else exits from the program 
       */
        int errChk()
         { float k=0;

            // this condition check if user passes character or symbol other than integer
            if(!(cin>>k))
            {  
                cout<<"you did not enter valid value, seed value should be an positive integer"<<endl;
		exit (-1);
            }

            if(k < 0)                                     
             { 
                 cout<<"Seed value should be positive integer"<<endl;
                 exit (-2);
             }
           

            if( k != (int)k)
             { 
                 cerr<<"The value cannot be a floating point"<<endl;
                 exit (-3);
             }
	
            return k;


         }  
