// Copyright eeGeo Ltd (2012-2014), All Rights Reserved

#include "SelectExampleMessage.h"

using namespace Examples;

SelectExampleMessage::SelectExampleMessage(Examples::AndroidExampleControllerView* pExample, const std::string& exampleName)
	: AndroidExampleMessage(pExample)
	, m_exampleName(exampleName)
{
}

bool SelectExampleMessage::Handle(AndroidExampleControllerView& dispatcher) const
{
	dispatcher.SetCurrentExampleName(m_exampleName);
	return false;
}


