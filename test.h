#ifndef _CP_TEST_INCLUDED_
#define _CP_TEST_INCLUDED_

#include <bits/stdc++.h>
//#pragma once

namespace CP {

template <typename T>
class Travel
{
    protected:
        std::map<std::string, std::set<int> > hotel_area;
        std::map<std::string, std::set<int> > flight_area;
        std::map<int, std::map<int, std::set<string> > > id_staying_where_on_date;
        std::map<int, std::map<int, std::set<string> > > id_flying_on_date;
        int w;
    public:
        Travel(std::vector<pair<string,vector<int>>> &hotel, std::vector<pair<string,vector<int>>> flight,int w){
            for(auto x:hotel)
                hotel_area[x.first].insert(x.second);
            for(auto x:flight)
                flight_area[x.first].insert(x.second);
            this->w = w;
        }
        void add_stay(string hotel, int date, std::vector<int> tourist){
            for(auto x:tourist){
                id_staying_where_on_date[x][date].insert(hotel);
            }
        }
        void add_passenger(string flight, int date, std::vector<int> tourist){
            for(auto x:tourist)
                id_flying_on_date[x][date].insert(flight);
        }
        bool can_get_refund(int id, string flight, int date){
            if(id_flying_on_date[id][date].find(flight) == id_flying_on_date[id][date].end()) return false; 
            std::set<int> cur_flight_area = flight_area[flight];
            std::set<int> cur_stay_area;
            for(int i = -w; i<=w; i++){
                for(auto x:id_staying_where_on_date[x][date+i]){
                    for(auto y:hotel_area[x]) cur_stay_area.insert(y);
                }
            }
            for(auto x:cur_flight_area){
                if(cur_stay_area.find(x)!=cur_stay_area.end())return true;
            }
            return false;
        }
};
}
#endif