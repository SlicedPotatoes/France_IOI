#include <iostream>
#include <algorithm>

using namespace std;
const int MAX_LENGTH = 100 * 1000;
const int MAX_ID = 65 * 1000;

// Utilisation de tableau de boolean pour facilité la recherche de si un id est amis / pas amis
bool myFriends[MAX_ID];
bool notMyFriendsRegistre[MAX_ID];

int relations[MAX_LENGTH][2];
int lengthRel = 0;

int main()
{
  ios::sync_with_stdio(false);
  int myId, length;
  cin >> myId >> length;
  // Remplir le registre "MyFriends" et relations
  for (int i = 0; i < length; i++)
  {
    int id1, id2;
    cin >> id1 >> id2;
    if (id1 == myId || id2 == myId)
    {
      myFriends[id1 == myId ? id2 : id1] = true;
    }
    else
    {
      relations[lengthRel][0] = id1;
      relations[lengthRel][1] = id2;
      lengthRel++;
    }
  }
  int count = 0;
  for (int i = 0; i < lengthRel; i++)
  {
    int id1 = relations[i][0], id2 = relations[i][1];

    bool id1IsMyFriend = myFriends[id1];
    bool id2IsMyFriend = myFriends[id2];
    if (id1IsMyFriend && !id2IsMyFriend && !notMyFriendsRegistre[id2])
    {
      count++;
      notMyFriendsRegistre[id2] = true;
    }
    else if (id2IsMyFriend && !id1IsMyFriend && !notMyFriendsRegistre[id1])
    {
      count++;
      notMyFriendsRegistre[id1] = true;
    }
  }
  cout << count;
}