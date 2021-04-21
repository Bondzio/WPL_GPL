# --> Nuitka <--
    http://nuitka.net/pages/overview.html
## Install Nuitka
    python3 -m pip install nuitka
## Version
    python3 -m nuitka --version
## Distribution
To distribute, build with --standalon``e option, which will not output a single executable,
but a whole folder.
Copy the resulting hello.dist folder to the other machine and run it.

You may also try --onefile which does create a single file,
but it is still experimental at this stage and wants more options
specified from you, while not allowing you easily to add missing files yet.
## Example
     python3 -m nuitka Georg_GUI.py
### start executable file from cli
    ./Georg_GUI.bin
### create application launcher
    touch filename.desktop_Georg_GUI.desktop

    [Desktop Entry]
    Version=1.0
    Name=Georg_GUI
    Comment=Georg-GUI program

    Exec=/home/nuc8/PycharmProjects/WPL_GUI/Georg/Georg_GUI.bin
    Path=/home/nuc8/PycharmProjects/WPL_GUI/Georg/
    Icon=/home/nuc8/Pictures/python_development_images/penguin.png
    Terminal=false
    Type=Application
    Categories=Utility
    Name[en_US]=filename.desktop_Georg_GUI.desktop

    copy filename.desktop_Georg_GUI.desktop to Desktop
    properties - permissions - enable allow executing file as program
# - END -