#include<iostream>
#include<torch/torch.h>

using namespace std;

int main(){
	
	torch::Tensor Dividend = torch::tensor({-3,-2,-1,0,1,2,3});
	torch::Tensor Divisor = torch::tensor({2});
	
	try
	{

		if ( torch::count_nonzero(Divisor).item<int>() != torch::numel(Divisor) )
			throw "zerodivision";
	
		
		torch::Tensor Quotient = torch::divide(Dividend, Divisor); 
		Quotient=torch::trunc(Quotient);
		
		torch::Tensor value = torch::mul( Quotient , Divisor);
		
		torch::Tensor answer = torch::sub(Dividend , value );
		cout<<answer;
	}
	
	catch(...)
	{
		cout<<"Division by Zero";
	} 
	

	return 0;
}
