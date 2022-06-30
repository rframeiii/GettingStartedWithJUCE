/*
  ==============================================================================

    NumericalLabel.cpp
    Created: 29 Jun 2022 9:48:54pm
    Author:  robert

  ==============================================================================
*/

#include "NumericalLabel.h"

void NumericalLabel::editorShown(juce::TextEditor* editor)
{
    editor->setInputRestrictions(0, "-0123456789.");
}