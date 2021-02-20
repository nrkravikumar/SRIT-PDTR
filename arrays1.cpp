#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? i;
   ?? s;
   ?? m;
   ??[] a = new ??[??+1];

   raptor_prompt_variable_zzyz ="Enter array size: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> s;
   i =1;
   while (!(i>s))
   {
      raptor_prompt_variable_zzyz ="Enter "+i+" element is: ";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> m;
      a[i] = m;
      i =i+1;
   }
   i =1;
   while (!(i>s))
   {
      cout << i+" element is: "+a(i)+" " << endl;      i =i+1;
   }

   return 0;
}
