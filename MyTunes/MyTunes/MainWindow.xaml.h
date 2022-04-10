#pragma once
#include "MainWindow.g.h"

namespace winrt::MyTunes::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable> Musics() const
        {
            return m_musics;
        }

        void RaisePropertyChanged(hstring const&);
        event<Microsoft::UI::Xaml::Data::PropertyChangedEventHandler> m_propertyChanged;

    private:
        Windows::Foundation::Collections::IVector<IInspectable> m_musics{ nullptr };

        void LoadMusicList();
    };
}

namespace winrt::MyTunes::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
