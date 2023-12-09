// file: album.c
/*********************************
Final Exam
Name: Alex Ambrioso
Course: COP 5227
Instructor:  Dr. Gaspar
**********************************/


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/*
   A Track represents the information about a single track of
   a musical album.
*/
struct track {
   char* name; // Title of the track
   int duration; // Duration of the track, in minutes
}; 
typedef struct track Track;


/*
   An Album represents the information about all the tracks 
   comprising a musical album.
*/
struct album {
   Track* tracks; 
   int numberOfTracks; // current # of tracks stored in this album
   int maxNumberOfTracks; // maximum # of tracks the album can store
};

#define MAXSIZE 50
typedef struct album Album;

Track* tracks_allocate(int size);
/* This function returns the address of a dynamically allocated
   array of Track. The size of this array is specified by the 
   parameter size. Each of the Track in the array has a default 
   duration of 0 minutes and a name set to NULL 
*/

void tracks_deallocate(Track* ptr, int numberOfTracks);
/* This function deallocates the whole dynamical array of Track
   but also makes sure that every Track had first its name field 
   deallocated (if it is not NULL).
*/

Album* album_allocate(int size);
/* This function returns the address of a dynamically allocated 
   Environment that has its maxNumberOfTracks field initialized 
   to the value of the parameter size, and its tracks field 
   initialized with the help of the tracks_allocate function 
   that was previously defined. 
*/ 

void album_deallocate(Album* ptr);
/* This function deallocates the Album structure located at the 
   address specified by the parameter ptr. To this end, it also 
   makes use of the tracks_deallocate function previously defined. 
*/

void album_add(Album* ptr, char* trackName, int trackDuration);
/* This function adds information about a new Track of name 
   trackName and duration trackDuration to an already allocated 
   Album referred to by ptr. To store the duration and name, 
   you will use the first element of the array referred to by 
   the field tracks that has a NULL value for its name. 
   If no such element is available, which also means 
   numberOfTracks has reached maxNumberOfTracks, simply do 
   nothing and return. 
   Please note that you will use the standard strdup method 
   in order to duplicate trackName and assign the address of 
   this duplicate to the field name in your structure.
*/

void album_display(Album* ptr);
/* This function displays all the information stored in an 
   Album which address is specified by the parameter ptr. 
   An example of the output is given in the instructions of
   this final exam. 
*/





int main(){
   
	Track * myTracks = tracks_allocate(10);


   	Album* ptr = album_allocate(MAXSIZE); 

   


   album_add(ptr, "The ballad of Bilbo Baggins", 4);
   album_add(ptr, "Where the Eagles do not fly", 5);
   album_add(ptr, "Another Hobbit bites the dust", 8);
   album_add(ptr, "One Precious to rule them all", 20);
   album_add(ptr, "One does not simply sings about LOTR", 6);
   album_add(ptr, "Piano Man", 3);
   album_display(ptr);
   album_deallocate(ptr);
   return EXIT_SUCCESS;
}

Track* tracks_allocate(int size){
	Track * tmp = NULL;
	tmp = (Track*)malloc(sizeof(Track)*size);
	for (int i = 0; i < size; i++){
		tmp[i].name = NULL;
		tmp[i].duration = 0;		
	}
	return tmp;
}

void tracks_deallocate(Track* ptr, int numberOfTracks) {
	//for (int i = 0; i < numberOfTracks; i++){
		//ptr[i].name = NULL;
		free(ptr);		
	//}
}
 
Album* album_allocate(int size){
	Album* tmp = NULL;
	tmp = (Album*)malloc(sizeof(Album));
	tmp->tracks = tracks_allocate(size);
	tmp->maxNumberOfTracks = MAXSIZE;
	tmp->numberOfTracks = 0;
	return tmp;
} 

void album_deallocate(Album* ptr){
	free(ptr);
}

void album_add(Album* ptr, char* trackName, int trackDuration){
	// Problem:  Need to add name and duration to each element of the track array
	// Need to incorporate the number of tracks
	int num = ptr->numberOfTracks; 
	ptr->tracks[num].name = trackName;
	ptr->tracks[num].duration = trackDuration;
	ptr->numberOfTracks += 1; 

}

void album_display(Album* ptr){
	printf("Displaying Album with %d Titles:\n", ptr->numberOfTracks );
	for (int i = 0; i < ptr->numberOfTracks; i++){
		printf("#%d\t(%d minutes)\t\"%s\"\n", i+1, ptr->tracks[i].duration, ptr->tracks[i].name);
	}

}