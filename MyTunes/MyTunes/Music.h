#pragma once

#include "Music.g.h"

namespace winrt::MyTunes::implementation
{
    struct Music : MusicT<Music>
    {
        Music(): m_albumArtworkURL { nullptr }{

        }

        Music(hstring const& albumTitle,
            hstring const& artworkURL,
            hstring const& songTitle,
            hstring const& artist);

        hstring AlbumTitle() const
        {
            return m_albumTitle;
        }

        void AlbumTitle(const hstring& value)
        {
            m_albumTitle = value;
        }

        winrt::Microsoft::UI::Xaml::Media::ImageSource AlbumArtworkURL() const
        {
            return m_albumArtworkURL;
        }

        void AlbumArtworkURL(const winrt::Microsoft::UI::Xaml::Media::ImageSource& value)
        {
            m_albumArtworkURL = value;
        }

        void SongTitle(const hstring& value)
        {
            m_songTitle = value;
        }

        hstring SongTitle() const
        {
            return m_songTitle;
        }

        void Artist(const hstring& value)
        {
            m_artist = value;
        }

        hstring Artist() const
        {
            return m_artist;
        }

    private:
        hstring m_albumTitle;
        winrt::Microsoft::UI::Xaml::Media::ImageSource m_albumArtworkURL;
        hstring m_songTitle;
        hstring m_artist;
    };
}

namespace winrt::MyTunes::factory_implementation
{
    struct Music : MusicT<Music, implementation::Music>
    {
    };
}
