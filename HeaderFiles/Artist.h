#pragma once
#include "../Template/LinkedList.h"
// FORWARD DECLARATION
class Edge;
class Track;
class TrackHashTable;

class Artist
{
public:
    std::string name;
    LinkedList_<Track> *SongsList;
    LinkedList_<Edge> *CollabList;
    // FROM NXT NODE WE WILL SEE ALL THE TRACKS
    Artist();
    Artist(std::string);
    void trackHandler(Track *); // WILL BE CALLED BY ARTSITHASHTABLE FOR ADDING TRACK WHILE ITS CREATION
    bool operator==(Artist);
};
