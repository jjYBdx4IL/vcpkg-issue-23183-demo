
#include <wx/wx.h>

class MyApp : public wxApp
{
public:
    virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    if (!wxApp::OnInit())
        return false;
    wxLogMessage("success");
    return true;
}
