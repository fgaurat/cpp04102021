#include <string>
#include <list>
#include "Page.h"

using namespace std;



class Site{
    private:
        string url;
        list<Page> pages;
    public:
        Site(){
            this->url="";
        }
        Site(string url);
        Site(string url,list<Page> p);
        string getUrl(){return this->url;};
        void setUrl(string url){this->url = url;};
        int getNbPages(){return this->pages.size();};

        void addPage(const Page &p);
        list<Page> &getPages();

};