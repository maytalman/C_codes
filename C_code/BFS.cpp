#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 //BFS 
// author Muhammed Eminoðlu
// twitter => @algoritmauzmani
 
//Graf veri yapýmýzý 2 boyutlu dizide tutacaðýz
int graph[6][6];
//Düðümlerin ziyaret edilip edilmediðini tutacaðýmýz deðiþken.
bool visited[5];
 
//Kuyruk veri yapýmý baðlý listede tutacaðým için struct node oluþturdum.
struct node{
    int data;
    struct node *next;
};
 
//Kuyruðun en ön ve en arka elemanlarý için düðüm oluþturdum.
struct node* first = NULL;
struct node* last = NULL;
 
//Düðüm oluþturan fonksiyon
struct node* createNode(int x)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
 
//kuyruða eleman ekleyen fonksiyon
void enQueue(int x)
{
    struct node* newyNode = createNode(x);
    if(first == NULL)
    {
        first = newyNode;
        last = newyNode;
    }
    else
    {
        last->next = newyNode;
        last = newyNode;
    }
}
 
//kuyruktan eleman çýkaran fonksiyon
void deQueue()
{
    if(first == NULL)
    {
        printf("\n Your Queue is already empty please enqueue an item");
        return;
    }
 
    if(first->next == NULL)
    {
        first = NULL;
        last = NULL;
    }
    else
    {
        struct node* secondNode = first->next;
        free(first);
        first = secondNode;
    }
 
}
 
//kuyruk boþ mu diye kontrol eden fonksiyon
bool isEmpty()
{
    if(first == NULL)
        return true;
    else
        return false;
}
 
//kuyruðun en önündeki elemaný return eden fonksiyon
int next()
{
    return first->data;
}
 
//Temel algoritmamýz burada. Her þey buna hazýrlýktý.
void BFS(int root)
{
    int i;
    //Tüm düðümleri ilk baþta ziyaret edilmemiþ olarak set ettik.
    for(i = 0; i < 6; i++)
    {
        visited[i] = false;
    }
 
    //Baþlangýç düðümünü ziyaret edildi olarak iþaretledik ve kuyruða ekledik.
    visited[root]  = true;
    enQueue(root);
 
    //Döngümüzün temel þartý kuyruðun boþ OLMAMASI!
    while(isEmpty() == false)
    {
        //döngünün her adýmýnda root deðerine kuyruðun en önündeki elemaný atayýp çýktý veriyoruz.
        root = next();
        printf("%d ", root);
        //Sitedeki (www.algoritmauzmani.com) yazýda da belirttiðim gibi her adýmda kuyruktan eleman çýkarýyoruz
        deQueue();
 
        //Bu döngü bir düðümün ziyaret edilmemiþ komþularýný kuyruða ekliyor.
        //Burasý çok önemli if satýrýna dikkat edin.
        for( i = 0; i < 6; i++)
        {
            //Eðer bir düðüm ziyaret edilmemiþse ve aralarýnda baðlantý var ise...
            if(visited[i] == false && graph[root][i] == 1)
            {
                visited[i] = true;
                enQueue(i);
            }
        }
    }
}
 
//Text dosyasýna girdiðimiz komþuluk matrisini okuyup dizimize aktaran fonksiyon.
void readGraph()
{
    int i = 0;
    FILE *fp = fopen("matris.txt", "r");
    while(fscanf(fp, "%d %d %d %d %d %d",
                 &graph[i][0],
                 &graph[i][1],
                 &graph[i][2],
                 &graph[i][3],
                 &graph[i][4],
                 &graph[i][5]) !=EOF){
        i = i + 1;
    }
 
}
 
int main()
{
    readGraph();
    BFS(2);
    return 0;
}
