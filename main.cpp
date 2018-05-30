#include <iostream>

#include<list>


#include<algorithm>

using namespace std;

void main71(){

    list<int> l;

    for(int i = 0;i<10;i++){

        l.push_back(i);//尾部插入元素。尾插法。
    }

    cout<<"list 的大小 ："<<l.size()<<endl;


   list<int>::iterator it = l.begin();

   while(it!=l.end()){


       cout<<*it<<" ";

       it++;

   }
   cout<<endl;
   //list不能随机访问

   it = l.begin();

   it++;

   it++;

   it++;

  // it = it +5;不能随机访问容器。

   l.insert(it,100);//请问100 插入在3的前面还是后面？前面。


   //1结论1： 链表结点的序号是从0号开始的。
   //   在3号位置插入，则3号位置变为4号位置，依次往后挪。

   for(list<int>::iterator it = l.begin();it!=l.end();it++){


          cout<<*it<<" ";

   }



}

void main72(){


    list<int> l;

    for(int i = 0;i<10;i++){

        l.push_back(i);//尾部插入元素。尾插法。
    }

    cout<<"list 的大小 ："<<l.size()<<endl;

    //l.erase(l.begin(),l.begin()+3);

   list<int>::iterator it1 = l.begin();

   list<int>::iterator it2 = l.begin();

   it2++;
   it2++;
   it2++;
   l.erase(it1,it2);//[ ) list是左开右闭区间。


   l.remove(7);//删除某个具体的值。

   l.insert(l.begin(),100);//在指定的位置插入100，

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

