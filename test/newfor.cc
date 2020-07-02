#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	const std::string homeDir = getenv("HOME");
    const std::string bashrcPath = (homeDir[homeDir.size() - 1] == '/')? homeDir + ".bashrc" : homeDir + "/.bashrc";
    const std::vector<std::string> paths =
    {
        "/etc/hosts", "/etc/resolv.conf", bashrcPath, "/bin/sh"  // why use these examples??
    };

    for(const std::string& path : paths)
	{
		cout << path << endl; 
	}
}
