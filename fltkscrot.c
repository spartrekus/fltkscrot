

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <FL/Fl.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>

int gameover = 0;

void copy_on( Fl_Widget* obj , void* )
{
   //Fl_Button* button=(Fl_Button*)obj;
   //const char* temp;  
   //  (  (Fl_Output*)(button->parent()->child(3))  )->value(temp);
   printf( "Click on Button ON ...\n" );
   printf( "Scrot...\n" );
    system(  "  scrot '%Y%m%d%H%M%S-$wx$h-screenshot.png'    " ) ; 
}
 

void copy_off( Fl_Widget* obj , void* )
{
   //Fl_Button* button=(Fl_Button*)obj;
   //const char* temp;  
   //  (  (Fl_Output*)(button->parent()->child(3))  )->value(temp);
   printf( "Hello...\n" );
   printf( "Click on Button OFF ...\n" );
   gameover = 1; 
}

int main()
{

  Fl_Window window(240, 160, "FLTK Scrot");
  //Fl_Box box(0,0,200,200,"Hey, I mean, Hello, World!");
  // 120 is y and 20 is x 
  Fl_Box *box = new Fl_Box( 20, 80, 160 , 40 ,"FLTK Screenshot" );

  box->box(FL_UP_BOX);
  box->labelsize(12);
  box->labelfont(FL_BOLD+FL_ITALIC);
  box->labeltype(FL_SHADOW_LABEL);
  //window->end();
  // 2. y
  Fl_Button* but1 = new Fl_Button( 20, 20,  100,  40, "SCROT" );
  Fl_Button* but2 = new Fl_Button( 120, 20, 100, 40, "EXIT" );

  but1->callback( (Fl_Callback*) copy_on );
  but2->callback( (Fl_Callback*) copy_off );
   
  window.show();

  return Fl::run();
}


