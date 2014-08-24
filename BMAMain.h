/***************************************************************
 * Name:      BMAMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2014-08-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef BMAMAIN_H
#define BMAMAIN_H

#include "BMAApp.h"
#include "GUIFrame.h"
#include "wx/ribbon/buttonbar.h"



class BMAFrame: public GUIFrame
{
public:
   void RefreshList(void);
    BMAFrame(wxFrame *frame);
    ~BMAFrame();

private:
    virtual void OnAddItem(wxRibbonButtonBarEvent& event);
    virtual void test( wxRibbonButtonBarEvent& event );
    virtual void OnQuit(wxRibbonButtonBarEvent& event);
    virtual void OnRefresh( wxRibbonButtonBarEvent& event );


};

class AddFrame: public AddItemFrame
{
public:
    AddFrame(wxFrame *aframe);
    ~AddFrame();
private:
    virtual void OnAddItem( wxCommandEvent& event );
};

#endif // BMAMAIN_H
