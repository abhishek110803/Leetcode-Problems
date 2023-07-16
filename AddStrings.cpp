class Solution
{
public:
   string addStrings(string num1, string num2)
   {
      string num3;
      if (num1.length() >= num2.length())
      {
         int l = num1.length();
         int k = num2.length();
         int p = l - k;

         int carry = 0;

         for (int i = l - 1; i >= 0; i--)
         {
            if (i - p >= 0)
            {
               int sum = 0;
               sum = carry + ((num1[i])-'0' + (num2[i - p])-'0');
               int u = sum % 10;
               char c = u+48;
               num3.push_back(c);
               carry = sum / 10;
                
                cout<<u<<endl;
            }

            else
            {
               int sum = 0;
               sum = carry + (num1[i])-'0';
               int u = sum % 10;
               char c = u+48;
               num3.push_back(c);
               carry = sum / 10;
                
                cout<<u<<endl;
            }
         }
         int s = carry;
         char b = s+48;

         if (carry != 0)
         {
            num3.push_back(b);
         }
      }
      else
      {
         int k = num1.length();
         int l = num2.length();
         int p = l - k;

         int carry = 0;

         for (int i = l - 1; i >= 0; i--)
         {
            if (i - p >= 0)
            {
               int sum = 0;
             // cout << (num1[i - p])+(num1[i - p]) << endl;

               sum = carry + (num1[i - p])-'0' + (num2[i])-'0';
               int u = sum % 10;
               cout<<sum<<",";
               char c = u+48;
               num3.push_back(c);
               carry = sum / 10;
            }

            else
            {
               int sum = 0;
               //   cout<<num1[i];
               sum = carry + (num2[i])-'0';
               int u = sum % 10;
               cout<<sum<<",";
               char c = u+48;
              num3.push_back(c);
               carry = sum / 10;
            }
         }
         int s = carry;
         char b = s+48;

         if (carry != 0)
         {
            num3.push_back(b);
         }
      }
       
      reverse(num3.begin(),num3.end());
      return num3;
   }
};