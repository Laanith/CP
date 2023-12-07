Get-ChildItem -Path . -Recurse -Filter *.exe | Remove-Item -Force

Remove-Item -Recurse .\.history

Remove-Item -Recurse .\.vscode

git add -A

git commit -m "Initial Commit"

git push -u origin main