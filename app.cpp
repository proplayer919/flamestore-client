// write code to show a window
// 1. include the header file
#include <windows.h>
// 2. define the window procedure
LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch (msg)
    {
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    }
    return DefWindowProc(hwnd, msg, wParam, lParam);
}
// 3. define the entry point
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    // 4. register the window class
    WNDCLASS wc = { };
    wc.lpfnWndProc = WndProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = L"Window Class Name";
    RegisterClass(&wc);
    // 5. create the window
    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        L"Window Class Name",           // Window class
        L"Window Title",                // Window text
        WS_OVERLAPPEDWINDOW,            // Window style
        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,
        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
    );
    if (hwnd == NULL)
    {
        return 0;
    }
    // 6. display the window
    ShowWindow(hwnd, nCmdShow);
    // 7. the message loop
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

// how do i run this code?
// 1. create a new project
// 2. add a new file
// 3. name the file app.cpp
// 4. copy and paste the code above
// 5. build and run the project
// how to build and run the project?
// 1. build the project
// 2. run the project
// how to build the project in visual studio code
// 1. press ctrl + shift + b
// 2. select the build task
// how to run the project in visual studio code
// 1. press f5
// 2. select the run task
// what build task should i select?
// 1. select the build task for your operating system
// 2. for windows, select the build task for windows
// 3. for linux, select the build task for linux
