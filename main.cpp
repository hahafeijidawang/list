#include <iostream>

#include<list>


#include<algorithm>

using namespace std;

void main71(){

    list<int> l;

    for(int i = 0;i<10;i++){

        l.push_back(i);//β������Ԫ�ء�β�巨��
    }

    cout<<"list �Ĵ�С ��"<<l.size()<<endl;


   list<int>::iterator it = l.begin();

   while(it!=l.end()){


       cout<<*it<<" ";

       it++;

   }
   cout<<endl;
   //list�����������

   it = l.begin();

   it++;

   it++;

   it++;

  // it = it +5;�����������������

   l.insert(it,100);//����100 ������3��ǰ�滹�Ǻ��棿ǰ�档


   //1����1�� �����������Ǵ�0�ſ�ʼ�ġ�
   //   ��3��λ�ò��룬��3��λ�ñ�Ϊ4��λ�ã���������Ų��

   for(list<int>::iterator it = l.begin();it!=l.end();it++){


          cout<<*it<<" ";

   }



}

void main72(){


    list<int> l;

    for(int i = 0;i<10;i++){

        l.push_back(i);//β������Ԫ�ء�β�巨��
    }

    cout<<"list �Ĵ�С ��"<<l.size()<<endl;

    //l.erase(l.begin(),l.begin()+3);

   list<int>::iterator it1 = l.begin();

   list<int>::iterator it2 = l.begin();

   it2++;
   it2++;
   it2++;
   l.erase(it1,it2);//[ ) list�����ұ����䡣


   l.remove(7);//ɾ��ĳ�������ֵ��

   l.insert(l.begin(),100);//��ָ����λ�ò���100��

   for(list<int>::iterator it = l.begin();it!=l.end();it++){

       cout<<*it<<" ";

   }


}



int main()
{



   // main71();
    main72();



    return 0;
}

