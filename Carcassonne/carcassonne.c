#include "carcassonne.h"


extern bool controlla_casella(const struct casella *c, const struct casella *tabellone, size_t dim){
    bool congruent = false;
    for(int i=0; i<dim;i++){
        if(tabellone[i].x == c->x && tabellone[i].y == c->y){
            return false;
        }
        if(tabellone[i].x - 1 == c->x && tabellone[i].y  == c->y){
            if(tabellone[i].lati[1] == c->lati[3])
                congruent = true;
            else
                return false;
        }
        if(tabellone[i].x + 1 == c->x && tabellone[i].y  == c->y){
            if(tabellone[i].lati[3] == c->lati[1])
                congruent = true;
            else
                return false;
        }
        if(tabellone[i].y - 1 == c->y && tabellone[i].x  == c->x){
            if(tabellone[i].lati[0] == c->lati[2])
                congruent = true;
            else
                return false;
        }
        if(tabellone[i].y + 1 == c->y && tabellone[i].x  == c->x){
            if(tabellone[i].lati[2] == c->lati[0])
                congruent = true;
            else
                return false;
        }
        if(congruent)
            return true;
    }
    return false;
}
/*
int main(void){
    struct casella x={1,1,{'s','f','f','c'}};
    struct casella *px=&x;
    //x,y, ( field, street, city)
    struct casella tabellone[3]={{0,0,{'f','f','f','f'}},{0,1,{'s','s','s','f'}},{1,0,{'c','c','f','c'}}};
    struct casella *ptab=tabellone;
    bool test = controlla_casella(px,ptab,3);
    return 0;
}
*/