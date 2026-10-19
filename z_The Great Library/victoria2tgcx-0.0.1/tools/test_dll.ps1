$ErrorActionPreference = 'Stop'
$tgcxRoot = Split-Path -Parent $PSScriptRoot
$tgcxVswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'
$tgcxVs = & $tgcxVswhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -version '[17.0,18.0)' -property installationPath
if (-not $tgcxVs) { throw 'Visual Studio 2022 with x86 C++ tools is required' }
Push-Location $tgcxRoot
try {
    python tools/gen_signatures.py --check
    if ($LASTEXITCODE -ne 0) { throw 'Signature header is stale' }
    & (Join-Path $tgcxVs 'MSBuild\Current\Bin\MSBuild.exe') dll/tgcx/tests/tgcx_tests.vcxproj /t:Rebuild /p:Configuration=Release /p:Platform=Win32 /nologo /verbosity:minimal
    if ($LASTEXITCODE -ne 0) { throw 'Fixture build failed' }
    Push-Location dll/tgcx/Release/tests
    try {
        & .\tgcx_tests.exe 'E:\Victoria.II.v3.04.Inclu.ALL.DLC\v2game.exe'
        if ($LASTEXITCODE -ne 0) { throw 'Native fixture tests failed' }
    } finally { Pop-Location }
    python tools/test_install_dll.py
    if ($LASTEXITCODE -ne 0) { throw 'Installer or Lua forwarding tests failed' }
} finally { Pop-Location }
