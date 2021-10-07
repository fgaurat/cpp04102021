#include<string>

#pragma once

using namespace std;

class Page
{
    private:
        string url;
        string titre;
    public:
        Page(){
            this->url="";
            this->titre="";
        }

        Page(string url,string titre){
            this->url=url;
            this->titre=titre;
        }

        string getUrl() const{
            return this->url;
        }

        void setUrl(string url){
            this->url = url;
        }

        string getTitre(){
            return this->titre;
        }

        void setTitre(string titre){
            this->titre = titre;
        }
};