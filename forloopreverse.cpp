#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? s;
   ?? i;
   ?? st;

   raptor_prompt_variable_zzyz ="Enter starting range: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> s;
   raptor_prompt_variable_zzyz ="Enter ending range: ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> st;
   i =st;
   while (!(i<=s))
   {
      cout << i << endl;      i =i-1;
   }

   return 0;
}
