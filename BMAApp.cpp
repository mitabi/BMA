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
#include "wx/wxsqlite3.h"

IMPLEMENT_APP(BMAApp);

bool BMAApp::OnInit()
{

    BMAFrame* frame = new BMAFrame(0L);

    frame->SetIcon(wxICON(aaaa)); // To Set App Icon
    frame->Show();
    return true;
}
