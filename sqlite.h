#ifndef SQLITE_H_INCLUDED
#define SQLITE_H_INCLUDED

#include "wx/wxsqlite3.h"

wxSQLite3Database* initDB()

{
    wxString testDBName = wxGetCwd() + wxT("/base.db");
    wxSQLite3Database* db = new wxSQLite3Database();

    if (wxFileExists(testDBName))
        {
            db->InitializeSQLite();
            db->Open(testDBName,wxEmptyString,WXSQLITE_OPEN_CREATE|WXSQLITE_OPEN_READWRITE);
        }
    else
        {
            db->InitializeSQLite();
            db->Open(testDBName,wxEmptyString,WXSQLITE_OPEN_CREATE|WXSQLITE_OPEN_READWRITE);
            db->ExecuteUpdate(wxT("CREATE TABLE Data(id INTEGER, date TEXT, weight REAL,PRIMARY KEY(id ASC))"));
        }
    return db;
}


#endif // SQLITE_H_INCLUDED
