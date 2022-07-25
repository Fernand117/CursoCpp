#pragma once

#include "LoginPage.g.h"

namespace winrt::SistemaUno::implementation
{
    struct LoginPage : LoginPageT<LoginPage>
    {
        LoginPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::SistemaUno::factory_implementation
{
    struct LoginPage : LoginPageT<LoginPage, implementation::LoginPage>
    {
    };
}
