#include "testFrame.h"
#include "testForm.h"

using namespace Tizen::Base;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;

testFrame::testFrame(void)
{
}

testFrame::~testFrame(void)
{
}

result
testFrame::OnInitializing(void)
{
	result r = E_SUCCESS;

	// Create a form
	testForm* ptestForm = new testForm();
	ptestForm->Initialize();

	// Add the form to the frame
	AddControl(ptestForm);

	// Set the current form
	SetCurrentForm(ptestForm);

	// Draw the form
	ptestForm->Invalidate(true);

	// TODO:
	// Add your initialization code here

	return r;
}

result
testFrame::OnTerminating(void)
{
	result r = E_SUCCESS;

	// TODO:
	//Add your termination code here

	return r;
}


