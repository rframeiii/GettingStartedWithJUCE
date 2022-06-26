#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
    : button1("Click"), label1("label", "Info")
{
    slider1.setRange(0.0, 100.0);
    addAndMakeVisible(&button1);
    addAndMakeVisible(&slider1);
    addAndMakeVisible(&label1);
    setSize (200, 100);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

    // g.setFont (juce::Font (16.0f));
    // g.setColour (juce::Colours::white);
    // g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centred, true);
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
    button1.setBoundsRelative(0.05, 0.05, 0.90, 0.25);
    slider1.setBoundsRelative(0.05, 0.35, 0.90, 0.25);
    label1.setBoundsRelative(0.05, 0.65, 0.90, 0.25);
}
