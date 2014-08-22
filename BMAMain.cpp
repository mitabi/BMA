/***************************************************************
 * Name:      BMAMain.cpp
 * Purpose:   Code for Application Frame
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

#include "BMAMain.h"
#include "wx/msgdlg.h"
#include "sqlite.h"

//helper functions
enum wxbuildinfoformat
{
    short_f, long_f
};

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
        {
#if defined(__WXMSW__)
            wxbuild << _T("-Windows");
#elif defined(__WXMAC__)
            wxbuild << _T("-Mac");
#elif defined(__UNIX__)
            wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
            wxbuild << _T("-Unicode build");
#else
            wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
        }

    return wxbuild;
}

BMAFrame::BMAFrame(wxFrame *frame)
    : GUIFrame(frame)
{
#if wxUSE_STATUSBAR
    statusBar->SetStatusText(_("Hello Code::Blocks user!"), 0);
    statusBar->SetStatusText(wxbuildinfo(short_f), 1);
#endif
}

BMAFrame::~BMAFrame()
{
}

AddFrame::AddFrame(wxFrame *aframe)
    : AddItemFrame(aframe)
{
}

AddFrame::~AddFrame()
{
}




void BMAFrame::OnAddItem(wxRibbonButtonBarEvent& event)
{

    AddFrame *aframe = new AddFrame(0L);
    aframe->SetIcon(wxICON(aaaa)); // To Set App Icon
    aframe -> Show();
}

void AddFrame::OnAddItem(wxCommandEvent& event )
{
    wxSQLite3Database* db = initDB();
    wxSQLite3Transaction t(db);
    wxDateTime weightDate = DateItem->GetValue();
    wxString strdate = weightDate.Format(wxT("%d-%m-%y"), wxDateTime::CET );
    wxString strvalue = weightValue->GetValue();

    db->ExecuteUpdate(wxT("INSERT INTO Data (date,weight) VALUES ('")+ strdate + wxT("',")+ strvalue +wxT(")"));
    t.Commit();
}

void BMAFrame::OnQuit(wxRibbonButtonBarEvent& event)
{
    Destroy();
}

void BMAFrame::test( wxRibbonButtonBarEvent& event )
{

}
