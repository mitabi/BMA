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
#include "wx/debug.h"

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
    RefreshList();
}

void AddFrame::OnAddItem(wxCommandEvent& event )
{
    wxSQLite3Database* db = initDB();
    wxSQLite3Transaction t(db);
    wxDateTime weightDate = DateItem->GetValue();
    wxString strdate = weightDate.Format(wxT("%Y-%m-%d"), wxDateTime::CET );
    wxString strvalue = weightValue->GetValue();

    db->ExecuteUpdate(wxT("INSERT INTO Data (date,weight) VALUES ('")+ strdate
                      + wxT("',")+ strvalue +wxT(")"));
    t.Commit();
    Destroy();

}

void BMAFrame::OnQuit(wxRibbonButtonBarEvent& event)
{
    Destroy();
}

void BMAFrame::OnRefresh(wxRibbonButtonBarEvent& event)
{
    RefreshList();
}

void BMAFrame::RefreshList(void)
{
    wxSQLite3Database* db = initDB();
    wxSQLite3ResultSet setdate = db->ExecuteQuery(wxT("SELECT date, weight FROM Data"));

    int count = 0;
    wxVector<wxVariant> data;

    m_TableData->DeleteAllItems() ;
    while (setdate.NextRow())
        {
            wxString s1 = setdate.GetAsString(0);
            wxString s2 = setdate.GetAsString(1);
            count++;

            data.push_back(s1);
            data.push_back(s2);

            m_TableData->AppendItem( data );
            data.clear();
        }
    setdate.Finalize();
}

void BMAFrame::test( wxRibbonButtonBarEvent& event )
{

}
