#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int
main ()
{
  int n1, n2, n3, n4, n5, max;
  int do1 = 1;
    cout<<"\t Enter 1st number : ";
  cin >> n1;
  cout<<"\n\t Enter 2nd number : ";
  cin>> n2 ;
  cout<<"\n\t Enter 3rd number : ";
  cin>> n3 ;
  cout<<"\n\t Enter 4th number : ";
  cin>> n4 ;
  cout<<"\n\t Enter 5th number : ";
  cin>> n5;

  if (n1 > n2)
    {
      if (n1 > n3)
	{
	  if (n1 > n4)
	    {
	      if (n1 > n5)
		max = n1;
	      else
		max = n5;
	    }
	  else if (n4 > n1)
	    
	      {
	    if (n4 > n5)
	      max = n4;
	    else
	      max = n5;
	    }
	}
      else if (n3 > n4)
	{
	  if (n3 > n5)
	    max = n1;
	  else
	    max = n5;
	}
      else if (n4 > n5)
	max = n4;
      else
	max = n5;
    }
  else
    {
      if (n2 > n3)
	{
	  if (n2 > n4)
	    {
	      if (n2 > n5)
		max = n2;
	      else
		max = n5;
	    }
	  else if (n4 > n5)
	    max = n4;
	  else
	    max = n5;
	}
      else if (n3 > n4)
	{
	  if (n3 > n5)
	    max = n3;
	  else
	    max = n5;
	}
      else if (n4 > n5)
	max = n4;
      else
	max = n5;
    }
  
  while(do1 == 1){
      if (max % n1 == 0 && max % n2 == 0 && max % n3 == 0 && max % n4 == 0 && max % n5 == 0){
      cout<<"\t  L.C.M. : "<<max;
      do1++;}
      else 
      max++;
  }

  return 0;
}

