/**
 * @file calculation_canvas.h
 * @author Shonasir Alimdjanov (alimdjanov.ss@gmail.com)
 * @brief App initialization file
 * @version 0.1
 * @date 2024-01-18
 *
 * @copyright Copyright (c) 2024
 *
 */

#pragma once

#include <wx/wx.h>
#include <wx/app.h>

enum
{
    ID_Hello = 1
};

class MainFrame : public wxFrame
{
public:
    /**
     * @brief Construct a new Main Frame object
     *
     */
    MainFrame();

private:
    /**
     * @brief Placeholder menu bar command. Will be removed once app is
     * implemented and menu bar elements are added. For now, this just
     * prints a string to the app's console.
     *
     * @param event Command event (Cmd+H)
     */
    void OnHello(wxCommandEvent &event);

    /**
     * @brief Quits the application and closes the window
     *
     * @param event Command event (Cmd+Q)
     */
    void OnExit(wxCommandEvent &event);

    /**
     * @brief Shows a brief description of the app
     *
     * @param event Click on "About"
     */
    void OnAbout(wxCommandEvent &event);
};