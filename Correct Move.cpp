------Correct Move--------
#include <iostream>
#include <typeinfo>
class coordenadas{
    public:
    int pos_x= 0;
    int pos_y= 0;
    int steps= 0;
    coordenadas* next;
    coordenadas(int a, int b){
        pos_x= a % 8;
        pos_y= int(a/8);
        steps= b;
        next= NULL;
    }
    void move(int np){
        coordenadas* new_move= new coordenadas(np, 8);
        this->next= new_move;
    }
    bool legal_pos(coordenadas reina){
        if(this->pos_x== reina.pos_x && this->pos_y== reina.pos_y){
            std::cout<< "Illegal State"<<std::endl;
            return false;
        }
        return true;
    }
    bool between(int lim_1, int lim_2, int mid){
        if ((lim_1< mid && mid-this->steps<= lim_2)|| (lim_2<=mid+this->steps && mid < lim_1)) return true;
        return false;
    }
    bool legal_move(coordenadas reina, int pos){
        reina.move(pos);
        int n_x= (reina.next)->pos_x;
        int n_y= (reina.next)->pos_y;
        if(legal_pos(*reina.next)== false ) return false;
        
        if(reina.pos_x== n_x){
            if(this->pos_x== reina.pos_x){
                if (between(reina.pos_x, n_x, this->pos_x)){
                    std::cout<<"Not Allowed move"<<std::endl;
                    return false;
                }
                else if((this->pos_y==n_y+1 ||this->pos_y==n_y-1)&& n_x== this->pos_x){
                    std::cout<<"Not Allowed move"<<std::endl;
                    return false;}
            }
            
        }
        else if(reina.pos_y== n_y){
            if(this->pos_y == reina.pos_y){
                if (between(reina.pos_y, n_y, this->pos_y)){
                    std::cout<<"Not Allowed move"<<std::endl;
                    return false;
                }
                else if((this->pos_x==n_x+1 ||this->pos_x==n_x-1)&& n_y==this->pos_y){
                    std::cout<<"Not Allowed move"<<std::endl;
                    return false;}
            }
        }
        else if(reina.pos_y!= n_y && reina.pos_x!= n_x){
            std::cout<<"Illegal Move"<<std::endl;
            return false;
        }
        std::cout<< "legal move"<<std::endl;
        return true;
    
    }
    bool stops(coordenadas reina){
        
        if((this->pos_x)%7== 0 && (this->pos_y)%7== 0 && (reina.pos_x)%5== 1 &&(reina.pos_y)%5== 1 ){
            std::cout<<" Stop "<<std::endl;
            return false;
        }
        std::cout<< "Continue"<<std::endl;
        return true;
        
    }

};
int main()
{
    int r= 56;
    int re= 48;
    int des= 49;
    coordenadas rey(r,1);
    coordenadas reina(re,8);
    rey.legal_pos(reina);
    rey.legal_move(reina,des);
    reina.move(des);
    rey.stops(*reina.next);
    return 0;
}