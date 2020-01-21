#include <iostream>
using namespace std;
typedef struct node {
int data;
node* next;
};
int main()
{
  int kontrol = 10;
  int dizi[3] = { 2,2,2 }; //son 3 elemanı dizide inceleyeceğiz
  int z;                  //1 veya 0 koymak başlangıcı bozardı bu yüzden 2 kullandık.
  node* root = (node*)malloc(sizeof(node));
  node* temp = root;
  temp->data = NULL;
  temp->next = (node*)malloc(sizeof(node));
  temp = root;
  for (int i =0 ;;i++)
  {
    cout << "x'i giriniz:";
    int x;
    cin >> x;
    int giris = 0;
    if(x==1)
      {
        giris = 1;
      }
    else if (x == 0)
    //if elseif else yapısı sadece 0 veya 1 girilsin diye yapıldı
    {
      giris = 1;
    }
    else
    {
      giris = 0;
    }
    if (giris == 1)
    {
      dizi[2] = dizi[1];
      dizi[1] = dizi[0];
      dizi[0] = x;
      temp = root;
      for (int y = 0; y < i; y++)
      {
        temp = temp->next;
      }
      temp->data = x;
        //diziyi yazmak için bağlı liste kullandık.
      temp->next = (node*)malloc(sizeof(node));
      temp = temp->next;
      temp->data = NULL;
        //011 yakalayıp 1 çıkışı ver
      if (dizi[0] == 1 && dizi[1] == 1 && dizi[2] == 0)
      {
        z = 1;
        cout << "z: " << z << endl;
      }
      else
      {
        z = 0;
        cout << "z: " << z << endl;
      }
      cout << "Dizi:";
      temp = root;
      for (int j=0; j<=i ; j++)
      {
        cout << temp->data;
        temp = temp->next;
      }
      cout << endl;
        //100 yakalayınca çıkış
      if (dizi[0] == 0 && dizi[1] == 0 && dizi[2] == 1)
      {
        cout << endl;
        cout << "100 dizisi yakalandi. Makine sonlandirildi.";
        return 0;
      }
      cout << endl;
      }
      else
      {
        cout << "X sadece 0 ya da 1 olabilir!" << endl;
        i = i - 1;
     }
  }
}
