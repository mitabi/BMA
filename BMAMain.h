/***************************************************************
 * Name:      BMAMain.h
 * Purpose:   Defines Application Frame
 * Author:     ()
 * Created:   2014-08-11
 * Copyright:  ()
 * License:
 **************************************************************/

#ifndef BMAMAIN_H
#define BMAMAIN_H



#include "BMAApp.h"



#include "GUIDialog.h"

class BMADialog : public GUIDialog
{
public:
    BMADialog(wxDialog *dlg);
    ~BMADialog();
private:
    virtual void OnClose(wxCloseEvent& event);
    virtual void OnQuit( wxRibbonButtonBarEvent& event ) ;
};
#endif // BMAMAIN_H
