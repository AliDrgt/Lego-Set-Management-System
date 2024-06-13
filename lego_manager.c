#include<stdio.h>
#include<stdlib.h>

struct Legos{
    char setName[30];
    int setNo,pieceNo,setYear;
};

struct Sets{
    struct Legos setsofLegos[20];
    int currentSetno;
};


void addNewLego(struct Sets *myCollection){
    printf("Enter set name,set no,piece no and set year\n");
    scanf("%s %d %d %d",myCollection->setsofLegos[myCollection->currentSetno].setName,
    &myCollection->setsofLegos[myCollection->currentSetno].setNo,
    &myCollection->setsofLegos[myCollection->currentSetno].pieceNo,
    &myCollection->setsofLegos[myCollection->currentSetno].setYear
    );
}


void displayLegos(struct Sets myCollection){
    for(int i=0;i<myCollection.currentSetno;i++){
        printf("%s %d %d %d\n",myCollection.setsofLegos[i].setName,
            myCollection.setsofLegos[i].setNo,
            myCollection.setsofLegos[i].pieceNo,
            myCollection.setsofLegos[i].setYear);
    }
}


void findLego(struct Sets myCollection,int setX){
    for(int i=0;i<=myCollection.currentSetno;i++){
        if(myCollection.setsofLegos[i].setNo == setX){
            printf("%s %d %d %d\n",myCollection.setsofLegos[i].setName,
                myCollection.setsofLegos[i].setNo,
                myCollection.setsofLegos[i].pieceNo,
                myCollection.setsofLegos[i].setYear);
            break;
        }

        if(i==myCollection.currentSetno){
            printf("Your set is not in the myCollectionion.\n");
        }
    }
}



int main(){
    struct Sets myCollection;
    myCollection.currentSetno = 0;
    int answer,search;

    while(1){
        printf("1--Exit \n2--Add new lego \n3--Display all sets\n4--Search for set\n");
        scanf("%d",&answer);
        if(answer==2){
            addNewLego(&myCollection);
            myCollection.currentSetno++;
        }
        if(answer==3){
            displayLegos(myCollection);
        }
        if(answer==4){
            printf("Enter set no for search\n");
            scanf("%d",&search);
            findLego(myCollection,search);
        }

        if(answer==1){
            break;
        }

    }
}
