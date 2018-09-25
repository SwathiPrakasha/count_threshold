|
/* This program counts integers greater than a specified threshold in a specified file
   The program takes 2 user input
           1) integer threshold value        : threshold
           2) file name                      : file 
    and reports the count.
    The program also does the error check on the user inputs
*/

// the thresh.h consists of all the header files and using declarations required for the this program and is allocated in the assign3 directory
#include "thresh.h"
    int main()
    {
        
        // variable declarations
        int threshold=0; 
        string file;
        ifstream infile; 
        int count =0, chkVal=0;

        // taking  input from user for threshold value
        cout<<"Enter the threshold value"<<endl ;
        

       // Calling error check function which takes user input and checks for invalid input      
        threshold = errChk();
        

        //taking the input from user for the file to be serached 
        cout<<"Enter the filename: "<<endl;
        cin>>file;
        infile.open(file.c_str());                         // opening the file 
        

             // This if condition is to test the file wheather file is open or not ?
             if(!infile.is_open())
              {

               cerr<<"Can't open file :"<<file<<endl; 
               return -1; 

              }
         

              infile>>chkVal;                            // inserting the first value to the file : this is a loop and half mechanism 

              // The while loop is to read all the data from the file till the end of the file 
              while (!infile.eof())
               {
               
                   if(chkVal > threshold)
                    {
                         count ++;
                    }

               infile>>chkVal; 
             } 
            
  
            infile.close();                             // Closing the file 

 
           cout<<"the total count of number greater than given threshold is :"<<count<<endl; 
 
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
      
