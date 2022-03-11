#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 //BFS 
// author Muhammed Emino�lu
// twitter => @algoritmauzmani
 
//Graf veri yap�m�z� 2 boyutlu dizide tutaca��z
int graph[6][6];
//D���mlerin ziyaret edilip edilmedi�ini tutaca��m�z de�i�ken.
bool visited[5];
 
//Kuyruk veri yap�m� ba�l� listede tutaca��m i�in struct node olu�turdum.
struct node{
    int data;
    struct node *next;
};
 
//Kuyru�un en �n ve en arka elemanlar� i�in d���m olu�turdum.
struct node* first = NULL;
struct node* last = NULL;
 
//D���m olu�turan fonksiyon
struct node* createNode(int x)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
 
//kuyru�a eleman ekleyen fonksiyon
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
 
//kuyruktan eleman ��karan fonksiyon
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
 
//kuyruk bo� mu diye kontrol eden fonksiyon
bool isEmpty()
{
    if(first == NULL)
        return true;
    else
        return false;
}
 
//kuyru�un en �n�ndeki eleman� return eden fonksiyon
int next()
{
    return first->data;
}
 
//Temel algoritmam�z burada. Her �ey buna haz�rl�kt�.
void BFS(int root)
{
    int i;
    //T�m d���mleri ilk ba�ta ziyaret edilmemi� olarak set ettik.
    for(i = 0; i < 6; i++)
    {
        visited[i] = false;
    }
 
    //Ba�lang�� d���m�n� ziyaret edildi olarak i�aretledik ve kuyru�a ekledik.
    visited[root]  = true;
    enQueue(root);
 
    //D�ng�m�z�n temel �art� kuyru�un bo� OLMAMASI!
    while(isEmpty() == false)
    {
        //d�ng�n�n her ad�m�nda root de�erine kuyru�un en �n�ndeki eleman� atay�p ��kt� veriyoruz.
        root = next();
        printf("%d ", root);
        //Sitedeki (www.algoritmauzmani.com) yaz�da da belirtti�im gibi her ad�mda kuyruktan eleman ��kar�yoruz
        deQueue();
 
        //Bu d�ng� bir d���m�n ziyaret edilmemi� kom�ular�n� kuyru�a ekliyor.
        //Buras� �ok �nemli if sat�r�na dikkat edin.
        for( i = 0; i < 6; i++)
        {
            //E�er bir d���m ziyaret edilmemi�se ve aralar�nda ba�lant� var ise...
            if(visited[i] == false && graph[root][i] == 1)
            {
                visited[i] = true;
                enQueue(i);
            }
        }
    }
}
 
//Text dosyas�na girdi�imiz kom�uluk matrisini okuyup dizimize aktaran fonksiyon.
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
