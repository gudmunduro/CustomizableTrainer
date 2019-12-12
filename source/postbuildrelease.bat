rmdir /s /Q "D:\Projects\RDR2\ctrainer\source\bin\Release\CustomizableTrainer" 2> nul
Xcopy /E /Q /I "D:\Games\Rockstar Games\Red Dead Redemption 2\CustomizableTrainer" "D:\Projects\RDR2\ctrainer\source\bin\Release\CustomizableTrainer"
cd "D:\Projects\RDR2\ctrainer\source\bin\Release\"
C:\Program Files\7-Zip\7z.exe a -r -tzip CustomizableTrainer.zip CustomizableTrainer CustomizableTrainer.asi
explorer.exe "D:\Projects\RDR2\ctrainer\source\bin\Release\"