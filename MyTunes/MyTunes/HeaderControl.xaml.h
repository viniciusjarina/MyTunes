#pragma once

#include "winrt/Microsoft.UI.Xaml.h"
#include "winrt/Microsoft.UI.Xaml.Markup.h"
#include "winrt/Microsoft.UI.Xaml.Controls.Primitives.h"
#include "HeaderControl.g.h"

namespace winrt::MyTunes::implementation
{
    struct HeaderControl : HeaderControlT<HeaderControl>
    {
        HeaderControl();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void myButton_Click(Windows::Foundation::IInspectable const& sender, Microsoft::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::MyTunes::factory_implementation
{
    struct HeaderControl : HeaderControlT<HeaderControl, implementation::HeaderControl>
    {
    };
}
