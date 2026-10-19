// Invoke the guarded engine entry in owned executable fixture memory with its native ESI ABI.
__declspec(naked) static void tgcx_TestNativePresent(uintptr_t) {
    __asm { push esi } __asm { mov esi,[esp+8] } __asm { mov eax,tgcx_base }
    __asm { add eax,0x59A520 } __asm { call eax } __asm { pop esi } __asm { ret }
}
// Invoke the post-Draw site with the renderer in EBX and entity in ESI, as FUN_00999D00 does.
__declspec(naked) static void tgcx_TestOrderedDraw(uintptr_t,uintptr_t) {
    __asm { push esi } __asm { push ebx }
    __asm { mov ebx,[esp+12] } __asm { mov esi,[esp+16] }
    __asm { mov eax,tgcx_base } __asm { add eax,0x599F22 } __asm { call eax }
    __asm { pop ebx } __asm { pop esi } __asm { ret }
}
static uintptr_t tgcx_test_ordered_entry=0;
__declspec(naked) static void tgcx_TestOrderedState(uintptr_t,uintptr_t) {
    __asm {
        push esi
        push ebx
        mov ebx,[esp+12]
        mov esi,[esp+16]
        mov eax,tgcx_base
        add eax,0x599F22
        mov tgcx_test_ordered_entry,eax
        fninit
        fld1
        pcmpeqd xmm0,xmm0
        fxsave tgcx_before_fx
        mov eax,12345678h
        mov ecx,23456789h
        mov edx,3456789Ah
        std
        call dword ptr [tgcx_test_ordered_entry]
        cld
        pop ebx
        pop esi
        fninit
        ret
    }
}
// Real D3D9 tests in an invisible owned window; no game process or user-input changes.
#pragma once
__declspec(naked) static void tgcx_FakeShow() {
    __asm { mov eax,[ecx+4Ch]
            mov byte ptr [eax+67h],1
            ret }
}
__declspec(naked) static void tgcx_FakeHide() {
    __asm { mov eax,[ecx+4Ch]
            mov byte ptr [eax+67h],0
            ret }
}
__declspec(naked) static void tgcx_FakeDestroy() {
    __asm { mov eax,ecx
            ret 4 }
}
__declspec(naked) static void tgcx_FakeTip() {
    __asm { mov eax,[esp+4]
            mov byte ptr [eax],1
            ret 8 }
}
static unsigned int tgcx_test_slice_delegations=0,tgcx_test_bounds_delegations=0;
static uintptr_t tgcx_test_delegated_entity=0;
static bool tgcx_test_slice_stack=false;
__declspec(naked) static void tgcx_FakeSlice() {
    __asm { inc tgcx_test_slice_delegations }
    __asm { mov tgcx_test_delegated_entity,eax }
    __asm { mov eax,1 } __asm { ret 16 }
}
__declspec(naked) static void tgcx_FakeBounds() {
    __asm { inc tgcx_test_bounds_delegations } __asm { fld1 } __asm { ret 32 }
}
// Five C arguments -> native EAX entity/four stack words. Record state immediately on return.
__declspec(naked) static int tgcx_TestSlice(uintptr_t,int,int,int*,int*) {
    __asm { push ebp } __asm { mov ebp,esp }
    __asm { push dword ptr [ebp+24] } __asm { push dword ptr [ebp+20] }
    __asm { push dword ptr [ebp+16] } __asm { push dword ptr [ebp+12] }
    // Resolve the installed CALL target; entering the mid-function site with CALL would add an extra return word.
    __asm { mov eax,tgcx_base } __asm { mov eax,[eax+0x2D52C7] }
    __asm { add eax,tgcx_base } __asm { add eax,0x2D52CB } __asm { mov tgcx_test_ordered_entry,eax }
    __asm { fninit } __asm { fld1 } __asm { pcmpeqd xmm0,xmm0 } __asm { fxsave tgcx_before_fx }
    __asm { mov eax,[ebp+8] } __asm { mov ecx,23456789h } __asm { mov edx,3456789Ah }
    __asm { std } __asm { call dword ptr [tgcx_test_ordered_entry] }
    __asm { mov tgcx_seen_eax,eax } __asm { mov tgcx_seen_ecx,ecx } __asm { mov tgcx_seen_edx,edx }
    __asm { pushfd } __asm { pop tgcx_seen_flags } __asm { fxsave tgcx_seen_fx } __asm { cld }
    __asm { cmp esp,ebp } __asm { sete tgcx_test_slice_stack }
    __asm { mov esp,ebp } __asm { pop ebp } __asm { fninit } __asm { ret }
}
typedef double (__fastcall* tgcx_TestBoundsFn)(void*,void*,float,float,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t,uint32_t);
static double tgcx_test_bound_result=0;
static bool tgcx_test_bounds_stack=false;
__declspec(naked) static void tgcx_TestBoundsState(uintptr_t,float,float) {
    __asm { push ebp } __asm { mov ebp,esp }
    __asm { push 0 } __asm { push 0 } __asm { push 0 } __asm { push 0 } __asm { push 0 } __asm { push 0 }
    __asm { push dword ptr [ebp+16] } __asm { push dword ptr [ebp+12] }
    __asm { mov eax,tgcx_base } __asm { mov eax,[eax+0xA3BDA8] } __asm { mov tgcx_test_ordered_entry,eax }
    __asm { fninit } __asm { fld1 } __asm { pcmpeqd xmm0,xmm0 } __asm { fxsave tgcx_before_fx }
    __asm { mov ecx,[ebp+8] } __asm { mov eax,12345678h } __asm { mov edx,3456789Ah }
    __asm { std } __asm { call dword ptr [tgcx_test_ordered_entry] }
    __asm { mov tgcx_seen_eax,eax } __asm { mov tgcx_seen_ecx,ecx } __asm { mov tgcx_seen_edx,edx }
    __asm { pushfd } __asm { pop tgcx_seen_flags } __asm { fstp tgcx_test_bound_result } __asm { fxsave tgcx_seen_fx } __asm { cld }
    __asm { cmp esp,ebp } __asm { sete tgcx_test_bounds_stack }
    __asm { mov esp,ebp } __asm { pop ebp } __asm { fninit } __asm { ret }
}
static void tgcx_SaveSurface(IDirect3DSurface9* surface) {
    D3DSURFACE_DESC desc={};surface->GetDesc(&desc);
    D3DLOCKED_RECT locked={};
    if(FAILED(surface->LockRect(&locked,nullptr,D3DLOCK_READONLY))){tgcx_Expect(false,"readback lock");return;}
    BITMAPFILEHEADER file={};file.bfType=0x4D42;file.bfOffBits=sizeof(file)+sizeof(BITMAPINFOHEADER);
    file.bfSize=file.bfOffBits+desc.Width*desc.Height*4;
    BITMAPINFOHEADER info={};info.biSize=sizeof(info);info.biWidth=static_cast<LONG>(desc.Width);
    info.biHeight=-static_cast<LONG>(desc.Height);info.biPlanes=1;info.biBitCount=32;
    HANDLE output=CreateFileW(L"tgcx_render_fixture.bmp",GENERIC_WRITE,0,nullptr,CREATE_ALWAYS,0,nullptr);
    if(output!=INVALID_HANDLE_VALUE) {
        DWORD written=0;WriteFile(output,&file,sizeof(file),&written,nullptr);WriteFile(output,&info,sizeof(info),&written,nullptr);
        for(unsigned int row=0;row<desc.Height;++row)WriteFile(output,static_cast<char*>(locked.pBits)+row*locked.Pitch,desc.Width*4,&written,nullptr);
        CloseHandle(output);
    }
    surface->UnlockRect();
}
static void tgcx_RendererTests(const tgcx_Snapshot& live_sample) {
    tgcx_CpuScope cpu;
    tgcx_Snapshot sample=live_sample;
    unsigned int seats[9]={};
    tgcx_Expect(tgcx_AllocateSeats(sample,seats) && seats[0]==83 && seats[1]==5 && seats[5]==12,"largest-remainder allocation reproduces UK screenshots: 83/5/12");
    tgcx_Seat dots[100];tgcx_SeatGeometry(seats,dots);
    unsigned int actual[9]={};
    for(const auto& dot:dots) {
        tgcx_Expect(dot.ideology<9 && dot.x>=38 && dot.x<=160 && dot.y>=100 && dot.y<205,"all seven-ring dots bounded in chart area");
        ++actual[dot.ideology];
    }
    tgcx_Expect(memcmp(actual,seats,sizeof(seats))==0,"geometry carries exactly the allocated seats");
    for(unsigned int i=0;i<100;++i) {
        tgcx_Expect(tgcx_SeatAt(dots,dots[i].x,dots[i].y)==static_cast<int>(i),"every seat centre selects its rendered seat");
        tgcx_Expect(tgcx_SeatAt(dots,dots[i].x,dots[i].y-2.29f)==static_cast<int>(i),"seat outline is hoverable");
    }
    tgcx_Expect(tgcx_SeatAt(dots,99,183)==-1 && tgcx_SeatAt(dots,0,0)==-1 &&
        tgcx_SeatAt(dots,41,180.69f)==-1,"central hole, outside and transparent feather have no seat");
    // Main seating: Liberal (5) leftmost, Conservative (0) centre, Reactionary (1) rightmost, each one wedge.
    unsigned int leftmost=0,rightmost=0;
    for(unsigned int i=1;i<100;++i) {
        if(dots[i].x<dots[leftmost].x)leftmost=i;
        if(dots[i].x>dots[rightmost].x)rightmost=i;
    }
    tgcx_Expect(dots[leftmost].ideology==5 && dots[rightmost].ideology==1,"Main wedge order: Liberal left end, Reactionary right end");
    bool contiguous=true;
    for(unsigned int i=0;i<100;++i) for(unsigned int j=0;j<100;++j) {
        float ai=atan2f(fabsf(183.0f-dots[i].y),dots[i].x-99.0f),aj=atan2f(fabsf(183.0f-dots[j].y),dots[j].x-99.0f);
        unsigned int pi=0,pj=0;
        for(unsigned int k=0;k<9;++k){if(tgcx_seating_order[k]==dots[i].ideology)pi=k;if(tgcx_seating_order[k]==dots[j].ideology)pj=k;}
        if(ai>aj+1e-4f && pi>pj)contiguous=false;
    }
    tgcx_Expect(contiguous,"seats sweep left to right in political order (no interleaved parties)");
    sample.sum=0;tgcx_Expect(!tgcx_AllocateSeats(sample,seats),"zero total rejected without division");
    sample=live_sample;sample.shares_in_range=false;tgcx_Expect(!tgcx_AllocateSeats(sample,seats),"invalid shares retain original pie");
    sample=live_sample;
    // Known-vector tests use representative TGC colours, separately from the name/colour memory fixture.
    sample.colors[0]=0xFF0A0AFA;sample.colors[1]=0xFF14143C;sample.colors[5]=0xFFFafa05;

    // Source-owned PE import fixture drives the actual startup installation route.
    auto* dos=reinterpret_cast<IMAGE_DOS_HEADER*>(tgcx_base);dos->e_magic=IMAGE_DOS_SIGNATURE;dos->e_lfanew=0x100;
    auto* nt=reinterpret_cast<IMAGE_NT_HEADERS32*>(tgcx_base+0x100);nt->Signature=IMAGE_NT_SIGNATURE;
    nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT]={0x1000,40};
    auto* imports=reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR*>(tgcx_base+0x1000);
    imports[0].OriginalFirstThunk=0x1100;imports[0].FirstThunk=0x1200;imports[0].Name=0x1300;
    *reinterpret_cast<uint32_t*>(tgcx_base+0x1100)=0x1400;
    strcpy_s(reinterpret_cast<char*>(tgcx_base+0x1300),32,"d3d9.dll");
    strcpy_s(reinterpret_cast<char*>(tgcx_base+0x1402),32,"Direct3DCreate9");
    auto* iat=reinterpret_cast<uintptr_t*>(tgcx_base+0x1200);
    HMODULE graphics=LoadLibraryExW(L"d3d9.dll",nullptr,LOAD_LIBRARY_SEARCH_SYSTEM32);
    tgcx_Expect(graphics!=nullptr,"system D3D9 module loaded before IAT fixture");if(!graphics)return;
    static uintptr_t data_target=0;
    *iat=reinterpret_cast<uintptr_t>(&data_target);
    tgcx_Expect(!tgcx_InstallRenderer() && *iat==reinterpret_cast<uintptr_t>(&data_target),"non-executable Direct3D IAT target rejected before Politics patches");
    *iat=reinterpret_cast<uintptr_t>(GetProcAddress(graphics,"Direct3DCreate9"));
    const uint32_t functions[]={0x2D2C10,0x2D2C40,0x2D2B00,0x2D2DD0};
    const uintptr_t targets[]={reinterpret_cast<uintptr_t>(&tgcx_FakeShow),reinterpret_cast<uintptr_t>(&tgcx_FakeHide),
        reinterpret_cast<uintptr_t>(&tgcx_FakeDestroy),reinterpret_cast<uintptr_t>(&tgcx_FakeTip)};
    for(unsigned int i=0;i<4;++i) {
        unsigned char* code=reinterpret_cast<unsigned char*>(tgcx_base+functions[i]);code[0]=0xE9;
        uint32_t displacement=static_cast<uint32_t>(targets[i]-(tgcx_base+functions[i]+5));memcpy(code+1,&displacement,4);
    }
    *reinterpret_cast<unsigned char*>(tgcx_base+0x599F22)^=1;
    tgcx_Expect(!tgcx_InstallNativeStages() && *reinterpret_cast<unsigned char*>(tgcx_base+0x59A520)==0xFF,
        "changed ordered Draw bytes reject both native stages");
    *reinterpret_cast<unsigned char*>(tgcx_base+0x599F22)^=1;
    tgcx_Expect(tgcx_InstallNativeStages() && *reinterpret_cast<unsigned char*>(tgcx_base+0x59A520)==0xE9 &&
        *reinterpret_cast<unsigned char*>(tgcx_base+0x599F22)==0xE9,"MOD-1: both native stages install on their own, before drawing");
    // MOD-1: another module's Direct3DCreate9 hook is chained, not refused; a failed hover rolls it back.
    *iat=reinterpret_cast<uintptr_t>(&tgcx_FakeShow);
    *reinterpret_cast<unsigned char*>(tgcx_base+0x2D52C6)^=1;
    tgcx_Expect(!tgcx_InstallRenderer() && !tgcx_drawing_enabled && *reinterpret_cast<uintptr_t*>(tgcx_base+0xA3BDA8)==tgcx_base+0x5E0B70 &&
        *iat==reinterpret_cast<uintptr_t>(&tgcx_FakeShow) && tgcx_create9_original==reinterpret_cast<tgcx_Create9Fn>(&tgcx_FakeShow) &&
        *reinterpret_cast<uintptr_t*>(tgcx_base+0xA0E460)==tgcx_base+0x2D2C10,
        "changed hover CALL rejects drawing, retains original pie and rolls back a chained IAT and the view hooks");
    *reinterpret_cast<unsigned char*>(tgcx_base+0x2D52C6)^=1;
    *iat=reinterpret_cast<uintptr_t>(GetProcAddress(graphics,"Direct3DCreate9"));
    // MOD-1: slot 10 (tooltip) owned by another DLL no longer blocks drawing, and stays untouched.
    auto* tooltip=reinterpret_cast<uintptr_t*>(tgcx_base+0xA0E480);uintptr_t native_tip=*tooltip;
    *tooltip=reinterpret_cast<uintptr_t>(&tgcx_FakeTip);
    tgcx_Expect(tgcx_InstallRenderer() && tgcx_drawing_enabled && *iat==reinterpret_cast<uintptr_t>(&tgcx_Create9) &&
        *tooltip==reinterpret_cast<uintptr_t>(&tgcx_FakeTip),"guarded startup installs IAT and three Politics lifecycle callbacks; foreign slot 10 left alone");
    *tooltip=native_tip;
    // Replace original native bodies only after their installation guards pass in our owned fixture.
    const uint32_t hover_functions[]={0x5E0C90,0x5E0B70};
    const uintptr_t hover_targets[]={reinterpret_cast<uintptr_t>(&tgcx_FakeSlice),reinterpret_cast<uintptr_t>(&tgcx_FakeBounds)};
    for(unsigned int i=0;i<2;++i) {
        auto* code=reinterpret_cast<unsigned char*>(tgcx_base+hover_functions[i]);code[0]=0xE9;
        uint32_t jump=static_cast<uint32_t>(hover_targets[i]-(reinterpret_cast<uintptr_t>(code)+5));memcpy(code+1,&jump,4);
    }
    *reinterpret_cast<unsigned char*>(tgcx_base+0x2D52CB)=0xC3;

    HWND window=CreateWindowExW(0,L"STATIC",L"TGCX isolated renderer fixture",WS_OVERLAPPED,0,0,640,480,nullptr,nullptr,GetModuleHandleW(nullptr),nullptr);
    tgcx_Expect(window!=nullptr,"invisible test window created");if(!window)return;
    IDirect3D9* factory=reinterpret_cast<tgcx_Create9Fn>(*iat)(D3D_SDK_VERSION);
    tgcx_Expect(factory!=nullptr,"real Direct3D9 factory and guarded CreateDevice hook");
    if(!factory){DestroyWindow(window);return;}
    D3DPRESENT_PARAMETERS parameters={};parameters.Windowed=TRUE;parameters.SwapEffect=D3DSWAPEFFECT_DISCARD;
    parameters.BackBufferWidth=640;parameters.BackBufferHeight=480;parameters.BackBufferFormat=D3DFMT_X8R8G8B8;
    parameters.hDeviceWindow=window;parameters.PresentationInterval=D3DPRESENT_INTERVAL_IMMEDIATE;
    IDirect3DDevice9* device=nullptr;
    HRESULT result=factory->CreateDevice(D3DADAPTER_DEFAULT,D3DDEVTYPE_HAL,window,D3DCREATE_SOFTWARE_VERTEXPROCESSING,&parameters,&device);
    tgcx_Expect(SUCCEEDED(result) && device,"real D3D9 device created through hook");
    if(FAILED(result))printf("  CreateDevice HRESULT=%08X\n",static_cast<unsigned int>(result));
    if(!device){factory->Release();DestroyWindow(window);return;}
    tgcx_Expect(tgcx_HookDevice(device),"device hook is idempotent");
    unsigned int initial_frames=tgcx_present_count;
    for(unsigned int frame=0;frame<3;++frame) {
        device->BeginScene();device->EndScene();device->Present(nullptr,nullptr,nullptr,nullptr);
    }
    tgcx_Expect(tgcx_present_count==initial_frames,"COM presentation forwards without a duplicate native frame tick");
    IDirect3DVertexBuffer9* vertices=nullptr;
    device->CreateVertexBuffer(256,0,tgcx_fvf,D3DPOOL_DEFAULT,&vertices,nullptr);
    tgcx_Expect(vertices!=nullptr,"stream-state fixture buffer");
    device->SetFVF(tgcx_fvf);device->SetStreamSource(0,vertices,4,sizeof(tgcx_Vertex));
    device->SetRenderState(D3DRS_ALPHABLENDENABLE,FALSE);device->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_ONE);
    device->SetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,D3DTTFF_COUNT2);
    D3DVIEWPORT9 viewport={0,0,640,480,0,1};device->SetViewport(&viewport);
    RECT inherited_clip={2,3,7,9};device->SetScissorRect(&inherited_clip);
    device->SetRenderState(D3DRS_SCISSORTESTENABLE,FALSE);
    tgcx_GuiRect gui={30,60,640,480};
    device->Clear(0,nullptr,D3DCLEAR_TARGET,0xFF30352C,1,0);
    tgcx_Expect(SUCCEEDED(device->BeginScene()),"fixture BeginScene");
    tgcx_Expect(tgcx_DrawChart(device,sample,gui)==S_OK,"100-seat draw on real GPU");
    DWORD alpha=1,blend=0,transform=0;device->GetRenderState(D3DRS_ALPHABLENDENABLE,&alpha);device->GetRenderState(D3DRS_SRCBLEND,&blend);
    device->GetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,&transform);
    IDirect3DVertexBuffer9* restored=nullptr;UINT offset=0,stride=0;device->GetStreamSource(0,&restored,&offset,&stride);
    tgcx_Expect(alpha==FALSE && blend==D3DBLEND_ONE && transform==D3DTTFF_COUNT2,"render/stage state restored after draw");
    RECT restored_clip={};DWORD scissor=TRUE;device->GetScissorRect(&restored_clip);
    device->GetRenderState(D3DRS_SCISSORTESTENABLE,&scissor);
    tgcx_Expect(scissor==FALSE && EqualRect(&restored_clip,&inherited_clip),"chart scissor rectangle and enable state restored");
    tgcx_Expect(restored==vertices && offset==4 && stride==sizeof(tgcx_Vertex),"DrawPrimitiveUP stream restored by state block");
    if(restored)restored->Release();
    tgcx_Expect(SUCCEEDED(device->EndScene()),"EndScene hook delegates original without nesting scenes");
    IDirect3DSurface9* target=nullptr;IDirect3DSurface9* surface=nullptr;
    device->GetRenderTarget(0,&target);
    device->CreateOffscreenPlainSurface(640,480,D3DFMT_X8R8G8B8,D3DPOOL_SYSTEMMEM,&surface,nullptr);
    tgcx_Expect(target && surface && SUCCEEDED(device->GetRenderTargetData(target,surface)),"real render-target readback");
    if(target && surface) {
        D3DLOCKED_RECT locked={};
        if(SUCCEEDED(surface->LockRect(&locked,nullptr,D3DLOCK_READONLY))) {
            unsigned int pixels[3]={};
            for(unsigned int y=0;y<480;++y)for(unsigned int x=0;x<220;++x) {
                DWORD color=reinterpret_cast<DWORD*>(static_cast<char*>(locked.pBits)+y*locked.Pitch)[x]&0xFFFFFF;
                if(color==0x0A0AFA)++pixels[0];if(color==0x14143C)++pixels[1];if(color==0xFAFA05)++pixels[2];
            }
            tgcx_Expect(pixels[0]>500 && pixels[1]>20 && pixels[2]>50,"all three UK seat colours occur in GPU pixels");
            auto pixel=[&locked](unsigned int x,unsigned int y) {
                return reinterpret_cast<DWORD*>(static_cast<char*>(locked.pBits)+y*locked.Pitch)[x]&0xFFFFFF;
            };
            DWORD fringe=pixel(68,170);
            tgcx_Expect(pixel(66,170)==0x30352C && pixel(100,170)==0xCBC9C1 &&
                ((fringe>>16)&255)>0x30 && ((fringe>>16)&255)<0xCB,
                "panel hides native pie in its core and blends its outer edge without leaking outside");
            bool header_untouched=true,reforms_untouched=true;
            for(unsigned int y=143;y<161;++y)for(unsigned int x=72;x<382;++x)
                if(pixel(x,y)!=0x30352C)header_untouched=false;
            for(unsigned int y=269;y<290;++y)for(unsigned int x=72;x<382;++x)
                if(pixel(x,y)!=0x30352C)reforms_untouched=false;
            tgcx_Expect(header_untouched && reforms_untouched,
                "hemicycle cover and feather preserve the full Upper House header and reform row");
            bool seam_covered=true;
            for(unsigned int y=161;y<164;++y)for(unsigned int x=100;x<180;++x)
                if(pixel(x,y)!=0xCBC9C1)seam_covered=false;
            tgcx_Expect(seam_covered,"cover starts immediately below the native header border without a three-pixel seam");
            surface->UnlockRect();tgcx_SaveSurface(surface);
        }
    }
    if(target)target->Release();if(surface)surface->Release();

    // Production callbacks receive a live synthetic Politics object and world. No original game memory is used.
    unsigned char view[0x60]={},root[0x2C4]={};uintptr_t root_table[18]={};
    unsigned char icon[0xA0]={},entity[0x100]={},names[56]={},chart_icon[0xA0]={},chart[0x180]={};
    uintptr_t objects[]={reinterpret_cast<uintptr_t>(icon),reinterpret_cast<uintptr_t>(chart_icon)};
    int slices[9][9]={};for(unsigned int i=0;i<9;++i){slices[i][0]=1000+static_cast<int>(i);slices[i][8]=static_cast<int>(i);}
    unsigned char* renderer=static_cast<unsigned char*>(VirtualAlloc(nullptr,0x6BD00,MEM_RESERVE|MEM_COMMIT,PAGE_READWRITE));
    tgcx_Expect(renderer!=nullptr,"owned GUI renderer metadata");
    if(renderer) {
        *reinterpret_cast<uintptr_t*>(renderer)=tgcx_base+0xA19B8C;
        *reinterpret_cast<IDirect3DDevice9**>(renderer+0x64)=device;renderer[0x6BCA0]=1;
        // The original native entry has already passed its full byte guard; replace only its fixture continuation.
        *reinterpret_cast<unsigned char*>(tgcx_base+0x59A526)=0xC3;
        auto* continuation=reinterpret_cast<unsigned char*>(tgcx_base+0x599F29);continuation[0]=0xE9;
        uint32_t continuation_jump=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&tgcx_FakePump)-(tgcx_base+0x599F2E));
        memcpy(continuation+1,&continuation_jump,4);

        *reinterpret_cast<uintptr_t*>(view)=tgcx_base+0xA0E458;*reinterpret_cast<unsigned char**>(view+0x4C)=root;
        *reinterpret_cast<uintptr_t**>(root)=root_table;root_table[8]=tgcx_base+0x5E4450;root_table[9]=tgcx_base+0x5E4030;
        root_table[17]=tgcx_base+0x5E4D40;
        *reinterpret_cast<uintptr_t*>(icon)=tgcx_base+0xA3A930;
        *reinterpret_cast<uintptr_t*>(icon+0x94)=reinterpret_cast<uintptr_t>(entity);
        *reinterpret_cast<uintptr_t*>(entity)=tgcx_base+0xA3FF08;
        *reinterpret_cast<uintptr_t**>(root+0x2AC)=objects;*reinterpret_cast<uintptr_t**>(root+0x2B0)=objects+2;
        *reinterpret_cast<unsigned char**>(root+0x2BC)=names;*reinterpret_cast<unsigned char**>(root+0x2C0)=names+56;
        const char* overlay_name="chart_upper_house_overlay";
        *reinterpret_cast<const char**>(names)=overlay_name;
        *reinterpret_cast<uint32_t*>(names+16)=static_cast<uint32_t>(strlen(overlay_name));
        *reinterpret_cast<uint32_t*>(names+20)=31;
        *reinterpret_cast<uintptr_t*>(chart_icon)=tgcx_base+0xA3A930;
        *reinterpret_cast<uintptr_t*>(chart_icon+0x94)=reinterpret_cast<uintptr_t>(chart);
        *reinterpret_cast<uintptr_t*>(chart)=tgcx_base+0xA3BD58;
        *reinterpret_cast<int**>(chart+0x158)=slices[0];*reinterpret_cast<int**>(chart+0x15C)=slices[3];
        *reinterpret_cast<const char**>(names+28)="chart_upper_house";
        *reinterpret_cast<uint32_t*>(names+44)=17;*reinterpret_cast<uint32_t*>(names+48)=31;
        *reinterpret_cast<unsigned char**>(root+0x90)=renderer;
        *reinterpret_cast<uint32_t*>(root+0x250)=30|(60u<<16);
        *reinterpret_cast<int*>(renderer+0x6B9BC)=640;*reinterpret_cast<int*>(renderer+0x6B9C0)=480;
        auto* view_table=reinterpret_cast<uintptr_t*>(tgcx_base+0xA0E458);
        auto show=reinterpret_cast<void(__fastcall*)(void*,void*)>(view_table[2]);
        auto hide=reinterpret_cast<void(__fastcall*)(void*,void*)>(view_table[4]);
        SetLastError(789);show(view,nullptr);
        tgcx_Expect(GetLastError()==789 && tgcx_politics==reinterpret_cast<uintptr_t>(view) && root[0x67]==1,"show thunk preserves ABI and original visibility");

        tgcx_Expect(view_table[10]==tgcx_base+0x2D2DD0,"native structured tooltip callback remains untouched (crash regression)");
        tgcx_GuiRect found={};tgcx_Expect(tgcx_ReadPoliticsRect(&found) && found.left==30 && found.top==60,"absolute GUI position matches live engine convention");
        unsigned int draws=tgcx_draw_count;
        device->BeginScene();device->EndScene();
        tgcx_Expect(tgcx_draw_count==draws,"intermediate EndScene cannot draw the chart");
        device->Clear(0,nullptr,D3DCLEAR_TARGET,0xFF000000,1.0f,0);
        D3DVIEWPORT9 narrow={11,17,180,140,0.0f,1.0f};device->SetViewport(&narrow);
        device->BeginScene();
        entity[0xF0]=1;SetLastError(654321);
        tgcx_TestOrderedState(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));
        tgcx_Expect(tgcx_seen_eax==0x12345678 && tgcx_seen_ecx==0x23456789 && tgcx_seen_edx==0x3456789A,
            "ordered draw thunk preserves volatile registers around real D3D calls");
        tgcx_Expect((tgcx_seen_flags&0x441)==0x400,"original CMP flags replicated and caller DF restored after ordered draw");
        tgcx_Expect(memcmp(tgcx_before_fx,tgcx_seen_fx,32)==0 && memcmp(tgcx_before_fx+32,tgcx_seen_fx+32,256)==0,
            "ordered draw thunk preserves x87/SSE state around real D3D calls");
        tgcx_Expect(GetLastError()==654321,"ordered draw thunk preserves LastError");
        D3DVIEWPORT9 restored_view={};device->GetViewport(&restored_view);
        tgcx_Expect(tgcx_draw_count==draws+1 && tgcx_chart_drawn,"ordered native callback draws live upper house within the existing scene");
        // The installed hooks, not only the geometry helper: compressed native slice ordinals differ from engine indices.
        tgcx_HoverFrame hover=tgcx_hover;
        auto bounds=reinterpret_cast<tgcx_TestBoundsFn>(*reinterpret_cast<uintptr_t*>(tgcx_base+0xA3BDA8));
        unsigned int exercised=0;
        for(const auto& dot:hover.dots) {
            int slice=-77,weight=-88;
            int x=static_cast<int>(hover.gui.left+dot.x+0.5f),y=static_cast<int>(hover.gui.top+dot.y+0.5f);
            SetLastError(654321);
            int hit=tgcx_TestSlice(reinterpret_cast<uintptr_t>(chart),x,y,&slice,&weight);
            int expected=dot.ideology==0?0:dot.ideology==1?1:2;
            tgcx_Expect(hit==1 && slice==expected && weight==slices[expected][0],"installed slice thunk maps each rendered UK dot to native ordinal and weight");
            tgcx_Expect(tgcx_test_slice_stack && tgcx_seen_ecx==0x23456789 && tgcx_seen_edx==0x3456789A &&
                (tgcx_seen_flags&0x400)!=0 && GetLastError()==654321,"slice ABI preserves registers, DF, LastError and RET 16 cleanup");
            tgcx_Expect(memcmp(tgcx_before_fx,tgcx_seen_fx,32)==0 && memcmp(tgcx_before_fx+32,tgcx_seen_fx+32,256)==0,
                "slice thunk restores x87/SSE state");
            exercised|=1u<<dot.ideology;
            tgcx_Expect(bounds(chart,nullptr,static_cast<float>(x),static_cast<float>(y),0,0,0,0,0,0)==1.0,
                "native bounds thunk returns ST0=1 with RET 32, including seats beyond old circle");
        }
        tgcx_Expect(exercised==((1u<<0)|(1u<<1)|(1u<<5)) && tgcx_test_slice_delegations==0 && tgcx_test_bounds_delegations==0,
            "all present UK ideologies use seat hover without delegating to old pie");
        SetLastError(112233);tgcx_TestBoundsState(reinterpret_cast<uintptr_t>(chart),71,243);
        tgcx_Expect(tgcx_test_bound_result==1.0 && tgcx_test_bounds_stack && tgcx_seen_eax==0x12345678 &&
            tgcx_seen_ecx==reinterpret_cast<uintptr_t>(chart) && tgcx_seen_edx==0x3456789A &&
            (tgcx_seen_flags&0x400)!=0 && GetLastError()==112233,"bounds thunk preserves registers/DF/LastError and returns one x87 value with RET 32");
        // FPU instruction/data pointers change when the required return value is pushed/popped; registers/control do not.
        tgcx_Expect(memcmp(tgcx_before_fx,tgcx_seen_fx,8)==0 && memcmp(tgcx_before_fx+24,tgcx_seen_fx+24,8)==0 &&
            memcmp(tgcx_before_fx+32,tgcx_seen_fx+32,16)==0 && memcmp(tgcx_before_fx+160,tgcx_seen_fx+160,128)==0,
            "bounds thunk preserves existing x87 values/control and SSE registers across its floating result");
        int empty_slice=-77,empty_weight=-88;
        tgcx_Expect(tgcx_TestSlice(reinterpret_cast<uintptr_t>(chart),129,243,&empty_slice,&empty_weight)==0 &&
            empty_slice==-77 && empty_weight==-88 && bounds(chart,nullptr,129,243,0,0,0,0,0,0)==0.0,"central hole returns native no-hover without output writes");
        tgcx_TestSlice(reinterpret_cast<uintptr_t>(entity),100,200,&empty_slice,&empty_weight);
        tgcx_Expect(tgcx_test_slice_delegations==1 && tgcx_test_delegated_entity==reinterpret_cast<uintptr_t>(entity) &&
            bounds(entity,nullptr,100,200,0,0,0,0,0,0)==1.0 && tgcx_test_bounds_delegations==1,"unrelated entities delegate with original EAX/ECX ABI");
        // Changed shares and all nine ideologies; zero-seat positive blocs still count in native ordinals.
        auto* live_shares=reinterpret_cast<int64_t*>(sample.array);int64_t saved_shares[10];memcpy(saved_shares,live_shares,sizeof(saved_shares));
        for(unsigned int i=1;i<10;++i)live_shares[i]=i==1?32668:i==2?100:0;
        tgcx_Expect(tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),129,185)==-1,"changed shares invalidate previously drawn geometry");
        bool hover_fault=false;tgcx_Snapshot changed={};
        tgcx_Expect(tgcx_ReadSnapshot(&changed,&hover_fault),"changed shares read safely");
        *reinterpret_cast<int**>(chart+0x15C)=slices[2];tgcx_PublishHover(reinterpret_cast<uintptr_t>(renderer),gui,changed);
        int changed_slice=-1,changed_weight=0;tgcx_Seat only=tgcx_hover.dots[0];
        tgcx_Expect(tgcx_QuerySlice(reinterpret_cast<uintptr_t>(chart),static_cast<int>(gui.left+only.x),static_cast<int>(gui.top+only.y),&changed_slice,&changed_weight)==1 &&
            changed_slice==0,"positive zero-seat blocs do not acquire phantom seats");
        for(unsigned int i=1;i<10;++i)live_shares[i]=i==1?3640:3641;
        *reinterpret_cast<int**>(chart+0x15C)=slices[0]+81;
        tgcx_ReadSnapshot(&changed,&hover_fault);tgcx_PublishHover(reinterpret_cast<uintptr_t>(renderer),gui,changed);
        exercised=0;
        for(const auto& dot:tgcx_hover.dots) {
            int slice=-1,weight=0;
            int hit=tgcx_QuerySlice(reinterpret_cast<uintptr_t>(chart),static_cast<int>(gui.left+dot.x+0.5f),static_cast<int>(gui.top+dot.y+0.5f),&slice,&weight);
            tgcx_Expect(hit==1 && slice==static_cast<int>(changed.indices[dot.ideology]-1),"all nine ideology wedges follow native engine identity");
            exercised|=1u<<dot.ideology;
        }
        tgcx_Expect(exercised==511,"all nine ideology hover mappings exercised");
        tgcx_Seat first_slot={};for(const auto& dot:tgcx_hover.dots)if(changed.indices[dot.ideology]==1){first_slot=dot;break;}
        slices[0][8]=99;tgcx_Expect(tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),gui.left+first_slot.x,gui.top+first_slot.y)==-1,
            "malformed native segment identity rejected");slices[0][8]=0;
        memcpy(live_shares,saved_shares,sizeof(saved_shares));*reinterpret_cast<int**>(chart+0x15C)=slices[3];
        tgcx_PublishHover(reinterpret_cast<uintptr_t>(renderer),gui,sample);
        renderer[0x6BCA0]=0;tgcx_Expect(tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),71,243)==-1,"unfocused renderer rejects seat hover");renderer[0x6BCA0]=1;
        root_table[8]^=1;tgcx_Expect(tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),71,243)==-1,"unsupported native view rejects hover");root_table[8]^=1;
        *reinterpret_cast<uint32_t*>(root+0x250)=31|(60u<<16);
        tgcx_Expect(tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),71,243)==-1,"moved window invalidates prior screen coordinates");
        *reinterpret_cast<uint32_t*>(root+0x250)=30|(60u<<16);
        tgcx_hover.tick=GetTickCount()-1001;tgcx_Expect(tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),71,243)==-1,"expired rendered frame delegates safely");
        tgcx_PublishHover(reinterpret_cast<uintptr_t>(renderer),gui,sample);
        tgcx_Expect(restored_view.X==11 && restored_view.Y==17 && restored_view.Width==180 && restored_view.Height==140,"non-fullscreen native viewport restored after fullscreen overlay");
        // A later opaque UI element overlaps a real seat. Final presentation must leave it above the chart.
        D3DRECT popup={110,170,150,200};device->SetViewport(&viewport);
        device->Clear(1,&popup,D3DCLEAR_TARGET,0xFF32EE51,1.0f,0);device->SetViewport(&narrow);
        device->EndScene();tgcx_TestNativePresent(reinterpret_cast<uintptr_t>(renderer));
        tgcx_Expect(tgcx_draw_count==draws+1,"final Present never redraws above later UI elements");
        tgcx_Expect(*reinterpret_cast<uint32_t*>(renderer+0x6BC8C)==1,"native thunk exactly replicates original renderer frame increment");
        IDirect3DSurface9* final_target=nullptr;IDirect3DSurface9* final_pixels=nullptr;
        device->GetRenderTarget(0,&final_target);device->CreateOffscreenPlainSurface(640,480,D3DFMT_X8R8G8B8,D3DPOOL_SYSTEMMEM,&final_pixels,nullptr);
        bool native_pixel=false,popup_pixel=false;
        if(final_target && final_pixels && SUCCEEDED(device->GetRenderTargetData(final_target,final_pixels))) {
            D3DLOCKED_RECT pixels={};if(SUCCEEDED(final_pixels->LockRect(&pixels,nullptr,D3DLOCK_READONLY))) {
                native_pixel=(reinterpret_cast<DWORD*>(static_cast<char*>(pixels.pBits)+243*pixels.Pitch)[71]&0xFFFFFF)==0xFF0000;
                popup_pixel=(reinterpret_cast<DWORD*>(static_cast<char*>(pixels.pBits)+185*pixels.Pitch)[129]&0xFFFFFF)==0x32EE51;
                final_pixels->UnlockRect();
            }
        }
        if(final_target)final_target->Release();if(final_pixels)final_pixels->Release();
        *reinterpret_cast<int*>(renderer+0x6B9BC)=2560;*reinterpret_cast<int*>(renderer+0x6B9C0)=1440;
        *reinterpret_cast<uint32_t*>(root+0x250)=768|(470u<<16);
        tgcx_GuiRect live_geometry={};
        tgcx_Expect(tgcx_ReadPoliticsRect(&live_geometry) && live_geometry.left==768 && live_geometry.top==470,"live 2560x1440 root coordinates are not centred twice");
        *reinterpret_cast<int*>(renderer+0x6B9BC)=640;*reinterpret_cast<int*>(renderer+0x6B9C0)=480;
        *reinterpret_cast<uint32_t*>(root+0x250)=30|(60u<<16);
        tgcx_Expect(native_pixel,"ordered chart produces GPU pixels outside inherited narrow viewport");
        tgcx_Expect(popup_pixel,"later UI pixels occlude seats and survive final Present (layering regression)");
        draws=tgcx_draw_count;slices[0][8]=99;device->BeginScene();
        tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));device->EndScene();
        tgcx_Expect(tgcx_draw_count==draws && !tgcx_chart_drawn && !tgcx_hover.view,"unsupported native slices retain pie and clear prior seat hover");
        slices[0][8]=0;device->BeginScene();tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));device->EndScene();
        tgcx_Expect(tgcx_draw_count==draws+1 && tgcx_hover.view,"valid native slices restore chart and seat hover");
        draws=tgcx_draw_count;device->BeginScene();
        tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(icon));
        *reinterpret_cast<uintptr_t*>(entity)^=4;
        tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));
        *reinterpret_cast<uintptr_t*>(entity)^=4;
        *reinterpret_cast<uint32_t*>(names+16)=1;
        tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));
        *reinterpret_cast<uint32_t*>(names+16)=static_cast<uint32_t>(strlen(overlay_name));
        *reinterpret_cast<unsigned char**>(root+0x2C0)=names+27;
        tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));
        *reinterpret_cast<unsigned char**>(root+0x2C0)=names+56;device->EndScene();
        tgcx_Expect(tgcx_draw_count==draws,"foreign entity, vtable, name and malformed parallel vectors cannot trigger chart drawing");


        tgcx_last_sample=GetTickCount()-10001;tgcx_sampled=true;
        unsigned int frames=tgcx_present_count;tgcx_TestNativePresent(reinterpret_cast<uintptr_t>(renderer));device->Present(nullptr,nullptr,nullptr,nullptr);
        tgcx_Expect(tgcx_present_count==frames+1 && GetTickCount()-tgcx_last_sample<1000,"final engine Present samples while date remains paused");
        draws=tgcx_draw_count;hide(view,nullptr);device->BeginScene();
        tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));
        device->EndScene();tgcx_TestNativePresent(reinterpret_cast<uintptr_t>(renderer));
        tgcx_Expect(!tgcx_politics && !tgcx_chart_drawn && tgcx_draw_count==draws,"closing Politics removes chart before next draw");
        tgcx_Expect(!tgcx_hover.view && tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),71,243)==-1,"closing Politics clears hover ownership");
        show(view,nullptr);device->BeginScene();tgcx_TestOrderedDraw(reinterpret_cast<uintptr_t>(renderer),reinterpret_cast<uintptr_t>(entity));device->EndScene();
        tgcx_Expect(tgcx_hover.view==reinterpret_cast<uintptr_t>(view) && tgcx_QueryBounds(reinterpret_cast<uintptr_t>(chart),71,243)==1,"reopened Politics publishes fresh hover geometry");
        root[0x67]=1;tgcx_politics=reinterpret_cast<uintptr_t>(view);root_table[8]^=1;
        tgcx_Expect(!tgcx_ReadPoliticsRect(&found),"unexpected GUI implementation rejected");
        auto destroy=reinterpret_cast<void*(__fastcall*)(void*,void*,unsigned int)>(view_table[1]);
        tgcx_Expect(destroy(view,nullptr,0)==view && !tgcx_politics && !tgcx_chart_drawn,"deleting-destructor thunk clears retained view and forwards stack argument");
        VirtualFree(renderer,0,MEM_RELEASE);
    }
    device->SetStreamSource(0,nullptr,0,0);if(vertices)vertices->Release();
    tgcx_Expect(SUCCEEDED(device->Reset(&parameters)),"device Reset succeeds with chart resources released");
    tgcx_Expect(!tgcx_chart_drawn,"Reset clears stale chart hit area");
    device->BeginScene();tgcx_Expect(tgcx_DrawChart(device,sample,gui)==S_OK,"chart renders after device Reset");device->EndScene();
    // A separate larger viewport exercises the Bill's 100-seat chart on the
    // real GPU, including restoration of an inherited non-fullscreen viewport.
    parameters.BackBufferWidth=1200;parameters.BackBufferHeight=800;
    tgcx_Expect(SUCCEEDED(device->Reset(&parameters)),"Bill fixture viewport Reset");
    tgcx_BillModel bill={};bill.valid=true;bill.yes=40;bill.no=25;bill.abstain=35;
    for(unsigned i=0;i<tgcx_ideology_count;++i) {
        if(strcmp(tgcx_ideology_candidates[i],"conservative")==0)bill.bloc[i]={85,0,25,25,35,60,25,85,-1,false};
        else if(strcmp(tgcx_ideology_candidates[i],"liberal")==0)bill.bloc[i]={10,10,10,0,0,0,0,0,2,false};
        else if(strcmp(tgcx_ideology_candidates[i],"reactionary")==0)bill.bloc[i]={5,0,5,0,0,0,0,5,-2,true};
    }
    // Deliberately away from screen centre: the chart must use its supplied
    // native window transform, not reconstruct a different origin.
    tgcx_GuiRect bill_gui={100,80,1200,800};D3DVIEWPORT9 bill_view={11,17,180,140,0,1};
    D3DVIEWPORT9 bill_full={0,0,1200,800,0,1};device->SetViewport(&bill_full);
    device->Clear(0,nullptr,D3DCLEAR_TARGET,0xFF30352C,1,0);
    RECT bill_clip={7,9,19,27};device->SetViewport(&bill_view);device->SetScissorRect(&bill_clip);
    device->SetRenderState(D3DRS_SCISSORTESTENABLE,FALSE);device->SetRenderState(D3DRS_ALPHABLENDENABLE,FALSE);
    device->SetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,D3DTTFF_COUNT2);
    device->BeginScene();
    tgcx_Expect(tgcx_DrawBillChart(device,bill,sample,bill_gui)==S_OK,"Bill projected seats render on real GPU");
    device->EndScene();D3DVIEWPORT9 bill_restored={};RECT bill_restored_clip={};
    device->GetViewport(&bill_restored);device->GetScissorRect(&bill_restored_clip);
    device->GetRenderState(D3DRS_SCISSORTESTENABLE,&scissor);device->GetRenderState(D3DRS_ALPHABLENDENABLE,&alpha);
    device->GetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,&transform);
    tgcx_Expect(bill_restored.X==11 && bill_restored.Y==17 && bill_restored.Width==180 && bill_restored.Height==140 &&
        EqualRect(&bill_restored_clip,&bill_clip) && scissor==FALSE && alpha==FALSE && transform==D3DTTFF_COUNT2,
        "Bill restores inherited viewport, clip, blend and texture-transform state");
    IDirect3DSurface9* bill_target=nullptr;IDirect3DSurface9* bill_pixels=nullptr;
    device->GetRenderTarget(0,&bill_target);
    device->CreateOffscreenPlainSurface(1200,800,D3DFMT_X8R8G8B8,D3DPOOL_SYSTEMMEM,&bill_pixels,nullptr);
    bool bill_readback=bill_target && bill_pixels && SUCCEEDED(device->GetRenderTargetData(bill_target,bill_pixels));
    tgcx_Expect(bill_readback,"Bill real GPU readback");
    if(bill_readback) {
        D3DLOCKED_RECT pixels={};bool locked=SUCCEEDED(bill_pixels->LockRect(&pixels,nullptr,D3DLOCK_READONLY));
        tgcx_Expect(locked,"Bill GPU pixels lock");
        if(locked) {
            unsigned aye=0,nay=0,abstain=0,outside=0;
            for(int y=0;y<800;++y)for(int x=0;x<1200;++x) {
                DWORD color=reinterpret_cast<DWORD*>(static_cast<char*>(pixels.pBits)+y*pixels.Pitch)[x]&0xFFFFFF;
                // Without our textures only the chart patch, seats and legend are drawn.
                bool inside=x>=bill_gui.left+64 && x<bill_gui.left+340 && y>=bill_gui.top+205 && y<bill_gui.top+357;
                if(!inside && color!=0x30352C)++outside;
                if(inside) { if(color==0x3F8F2F)++aye;if(color==0xB8322A)++nay;if(color==0xE4E0D0)++abstain; }
            }
            tgcx_Expect(aye>300 && nay>300 && abstain>300,"all Bill vote colours appear inside the native chart area");
            tgcx_Expect(outside==0,"Bill chart leaves every pixel outside its native chart area unchanged");
            bill_pixels->UnlockRect();
        }
    }
    if(bill_target)bill_target->Release();if(bill_pixels)bill_pixels->Release();
    // Our staged textures: the background patches hidden/disabled buttons and
    // the chart's marker; a disabled button gets the atlas's greyed sprite.
    {
        auto dds=[](int width,int height,DWORD color,unsigned char* out) {
            memset(out,0,128);memcpy(out,"DDS ",4);
            uint32_t header[]={124,0x100F,static_cast<uint32_t>(height),static_cast<uint32_t>(width),static_cast<uint32_t>(width*4),0,1};
            memcpy(out+4,header,sizeof(header));
            uint32_t format[]={32,0x41,0,32,0x00FF0000,0x0000FF00,0x000000FF,0xFF000000,0x1000};
            memcpy(out+76,format,sizeof(format));
            for(int p=0;p<width*height;++p)memcpy(out+128+4*p,&color,4);
        };
        size_t bg_size=128+tgcx_bill_width*tgcx_bill_height*4,atlas_size=128+tgcx_bill_atlas_size[0]*tgcx_bill_atlas_size[1]*4;
        auto* bg=static_cast<unsigned char*>(malloc(bg_size));auto* atlas=static_cast<unsigned char*>(malloc(atlas_size));
        dds(tgcx_bill_width,tgcx_bill_height,0xFF102030,bg);dds(tgcx_bill_atlas_size[0],tgcx_bill_atlas_size[1],0xFF405060,atlas);
        tgcx_Expect(tgcx_BillTextureFromDds(device,bg,bg_size,&tgcx_bill_bg) && tgcx_BillTextureFromDds(device,atlas,atlas_size,&tgcx_bill_atlas),
            "staged DDS layout loads into managed textures");
        tgcx_BillTexture truncated={};
        tgcx_Expect(!tgcx_BillTextureFromDds(device,bg,bg_size-1,&truncated) && !truncated.texture,"truncated DDS refused");
        tgcx_bill_texture_device=device;
        free(bg);free(atlas);
        tgcx_BillView bill_view_state={};bill_view_state.vote={"tgcx_call_vote",0,true,false};bill_view_state.audience={"tgcx_audience",10,false,false};
        device->SetViewport(&bill_full);device->Clear(0,nullptr,D3DCLEAR_TARGET,0xFF30352C,1,0);
        device->BeginScene();
        tgcx_Expect(tgcx_DrawBillChart(device,bill,sample,bill_gui,&bill_view_state)==S_OK,"Bill overlay with textures renders on real GPU");
        device->EndScene();
        IDirect3DSurface9* overlay_target=nullptr;IDirect3DSurface9* pixels=nullptr;
        device->GetRenderTarget(0,&overlay_target);
        device->CreateOffscreenPlainSurface(1200,800,D3DFMT_X8R8G8B8,D3DPOOL_SYSTEMMEM,&pixels,nullptr);
        D3DLOCKED_RECT locked={};
        if(overlay_target && pixels && SUCCEEDED(device->GetRenderTargetData(overlay_target,pixels)) && SUCCEEDED(pixels->LockRect(&locked,nullptr,D3DLOCK_READONLY))) {
            auto at=[&](int x,int y){return reinterpret_cast<DWORD*>(static_cast<char*>(locked.pBits)+(bill_gui.top+y)*locked.Pitch)[bill_gui.left+x]&0xFFFFFF;};
            const auto& vote=tgcx_bill_buttons[TGCX_B_VOTE];const auto& audience=tgcx_bill_buttons[TGCX_B_AUDIENCE];
            tgcx_Expect(at(tgcx_bill_chart_patch[0]+1,tgcx_bill_chart_patch[1]+1)==0x102030,"chart marker is covered by the Bill background");
            tgcx_Expect(at(audience.x+audience.w/2,audience.y+audience.h/2)==0x102030,"a hidden button is covered by the Bill background");
            tgcx_Expect(at(vote.x+vote.w/2,vote.y+vote.h/2)==0x405060,"a disabled button gets the greyed atlas sprite");
            tgcx_Expect(at(-1,10)==0x30352C && at(tgcx_bill_width,10)==0x30352C,"nothing is drawn outside the Bill");
            pixels->UnlockRect();
        } else tgcx_Expect(false,"Bill textured readback");
        if(overlay_target)overlay_target->Release();if(pixels)pixels->Release();
        tgcx_BillReleaseTextures();
    }
    bill.valid=false;
    tgcx_Expect(tgcx_DrawBillChart(device,bill,sample,bill_gui)==S_FALSE,"invalid Bill model draws nothing");
    tgcx_Expect(device->Release()==0,"all device resources/references released");factory->Release();DestroyWindow(window);FreeLibrary(graphics);
    printf("renderer: real D3D9 pixels, 100 seats, state restoration, ordered layering, paused Present, visibility and Reset checked\n");
}
