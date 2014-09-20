/*
  ==============================================================================

    This file was auto-generated by the Introjucer!

    It contains the basic startup code for a Juce application.

  ==============================================================================
*/

#ifndef PLUGINEDITOR_H_INCLUDED
#define PLUGINEDITOR_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


//==============================================================================
/**
*/
class MidiplugAudioProcessorEditor  : public AudioProcessorEditor,
                                      public SliderListener,
                                      public Timer
{
public:
    MidiplugAudioProcessorEditor (MidiplugAudioProcessor&);
    ~MidiplugAudioProcessorEditor();
    void timerCallback() override;
    void resized() override;
    void sliderValueChanged(Slider* slider) override;

    //==============================================================================
    // This is just a standard Juce paint method...
    void paint (Graphics& g) override;
private:
    Slider channelSlider, valueSlider;
    String displayText;
    ComboBox lafBox;
    OwnedArray<LookAndFeel> lookAndFeels;
    ScopedPointer<ResizableCornerComponent> resizer;
    ComponentBoundsConstrainer resizeLimits;
    void setupSquareLookAndFeelColors (LookAndFeel& laf);
    
    MidiplugAudioProcessor& getProcessor() const
    {
        return static_cast<MidiplugAudioProcessor&> (processor);
    }
    
};


#endif  // PLUGINEDITOR_H_INCLUDED
