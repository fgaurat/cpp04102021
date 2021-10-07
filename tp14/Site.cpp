#include "Site.h"

Site::Site(string url)
{
    this->url = url;
}

Site::Site(string url,list<Page> p)
{
    this->url = url;
    this->pages = p;
}

void Site::addPage(const Page &p)
{
     this->pages.push_back(p);
}

list<Page> &Site::getPages()
{
    return this->pages;
}
