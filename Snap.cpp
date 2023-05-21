-------Snap--------
#include <iostream>
#include<stack>
#include<queue>
void fill(std:: queue<char> *to_fill, std::string *input){
    std::string::iterator it;
    for(it= (*input).begin(); (it)!= (*input).end(); it++){
        to_fill->push(*it);}
}

void print_cola(std::queue<char> to_print){
    while(!to_print.empty()){
        std::cout<<to_print.front()<<" ";
        to_print.pop();
    }
}
void Snap(std::queue<char> Jane, std::queue <char> John){
    std::queue<char> J_a;
    std::queue<char> J_h;
    std::queue<char> vacia;
    bool win= false;
    while(win== false){
        J_a.push(Jane.front()); 
        J_h.push(John.front());
        if(Jane.front()== John.front()){
            if(random()/141%2== 0){
                std::cout<< "Jane Snaps"<<std::endl;
                while(!J_h.empty()){
                    J_a.push(J_h.front());
                    J_h.pop();}
            print_cola(J_a);
            }else {
                std::cout<< "John Snaps"<<std::endl;
                while(!J_a.empty()){
                    J_h.push(J_a.front());
                    J_a.pop();}
                print_cola(J_h);
            }
            
        }
        Jane.pop();
        John.pop();
        if(John.empty()== true){
            if(J_h.empty()== true) {
                std::cout<< "Jane wins"<<std::endl;
                break;
            }
            else { 
                John= J_h;
                J_h= vacia;
            }
        }
        if (Jane.empty()== true){
            if(J_a.empty()== true){
            std::cout<< "John wins"<<std::endl;
                break;
            }else {
                Jane= J_a;
                J_a= vacia;
            }
        }
}
}
int main()
{
    std::queue <char> Jane;
    std::queue <char> John;
    std::queue <char> vacia;
    std::string input_1= "ABCDA";
    std::string input_2= "CBADC";
    fill(&Jane, &input_1);
    fill(&John, &input_2);
    Snap(Jane, John);
    return 0;
}