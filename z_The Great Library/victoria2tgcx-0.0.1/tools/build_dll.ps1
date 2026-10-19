$ErrorActionPreference = 'Stop'
$tgcxRoot = Split-Path -Parent $PSScriptRoot
$tgcxVswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'
$tgcxVs = & $tgcxVswhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -version '[17.0,18.0)' -property installationPath
if (-not $tgcxVs) { throw 'Visual Studio 2022 with x86 C++ tools is required' }
Push-Location $tgcxRoot
try {
    python tools/gen_signatures.py
    if ($LASTEXITCODE -ne 0) { throw 'Signature generation failed' }
    python tools/tgcx_bill_gui.py --header
    if ($LASTEXITCODE -ne 0) { throw 'Bill catalogue generation failed' }
    python tools/tgcx_templates_gui.py --header
    if ($LASTEXITCODE -ne 0) { throw 'Templates catalogue generation failed' }
    python tools/tgcx_conform_gui.py --header
    if ($LASTEXITCODE -ne 0) { throw 'Conform layout generation failed' }
    & (Join-Path $tgcxVs 'MSBuild\Current\Bin\MSBuild.exe') dll/tgcx/tgcx.vcxproj /t:Rebuild /p:Configuration=Release /p:Platform=Win32 /nologo /verbosity:minimal
    if ($LASTEXITCODE -ne 0) { throw 'tgcx.dll build failed' }
    # MOD-1 (D16): lua51.dll is only the Lua forwards plus the tgcx.dll loader.
    & (Join-Path $tgcxVs 'MSBuild\Current\Bin\MSBuild.exe') dll/tgcx/loader/tgcx_loader.vcxproj /t:Rebuild /p:Configuration=Release /p:Platform=Win32 /nologo /verbosity:minimal
    if ($LASTEXITCODE -ne 0) { throw 'lua51.dll loader build failed' }
} finally { Pop-Location }
