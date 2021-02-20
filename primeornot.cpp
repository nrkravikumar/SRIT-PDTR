#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? i;
   ?? n;
   ?? c;

   raptor_prompt_variable_zzyz ="Enter a number: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   i =1;
   c =0;
   while (!(i>n))
   {
      if (n % i==0)
      {
         c =c+1;
      }
      else
      {
      }
      i =i+1;
   }
   if (c==2)
   {
      cout << "Given number "+n+" is Prime number" << endl;   }
   else
   {
      cout << "Given number "+n+" is Not a Prime number" << endl;   }

   return 0;
}
