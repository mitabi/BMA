/***************************************************************
 * Name:      BMAApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2014-08-19
 * Copyright:  ()
 * License:
 **************************************************************/

#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif //__BORLANDC__

#include "BMAApp.h"
#include "BMAMain.h"
#include "wx/textfile.h"
#include "wx/file.h"
#include "wx/string.h"
#include "wx/stdpaths.h"
#include "wx/msgdlg.h"

IMPLEMENT_APP(BMAApp);

void CreateBaseFile (void)
{
    wxString filename= "test.txt";
    wxTextFile data_base;
    data_base.Create(filename);
    data_base.Open(filename)  ;
    data_base.Write();
}

bool BMAApp::OnInit()
{
    BMAFrame* frame = new BMAFrame(0L);
    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    CreateBaseFile();
    return true;
}
