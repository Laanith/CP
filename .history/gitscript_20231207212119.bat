Get-ChildItem -Path . -Recurse -Filter *.exe | Remove-Item -Force

git add -A

git commit -m "Initial Commit"

git push -u origin main