/*
    L'objectif de ce problème est de gérer le stock d'un distributeur de produits.
    On initialise le programme avec le nombre de distributeurs et le nombre d'opérations que l'on va effectuer.

    Pour chaque opération, on entre l'ID du distributeur, la quantité de l'opération, et une date de péremption.
    Cette date est égale à 0 si l'on effectue une vente
    sinon elle représente la date de péremption si l'on ajoute un élément au distributeur, au format aaaammdd.

    À la fin des opérations, pour chaque distributeur, on doit afficher la date de péremption la plus petite.
*/
#include <cmath>
#include <set>
#include <stdio.h>

using namespace std;

// Structure permettant de stocker un élément de la queue
struct Element
{
    int value;     // date de péremption
    int qty;       // Quantité associée à l'élément
    Element *next; // Pointeur vers l'élément suivant dans la queue
};

// Implémentation d'une queue avec la possibilité de récupérer l'élément le plus petit
class Queue
{
  public:
    Queue()
    {
        this->head = nullptr;
        this->tail = nullptr;
    };
    // Ajoute un élément à la queue
    void add(int value, int qty)
    {
        Element *e = new Element{value, qty, nullptr};
        if (this->head == nullptr)
        {
            this->head = e;
            this->tail = e;
        }
        else
        {
            this->tail->next = e;
            this->tail = e;
        }
    }
    // Supprime un élément de la tête de la queue
    void pop()
    {
        if (this->head->qty > 1)
        {
            this->head->qty--;
        }
        else
        {
            Element *ptrHead = this->head;
            this->head = this->head->next;
            delete ptrHead;
        }
    }
    // Récupère la date de péremption la plus petite dans la queue
    int getMinDate()
    {
        if (this->isEmpty())
        {
            return 0;
        }
        int minElement = this->head->value;
        while (!this->isEmpty())
        {
            minElement = min(minElement, this->head->value);
            this->pop();
        }
        return minElement;
    }
    // Vérifie si la queue est vide
    bool isEmpty()
    {
        return this->head == nullptr;
    }

  private:
    Element *head;
    Element *tail;
};

const int MAX_DISTRIBUTEURS = 20000 + 1;

int nbDistributeurs;
int nbOperations;

Queue distributeurs[MAX_DISTRIBUTEURS];

int main()
{
    scanf("%d", &nbDistributeurs);
    scanf("%d", &nbOperations);

    for (int i = 0; i < nbOperations; i++)
    {
        int id, qty, date;
        scanf("%d", &id);
        scanf("%d", &qty);
        scanf("%d", &date);
        if (date == 0)
        {
            qty = abs(qty);
            for (int j = 0; j < qty; j++)
            {
                distributeurs[id].pop();
            }
        }
        else
        {
            distributeurs[id].add(date, qty);
        }
    }

    for (int i = 1; i <= nbDistributeurs; i++)
    {
        printf("%d\n", distributeurs[i].getMinDate());
    }
}