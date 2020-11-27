#include <iostream>
#include <cmath>

double root_iterative(double q, int n, int steps){
    if(n==0){
        throw "divided by zero!";
    }
    double a = 1;

    for(int i=1;i<=steps;i++){

        a = a+((double(1)/n)*((q/std::pow(a,n-1))-a));
        std::cout<<a<<std::endl;
    }
    return a;
}
double test_root_iterative(double q,int n, int steps){
    double root =root_iterative(q,n,steps);
    double pot_of_root = pow(root,n);
    double root_precision = q-pot_of_root;
    std::cout << "q= "<<q<<" n= "<<n<<" steps: "<<steps<<" difference:"<< root_precision<<std::endl;
    return 0;
}

int main(){
    test_root_iterative(58643,23, 10000);
}
