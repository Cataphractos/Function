void rd(int r, struct cell field[X][Y], int x, int y){

    int a;
    int counter;
    counter=0;

    while (counter != X*Y) {
        a=rand()%100;
        if (a>r){
            field[x][y].live=0;
            x++;
            if (x==10){
                x=0;
                y++;

            }
        }
        else if (a <= r){
            field[x][y].live=1;
            x++;
            if (x==10){
                x=0;
                y++;

            }}
        counter++;
    };
}