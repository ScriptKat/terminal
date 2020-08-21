﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT license.

#pragma once

#include "Profiles.g.h"
#include "ObjectModel/ProfileModel.h"

namespace winrt::SettingsControl::implementation
{
    struct Profiles : ProfilesT<Profiles>
    {
        Profiles();
        Profiles(ObjectModel::ProfileModel profile);

        ObjectModel::ProfileModel ProfileModel();

    private:
        ObjectModel::ProfileModel m_profileModel{ nullptr };

    public:
        fire_and_forget BackgroundImage_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
        fire_and_forget Commandline_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
        // TODO GH#1564: Settings UI
        // This crashes on click, for some reason
        //fire_and_forget StartingDirectory_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::SettingsControl::factory_implementation
{
    BASIC_FACTORY(Profiles);
}
