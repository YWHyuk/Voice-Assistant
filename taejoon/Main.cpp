#pragma once
#include "Controller.h"
#include <nana/gui.hpp>
#include <nana/gui/widgets/label.hpp>
#include <nana/gui/widgets/button.hpp>

int main()
{
	//All names of Nana is in the namespace nana;
	using namespace nana;
	//Define a form object, class form will create a window
	//when a form instance is created.
	//The new window default visibility is false.
	form fm;
	//Define a label on the fm(form) with a specified area,
	//and set the caption.
	label lb{ fm, rectangle{ 10, 10, 100, 100 } };
	lb.caption("Hello, world!");
	//Expose the form.
	fm.show();
	//Pass the control of the application to Nana's event
	//service. It blocks the execution for dispatching user
	//input until the form is closed.
	exec();
}