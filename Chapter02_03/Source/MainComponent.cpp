#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent() :
    button1("Zero Slider"),
    slider1(juce::Slider::LinearHorizontal, juce::Slider::NoTextBox)
{
    slider1.setRange(0.0, 100.0);
    label1.setEditable(true);

    slider1.addListener(this);
    button1.addListener(this);
    label1.addListener(this);

    slider1.setValue(100.0, juce::sendNotification);

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

void MainComponent::buttonClicked(juce::Button* button)
{
    if(&button1 == button)
    {
        slider1.setValue(0.0, juce::sendNotification);
    }
}

void MainComponent::sliderValueChanged(juce::Slider* slider)
{
    if(&slider1 == slider)
    {
        label1.setText(juce::String(slider1.getValue()), juce::sendNotification);
    }
}

void MainComponent::labelTextChanged(juce::Label* label)
{
    if(&label1 == label)
    {
        slider1.setValue(label1.getText().getDoubleValue(), juce::sendNotification);

        label1.setText(juce::String(slider1.getValue()), juce::dontSendNotification);
    }
}
