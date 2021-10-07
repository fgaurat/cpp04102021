#include<iostream>
#include "Site.h"
#include "Page.h"

using namespace std;

int main(void)
{
    Page p1("La page p1","http://site.com/page_1");
    Page p2("La page p2","http://site.com/page_2");
    Page p3("La page p3","http://site.com/page_3");
    Page p4("La page p4","http://site.com/page_4");
    Page p5("La page p5","http://site.com/page_5"); 
    Page p6("La page p6","http://site.com/page_6");

    list<Page> pages;

    pages.push_back(p1);
    pages.push_back(p2);
    pages.push_back(p2);
    pages.push_back(p3);
    pages.push_back(p4);

    Site leSite("http://site.com",pages);
    cout<<leSite.getUrl()<<endl;

    // leSite.addPage(p1);
    // leSite.addPage(p2);
    // leSite.addPage(p3);
    // leSite.addPage(p4);
    // leSite.addPage(p5);

    


    // Site leSite("http://site.com",[]);
    // leSite.addPage(p1);
    // leSite.addPages(p1);


    for(const Page p:leSite.getPages())
    {   
        cout<<p.getUrl()<<endl;
    }


}