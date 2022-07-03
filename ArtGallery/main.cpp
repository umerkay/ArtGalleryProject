#include "Auth.h"
#include "Home.h"

Gallery* GalleryApp;

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main()
//void main(array<String^>^ args)
{
	GalleryApp = new Gallery;
	GalleryApp->loadData();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ArtGallery::Auth AuthForm;
	AuthForm.setDataStore(GalleryApp);
	ArtGallery::Home HomeForm;
	HomeForm.setDataStore(GalleryApp);

	if (GalleryApp->getUserHasAuthenticated() == false) {
		Application::Run(% AuthForm);
	}

	if (GalleryApp->getUserHasAuthenticated() == true) {
		Application::Run(% HomeForm);
	}

	GalleryApp->closedCallback();
}