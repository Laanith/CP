# File name: OpenCPDirectoryInVSCode.ps1

# Define the directory path
$directoryPath = "D:\Code\CP"

# Check if the directory exists
if (Test-Path $directoryPath -PathType Container) {
    # Open the directory in Visual Studio Code
    code $directoryPath
} else {
    Write-Host "Directory does not exist: $directoryPath"
}
