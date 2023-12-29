#include "Calculator.h"
Calculator::Calculator(std::vector<int16_t>input_data)
{
try{
    int16_t temp_res = 0;
    int k = 0;
    for(auto elem:input_data) {
        temp_res = boost::numeric_cast<int16_t>(temp_res+elem);
        k += 1;
    }
   	results = temp_res / k;
 }catch (boost::numeric::negative_overflow& e) {
      results = std::numeric_limits<int16_t>::lowest();
   }
   catch (boost::numeric::positive_overflow& e) {
      results = std::numeric_limits<int16_t>::max();
   }
};
int16_t Calculator::send_res(){return results;}
