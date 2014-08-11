/***************************************************************
 * Name:      BMAApp.cpp
 * Purpose:   Code for Application Class
 * Author:     ()
 * Created:   2014-08-11
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

IMPLEMENT_APP(BMAApp);

bool BMAApp::OnInit()
{

    BMADialog* dlg = new BMADialog(0L);
//    dlg->SetIcon(wxICON(aaaa)); // To Set App Icon
    dlg -> Show();
    return true;
}
