/*
  ==============================================================================

    NumericalLabel.h
    Created: 29 Jun 2022 9:48:54pm
    Author:  robert

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

class NumericalLabel : public juce::Label
{
public:
    void editorShown(juce::TextEditor* editor) override;
};