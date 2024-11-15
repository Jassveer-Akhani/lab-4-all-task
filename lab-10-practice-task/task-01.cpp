#include <stdio.h>
typedef struct Box {
    int items[10]; 
    int num_items; 
    struct Box* nest_box[10]; 
    int num_nested; 
}ox;
int tot_weight(Box*box){
    if (box == NULL) {
        return 0; 
    }

    int total = 0;
    for (int i = 0; i < box->num_items; i++) {
        total += box->items[i];
    }
    for (int i = 0; i < box->num_nested; i++) {
        total += tot_weight(box->nest_box[i]);
    }
    return total;
}
int main() {
    Box box1 = {{1, 2, 3}, 3, {NULL}, 0}; 
    Box box2 = {{4, 5}, 2, {&box1}, 1}; 
    Box box3 = {{}, 0, {&box1, &box2}, 2}; 
    int total = tot_weight(&box3);
    printf("Total weight of box3: %d\n", total);

    return 0;
}

