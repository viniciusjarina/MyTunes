#include "pch.h"
#include "Music.h"
#if __has_include("Music.g.cpp")
#include "Music.g.cpp"
#endif

using namespace winrt;

using Microsoft::UI::Xaml::Media::Imaging::BitmapImage;
using Microsoft::UI::Xaml::Media::ImageSource;

using namespace Windows::Foundation;

namespace winrt::MyTunes::implementation
{
    Music::Music(hstring const& albumTitle,
        hstring const& artworkURL,
        hstring const& songTitle,
        hstring const& artist
    ) :
        m_albumTitle(albumTitle),
        m_albumArtworkURL{ nullptr },
        m_songTitle(songTitle),
        m_artist(artist)
    {
        BitmapImage bitmapImage{};
        Uri uri{ artworkURL };
        bitmapImage.UriSource(uri);

        m_albumArtworkURL = bitmapImage;
    }
}
