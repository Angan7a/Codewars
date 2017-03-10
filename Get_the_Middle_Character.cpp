std::string get_middle(std::string input)
{
   int s = input.length();
   std::string out;
   if (s % 2 == 0 ) {
       out.push_back(input[s / 2 - 1]);
       out.push_back(input[s / 2]);
       return out;
   } else {
       out = input[s / 2];
       return out;
   }
}
