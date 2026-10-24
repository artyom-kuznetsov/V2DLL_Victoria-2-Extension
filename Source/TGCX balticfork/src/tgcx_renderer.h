// DLL-1 + HEMI-3: guarded presentation callbacks and native scalar chart hover.
#pragma once

class tgcx_CpuScope {
    __declspec(align(16)) unsigned char state[512];
    DWORD error;
public:
    tgcx_CpuScope() : error(GetLastError()) {
        void* area=state;
        __asm { mov eax, area
                fxsave [eax]
                fninit }
        _mm_setcsr(0x1F80);
    }
    ~tgcx_CpuScope() {
        void* area=state;
        __asm { mov eax, area
                fxrstor [eax] }
        SetLastError(error);
    }
};

static uintptr_t tgcx_politics=0, tgcx_show_original=0, tgcx_hide_original=0;
static uintptr_t tgcx_destroy_original=0;
// MOD-1: drawing (hemicycle, hover, Bill) has its own gate; the stages tick without it.
static bool tgcx_drawing_enabled=false;
static DWORD tgcx_chart_tick=0;
static bool tgcx_chart_drawn=false;
static DWORD tgcx_guard_log_tick=0;
static bool tgcx_guard_logged=false;
static const char* tgcx_gui_stage="not read";
static void tgcx_ClearHover();
static void tgcx_BillReset(bool destroyed);
static void tgcx_BillTick();
static void tgcx_FavourTick();
static void tgcx_TplTick();
static void tgcx_CfTick();
static void tgcx_BillAfterEntity(uintptr_t renderer,uintptr_t entity);

static void __cdecl tgcx_ShowPolitics(uintptr_t view) {
    DWORD error=GetLastError();
    tgcx_politics=view; tgcx_chart_drawn=false;tgcx_guard_logged=false;tgcx_ClearHover();
    tgcx_Log("Politics shown view=%08X",view);
    SetLastError(error);
}
static void __cdecl tgcx_HidePolitics(uintptr_t view) {
    DWORD error=GetLastError();
    if (tgcx_politics==view) { tgcx_BillReset(false);tgcx_politics=0; tgcx_chart_drawn=false;tgcx_ClearHover();tgcx_Log("Politics hidden/destroyed view=%08X",view); }
    SetLastError(error);
}
static void __cdecl tgcx_DestroyPolitics(uintptr_t view) {
    tgcx_HidePolitics(view);tgcx_BillReset(true);
}

// from V2DLL: V2TechButton.cpp, View hook/thunk pattern. Flags and FXSAVE added.
#define TGCX_VIEW_THUNK(name, callback, original) \
__declspec(naked) static void name() { \
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp } \
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } \
    __asm { cld } __asm { push ecx } __asm { call callback } __asm { add esp,4 } \
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } \
    __asm { jmp dword ptr [original] } \
}
TGCX_VIEW_THUNK(tgcx_ShowThunk,tgcx_ShowPolitics,tgcx_show_original)
TGCX_VIEW_THUNK(tgcx_HideThunk,tgcx_HidePolitics,tgcx_hide_original)
TGCX_VIEW_THUNK(tgcx_DestroyThunk,tgcx_DestroyPolitics,tgcx_destroy_original)
#undef TGCX_VIEW_THUNK

static bool tgcx_ReplacePointer(uintptr_t* slot, uintptr_t expected, uintptr_t replacement) {
    if (*slot!=expected) return false;
    DWORD protection=0;
    if (!VirtualProtect(slot,4,PAGE_READWRITE,&protection)) return false;
    LONG previous=InterlockedCompareExchange(reinterpret_cast<volatile LONG*>(slot),static_cast<LONG>(replacement),static_cast<LONG>(expected));
    DWORD ignored=0;
    bool restored=VirtualProtect(slot,4,protection,&ignored)!=0;
    if (!restored) tgcx_Log("Pointer protection restore failed slot=%08X",reinterpret_cast<uintptr_t>(slot));
    return static_cast<uintptr_t>(previous)==expected;
}
static bool tgcx_ExecutablePointer(uintptr_t ptr) {
    MEMORY_BASIC_INFORMATION info={};
    if (!ptr || VirtualQuery(reinterpret_cast<void*>(ptr),&info,sizeof(info))!=sizeof(info) || info.State!=MEM_COMMIT) return false;
    DWORD protection=info.Protect&0xFF;
    if((info.Protect&PAGE_GUARD) || info.Type!=MEM_IMAGE || !(protection==PAGE_EXECUTE || protection==PAGE_EXECUTE_READ ||
        protection==PAGE_EXECUTE_READWRITE || protection==PAGE_EXECUTE_WRITECOPY))return false;
    // Shared COM-table records outlive device instances; keep each original code owner resident.
    HMODULE owner=nullptr;
    return GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_PIN,
        reinterpret_cast<LPCWSTR>(ptr),&owner)!=0;
}

struct tgcx_GuiRect { int left,top,width,height; };
static bool tgcx_ReadPoliticsRect(tgcx_GuiRect* rect) {
    __try {
        tgcx_gui_stage="Politics identity";
        if (!tgcx_politics || *reinterpret_cast<uintptr_t*>(tgcx_politics)!=tgcx_base+0xA0E458) return false;
        tgcx_gui_stage="root visibility";
        char* root=*reinterpret_cast<char**>(tgcx_politics+0x4C);
        if (!root || !root[0x67]) return false;
        tgcx_gui_stage="root methods";
        uintptr_t* vtable=*reinterpret_cast<uintptr_t**>(root);
        if (vtable[8]!=tgcx_base+0x5E4450 || vtable[9]!=tgcx_base+0x5E4030) return false;
        tgcx_gui_stage="renderer dimensions";
        char* renderer=*reinterpret_cast<char**>(root+0x90);
        if (!renderer) return false;
        rect->width=*reinterpret_cast<int*>(renderer+0x6B9BC);
        rect->height=*reinterpret_cast<int*>(renderer+0x6B9C0);
        if (rect->width<640 || rect->width>16384 || rect->height<480 || rect->height>16384) return false;
        tgcx_gui_stage="window position";
        uint32_t position=*reinterpret_cast<uint32_t*>(root+0x250);
        rect->left=static_cast<int16_t>(position);
        rect->top=static_cast<int16_t>(position>>16);
        return rect->left>=0 && rect->top>=0 && rect->left+370<=rect->width && rect->top+210<=rect->height;
    } __except(EXCEPTION_EXECUTE_HANDLER) { return false; }
}

static bool tgcx_AllocateSeats(const tgcx_Snapshot& sample, unsigned int seats[tgcx_ideology_count]) {
    if (!sample.shares_in_range || sample.sum<32768-static_cast<int64_t>(tgcx_ideology_count) || sample.sum>32768) return false;
    int64_t remainders[tgcx_ideology_count]={}; unsigned int assigned=0;
    for (unsigned int i=0;i<tgcx_ideology_count;++i) {
        if (sample.shares[i]<0 || sample.shares[i]>32768) return false;
        int64_t numerator=sample.shares[i]*100;
        seats[i]=static_cast<unsigned int>(numerator/sample.sum); assigned+=seats[i];
        remainders[i]=numerator%sample.sum;
    }
    while (assigned<100) {
        unsigned int best=0;
        for (unsigned int i=1;i<tgcx_ideology_count;++i)
            if (remainders[i]>remainders[best] || (remainders[i]==remainders[best] && sample.indices[i]<sample.indices[best])) best=i;
        ++seats[best]; ++assigned; remainders[best]=-1;
    }
    return assigned==100;
}
struct tgcx_Seat { float x,y; unsigned int ideology; };
static constexpr float tgcx_seat_radius=2.3f;
struct tgcx_HoverFrame {
    uintptr_t view,entity;
    tgcx_GuiRect gui;
    tgcx_Snapshot sample;
    tgcx_Seat dots[100];
    DWORD tick;
};
static tgcx_HoverFrame tgcx_hover={};
static SRWLOCK tgcx_hover_lock=SRWLOCK_INIT;
static unsigned int tgcx_hover_logged=0;
static const char* tgcx_hover_stage="no rendered frame";
static void tgcx_ClearHover() {
    AcquireSRWLockExclusive(&tgcx_hover_lock);tgcx_hover.view=0;ReleaseSRWLockExclusive(&tgcx_hover_lock);
}
static int tgcx_SeatAt(const tgcx_Seat dots[100],float x,float y) {
    // Match the visible outline, excluding its transparent feather and spaces between seats.
    for(unsigned int i=0;i<100;++i) {
        float dx=x-dots[i].x,dy=y-dots[i].y;
        if(dx*dx+dy*dy<=tgcx_seat_radius*tgcx_seat_radius)return static_cast<int>(i);
    }
    return -1;
}
// Left-to-right seating by candidate index (tgcx_ideology_candidates). Presentation only;
// engine indices/colours are still resolved by name. Main: Liberal left, Conservative centre, Reactionary right.
static constexpr unsigned int tgcx_seating_order[]={7,6,8,5,4,0,1,3,2};
static_assert(_countof(tgcx_seating_order)==tgcx_ideology_count,"every ideology has a seating position");
static void tgcx_SeatGeometry(const unsigned int seats[tgcx_ideology_count], tgcx_Seat dots[100]) {
    // Seven rows, 6 px apart; seats per row roughly proportional to radius (Main).
    const unsigned int counts[]={21,18,16,14,12,10,9};
    float angles[100]; unsigned int n=0;
    for (unsigned int ring=0;ring<7;++ring) {
        float radius=58.0f-6.0f*ring;
        for (unsigned int seat=0;seat<counts[ring];++seat,++n) {
            angles[n]=3.14159265358979323846f*(1.0f-static_cast<float>(seat)/static_cast<float>(counts[ring]-1));
            dots[n]={99.0f+radius*cosf(angles[n]),183.0f-radius*sinf(angles[n]),0};
        }
    }
    // Sweep left to right: by angle, then by x so the outermost seats close each end of the arc.
    unsigned int order[100];
    for (unsigned int i=0;i<100;++i) order[i]=i;
    for (unsigned int i=1;i<100;++i) for (unsigned int j=i;j;--j) {
        unsigned int a=order[j-1],b=order[j];
        if (angles[b]>angles[a] || (angles[b]==angles[a] && dots[b].x<dots[a].x)) { order[j-1]=b; order[j]=a; }
        else break;
    }
    unsigned int position=0,remaining=seats[tgcx_seating_order[0]];
    for (unsigned int i=0;i<100;++i) {
        while (!remaining && position+1<tgcx_ideology_count) remaining=seats[tgcx_seating_order[++position]];
        dots[order[i]].ideology=tgcx_seating_order[position];
        if (remaining) --remaining;
    }
}
struct tgcx_Vertex { float x,y,z,rhw; DWORD color; };
static constexpr DWORD tgcx_fvf=D3DFVF_XYZRHW|D3DFVF_DIFFUSE;
static inline tgcx_Vertex tgcx_V(float x,float y,DWORD color) { return {x-0.5f,y-0.5f,0,1,color}; }
static inline void tgcx_Quad(tgcx_Vertex* out,float x0,float y0,float x1,float y1,DWORD c00,DWORD c10,DWORD c01,DWORD c11) {
    out[0]=tgcx_V(x0,y0,c00);out[1]=tgcx_V(x1,y0,c10);out[2]=tgcx_V(x0,y1,c01);
    out[3]=tgcx_V(x1,y0,c10);out[4]=tgcx_V(x1,y1,c11);out[5]=tgcx_V(x0,y1,c01);
}
// Opaque panel over the native pie, fading to transparent over `feather` px outside it,
// so it blends into the Politics window instead of ending in a hard edge.
static HRESULT tgcx_SoftPanel(IDirect3DDevice9* device,float x,float y,float width,float height,float feather,DWORD color) {
    const DWORD c=color,t=color&0x00FFFFFF;
    const float l=x,r=x+width,u=y,d=y+height,L=l-feather,R=r+feather,U=u-feather,D=d+feather;
    tgcx_Vertex v[54];
    tgcx_Quad(v,   l,u,r,d, c,c,c,c);
    tgcx_Quad(v+6, l,U,r,u, t,t,c,c); tgcx_Quad(v+12,l,d,r,D, c,c,t,t);
    tgcx_Quad(v+18,L,u,l,d, t,c,t,c); tgcx_Quad(v+24,r,u,R,d, c,t,c,t);
    tgcx_Quad(v+30,L,U,l,u, t,t,t,c); tgcx_Quad(v+36,r,U,R,u, t,t,c,t);
    tgcx_Quad(v+42,L,d,l,D, t,c,t,t); tgcx_Quad(v+48,r,d,R,D, c,t,t,t);
    return device->DrawPrimitiveUP(D3DPT_TRIANGLELIST,18,v,sizeof(tgcx_Vertex));
}
static constexpr unsigned int tgcx_dot_segments=16;
static constexpr unsigned int tgcx_disc_vertices=tgcx_dot_segments*9; // fan (3) + fringe ring (6) per segment
// Solid disc of `radius` plus a transparent-going fringe of `fringe` px: one-pixel anti-aliasing.
static void tgcx_AppendDisc(tgcx_Vertex* out,const float* cosine,const float* sine,float x,float y,float radius,float fringe,DWORD color) {
    const DWORD t=color&0x00FFFFFF; const float outer=radius+fringe;
    for(unsigned int i=0;i<tgcx_dot_segments;++i,out+=9) {
        float x0=x+radius*cosine[i],y0=y+radius*sine[i],x1=x+radius*cosine[i+1],y1=y+radius*sine[i+1];
        float X0=x+outer*cosine[i],Y0=y+outer*sine[i],X1=x+outer*cosine[i+1],Y1=y+outer*sine[i+1];
        out[0]=tgcx_V(x,y,color);out[1]=tgcx_V(x0,y0,color);out[2]=tgcx_V(x1,y1,color);
        out[3]=tgcx_V(x0,y0,color);out[4]=tgcx_V(X0,Y0,t);out[5]=tgcx_V(x1,y1,color);
        out[6]=tgcx_V(x1,y1,color);out[7]=tgcx_V(X0,Y0,t);out[8]=tgcx_V(X1,Y1,t);
    }
}
// Two discs per seat (outline, fill). Static: the ordered callback is serialised by tgcx_render_busy.
static tgcx_Vertex tgcx_seat_vertices[100*2*tgcx_disc_vertices];

// Primitives only; no game art or font assets enter git.
static HRESULT tgcx_DrawChart(IDirect3DDevice9* device,const tgcx_Snapshot& sample,const tgcx_GuiRect& gui) {
    unsigned int seats[tgcx_ideology_count]={};
    if (!tgcx_AllocateSeats(sample,seats)) return S_FALSE;
    // Draw immediately after the native upper-house overlay, within the existing ordered UI scene.
    // Verify the active target, then set and restore our own viewport.
    IDirect3DSurface9* target=nullptr;IDirect3DSurface9* backbuffer=nullptr;
    HRESULT result=device->GetRenderTarget(0,&target);
    if(SUCCEEDED(result)) result=device->GetBackBuffer(0,0,D3DBACKBUFFER_TYPE_MONO,&backbuffer);
    D3DSURFACE_DESC desc={};
    bool correct=target && backbuffer && target==backbuffer;
    if(correct) result=backbuffer->GetDesc(&desc);
    if(target)target->Release();if(backbuffer)backbuffer->Release();
    if(FAILED(result))return result;
    if(!correct || desc.Width!=static_cast<UINT>(gui.width) || desc.Height!=static_cast<UINT>(gui.height))return S_FALSE;
    // politics_bg.dds at (18,9) ends the Upper House border at root y=100.
    // Start at its first background row, not the text box's maximum height.
    RECT chart_clip={ (std::max)(0,gui.left+37), (std::max)(0,gui.top+101),
        (std::min)(gui.width,gui.left+162), (std::min)(gui.height,gui.top+209) };
    if(chart_clip.left>=chart_clip.right || chart_clip.top>=chart_clip.bottom)return S_FALSE;
    D3DVIEWPORT9 viewport={0,0,static_cast<DWORD>(gui.width),static_cast<DWORD>(gui.height),0.0f,1.0f};
    IDirect3DStateBlock9* state=nullptr;
    result=device->CreateStateBlock(D3DSBT_ALL,&state);
    if (FAILED(result)) return result;
    result=state->Capture();
    if (FAILED(result)) { state->Release();return result; }
    // Configure only captured state. No render target/depth surface changes or persistent GPU resources.
#define TGCX_SET(call) if(SUCCEEDED(result)) result=(call)
    TGCX_SET(device->SetViewport(&viewport));
    TGCX_SET(device->SetVertexShader(nullptr));TGCX_SET(device->SetPixelShader(nullptr));
    TGCX_SET(device->SetFVF(tgcx_fvf));TGCX_SET(device->SetTexture(0,nullptr));
    TGCX_SET(device->SetRenderState(D3DRS_ZENABLE,FALSE));TGCX_SET(device->SetRenderState(D3DRS_ZWRITEENABLE,FALSE));
    TGCX_SET(device->SetRenderState(D3DRS_CULLMODE,D3DCULL_NONE));TGCX_SET(device->SetRenderState(D3DRS_LIGHTING,FALSE));
    TGCX_SET(device->SetRenderState(D3DRS_FOGENABLE,FALSE));TGCX_SET(device->SetRenderState(D3DRS_STENCILENABLE,FALSE));
    TGCX_SET(device->SetScissorRect(&chart_clip));TGCX_SET(device->SetRenderState(D3DRS_SCISSORTESTENABLE,TRUE));
    TGCX_SET(device->SetRenderState(D3DRS_ALPHATESTENABLE,FALSE));
    TGCX_SET(device->SetRenderState(D3DRS_ALPHABLENDENABLE,TRUE));TGCX_SET(device->SetRenderState(D3DRS_SRCBLEND,D3DBLEND_SRCALPHA));
    TGCX_SET(device->SetRenderState(D3DRS_DESTBLEND,D3DBLEND_INVSRCALPHA));TGCX_SET(device->SetRenderState(D3DRS_BLENDOP,D3DBLENDOP_ADD));
    TGCX_SET(device->SetRenderState(D3DRS_SEPARATEALPHABLENDENABLE,FALSE));TGCX_SET(device->SetRenderState(D3DRS_SRGBWRITEENABLE,FALSE));
    TGCX_SET(device->SetRenderState(D3DRS_COLORWRITEENABLE,15));TGCX_SET(device->SetRenderState(D3DRS_FILLMODE,D3DFILL_SOLID));
    TGCX_SET(device->SetTextureStageState(0,D3DTSS_COLOROP,D3DTOP_SELECTARG1));TGCX_SET(device->SetTextureStageState(0,D3DTSS_COLORARG1,D3DTA_DIFFUSE));
    TGCX_SET(device->SetTextureStageState(0,D3DTSS_ALPHAOP,D3DTOP_SELECTARG1));TGCX_SET(device->SetTextureStageState(0,D3DTSS_ALPHAARG1,D3DTA_DIFFUSE));
    TGCX_SET(device->SetTextureStageState(0,D3DTSS_TEXTURETRANSFORMFLAGS,D3DTTFF_DISABLE));
    TGCX_SET(device->SetTextureStageState(0,D3DTSS_TEXCOORDINDEX,0));TGCX_SET(device->SetTextureStageState(0,D3DTSS_RESULTARG,D3DTA_CURRENT));
    TGCX_SET(device->SetTextureStageState(1,D3DTSS_COLOROP,D3DTOP_DISABLE));
    tgcx_Seat dots[100];tgcx_SeatGeometry(seats,dots);
    // Covers the 108x108 chart_upper_house_overlay at (42,100) (TGC v2.5.2 country_politics.gui).
    TGCX_SET(tgcx_SoftPanel(device,static_cast<float>(gui.left+40),static_cast<float>(gui.top+101),119,105,3.0f,0xFFCBC9C1));
    float cosine[tgcx_dot_segments+1],sine[tgcx_dot_segments+1];
    for(unsigned int i=0;i<=tgcx_dot_segments;++i) {
        float angle=6.28318530717958647692f*static_cast<float>(i%tgcx_dot_segments)/static_cast<float>(tgcx_dot_segments);
        cosine[i]=cosf(angle);sine[i]=sinf(angle);
    }
    for(unsigned int i=0;i<100;++i) {
        float x=gui.left+dots[i].x,y=gui.top+dots[i].y;
        tgcx_Vertex* out=tgcx_seat_vertices+i*2*tgcx_disc_vertices;
        tgcx_AppendDisc(out,cosine,sine,x,y,tgcx_seat_radius,0.8f,0xFF34332B);
        tgcx_AppendDisc(out+tgcx_disc_vertices,cosine,sine,x,y,1.75f,0.6f,sample.colors[dots[i].ideology]);
    }
    TGCX_SET(device->DrawPrimitiveUP(D3DPT_TRIANGLELIST,100*2*tgcx_disc_vertices/3,tgcx_seat_vertices,sizeof(tgcx_Vertex)));
#undef TGCX_SET
    HRESULT restore=state->Apply();state->Release();
    if (FAILED(restore)) {tgcx_Log("Renderer state restore failed HRESULT=%08X",static_cast<unsigned int>(restore));return restore;}
    if (SUCCEEDED(result) && result!=S_FALSE) {
        tgcx_chart_tick=GetTickCount();tgcx_chart_drawn=true;
    }
    return result;
}

typedef IDirect3D9* (WINAPI* tgcx_Create9Fn)(UINT);
typedef HRESULT (WINAPI* tgcx_CreateDeviceFn)(IDirect3D9*,UINT,D3DDEVTYPE,HWND,DWORD,D3DPRESENT_PARAMETERS*,IDirect3DDevice9**);
typedef HRESULT (WINAPI* tgcx_EndFn)(IDirect3DDevice9*);
typedef HRESULT (WINAPI* tgcx_PresentFn)(IDirect3DDevice9*,const RECT*,const RECT*,HWND,const RGNDATA*);
typedef HRESULT (WINAPI* tgcx_ResetFn)(IDirect3DDevice9*,D3DPRESENT_PARAMETERS*);
struct tgcx_FactoryHooks {uintptr_t* table; tgcx_CreateDeviceFn create;};
struct tgcx_DeviceHooks {uintptr_t* table;tgcx_EndFn end;tgcx_PresentFn present;tgcx_ResetFn reset;};
static tgcx_FactoryHooks tgcx_factories[8]={};static tgcx_DeviceHooks tgcx_devices[8]={};
static SRWLOCK tgcx_hook_lock=SRWLOCK_INIT;
static tgcx_Create9Fn tgcx_create9_original=nullptr;
static volatile LONG tgcx_render_busy=0;
static uint32_t tgcx_present_count=0,tgcx_draw_count=0;
static bool tgcx_render_failed=false;
static tgcx_DeviceHooks* tgcx_Device(IDirect3DDevice9* device) {
    uintptr_t* table=*reinterpret_cast<uintptr_t**>(device);
    for(auto& entry:tgcx_devices) if(entry.table==table)return &entry;
    return nullptr;
}
static HRESULT WINAPI tgcx_EndScene(IDirect3DDevice9* device) {
    tgcx_DeviceHooks* entry=tgcx_Device(device);return entry?entry->end(device):D3DERR_INVALIDCALL;
}
static HRESULT WINAPI tgcx_Present(IDirect3DDevice9* device,const RECT* source,const RECT* destination,HWND window,const RGNDATA* dirty) {
    tgcx_DeviceHooks* entry=tgcx_Device(device);if(!entry)return D3DERR_INVALIDCALL;
    HRESULT result=entry->present(device,source,destination,window,dirty);
    if(FAILED(result)){tgcx_CpuScope cpu;tgcx_chart_drawn=false;tgcx_ClearHover();}
    return result;
}
static HRESULT WINAPI tgcx_Reset(IDirect3DDevice9* device,D3DPRESENT_PARAMETERS* parameters) {
    tgcx_DeviceHooks* entry=tgcx_Device(device);if(!entry)return D3DERR_INVALIDCALL;
    { tgcx_CpuScope cpu;tgcx_chart_drawn=false;tgcx_ClearHover();tgcx_Log("Device Reset: no persistent chart resources"); }
    HRESULT result=entry->reset(device,parameters);
    { tgcx_CpuScope cpu;tgcx_render_failed=false;tgcx_Log("Device Reset result=%08X",static_cast<unsigned int>(result)); }
    return result;
}
// from V2DLL: V2TechButton.cpp, device-acquisition pattern; guards/renderer are our implementation.
static bool tgcx_HookDevice(IDirect3DDevice9* device) {
    uintptr_t* table=*reinterpret_cast<uintptr_t**>(device);
    AcquireSRWLockExclusive(&tgcx_hook_lock);
    if(tgcx_Device(device)) {ReleaseSRWLockExclusive(&tgcx_hook_lock);return true;}
    tgcx_DeviceHooks* entry=nullptr;
    for(auto& candidate:tgcx_devices)if(!candidate.table){entry=&candidate;break;}
    bool ok=entry && tgcx_ExecutablePointer(table[16]) && tgcx_ExecutablePointer(table[17]) && tgcx_ExecutablePointer(table[42]);
    if(ok) {
        *entry={table,reinterpret_cast<tgcx_EndFn>(table[42]),reinterpret_cast<tgcx_PresentFn>(table[17]),reinterpret_cast<tgcx_ResetFn>(table[16])};
        // Originals are published before any callback is reachable. Shared COM tables need no object-lifetime storage.
        bool end=tgcx_ReplacePointer(table+42,reinterpret_cast<uintptr_t>(entry->end),reinterpret_cast<uintptr_t>(&tgcx_EndScene));
        bool present=tgcx_ReplacePointer(table+17,reinterpret_cast<uintptr_t>(entry->present),reinterpret_cast<uintptr_t>(&tgcx_Present));
        bool reset=tgcx_ReplacePointer(table+16,reinterpret_cast<uintptr_t>(entry->reset),reinterpret_cast<uintptr_t>(&tgcx_Reset));
        ok=end&&present&&reset;
        if(!ok) {
            if(end)tgcx_ReplacePointer(table+42,reinterpret_cast<uintptr_t>(&tgcx_EndScene),reinterpret_cast<uintptr_t>(entry->end));
            if(present)tgcx_ReplacePointer(table+17,reinterpret_cast<uintptr_t>(&tgcx_Present),reinterpret_cast<uintptr_t>(entry->present));
            if(reset)tgcx_ReplacePointer(table+16,reinterpret_cast<uintptr_t>(&tgcx_Reset),reinterpret_cast<uintptr_t>(entry->reset));
            // Retain originals even after rollback in case an already-entered callback completes.
        }
    }
    ReleaseSRWLockExclusive(&tgcx_hook_lock);
    tgcx_Log("D3D9 device callbacks %s table=%08X",ok?"installed":"rejected",reinterpret_cast<uintptr_t>(table));return ok;
}
// Native icon lookup: parallel vectors of 28-byte strings and object pointers.
// FUN_009E4D40/FUN_009E6B30; bounded read only, no engine string construction.
static uintptr_t tgcx_GuiEntity(char* root,uintptr_t renderer,const char* expected,uintptr_t entity_table) {
    if(!root || *reinterpret_cast<uintptr_t*>(root+0x90)!=renderer) return 0;
    auto* table=*reinterpret_cast<uintptr_t**>(root);
    if(table[17]!=tgcx_base+0x5E4D40) return 0;
    uintptr_t objects=*reinterpret_cast<uintptr_t*>(root+0x2AC);
    uintptr_t object_end=*reinterpret_cast<uintptr_t*>(root+0x2B0);
    uintptr_t names=*reinterpret_cast<uintptr_t*>(root+0x2BC);
    uintptr_t name_end=*reinterpret_cast<uintptr_t*>(root+0x2C0);
    if(!objects || !names || object_end<objects || name_end<names ||
        (name_end-names)%28 || (name_end-names)/28>256 ||
        (object_end-objects)/4!=(name_end-names)/28 || (object_end-objects)%4) return 0;
    for(unsigned int i=0;i<(name_end-names)/28;++i) {
        char* name=reinterpret_cast<char*>(names+28*i);
        if(*reinterpret_cast<uint32_t*>(name+16)!=strlen(expected)) continue;
        const char* text=*reinterpret_cast<uint32_t*>(name+20)>15?*reinterpret_cast<const char**>(name):name;
        if(!text || memcmp(text,expected,strlen(expected))) continue;
        uintptr_t icon=*reinterpret_cast<uintptr_t*>(objects+4*i);
        if(!icon || *reinterpret_cast<uintptr_t*>(icon)!=tgcx_base+0xA3A930)return 0;
        uintptr_t entity=*reinterpret_cast<uintptr_t*>(icon+0x94);
        return entity && *reinterpret_cast<uintptr_t*>(entity)==tgcx_base+entity_table?entity:0;
    }
    return 0;
}
static uintptr_t tgcx_PoliticsEntity(uintptr_t renderer,const char* expected,uintptr_t entity_table) {
    if(!tgcx_politics)return 0;
    return tgcx_GuiEntity(*reinterpret_cast<char**>(tgcx_politics+0x4C),renderer,expected,entity_table);
}
static bool tgcx_IsUpperHouseOverlay(uintptr_t renderer,uintptr_t entity) {
    return entity && tgcx_PoliticsEntity(renderer,"chart_upper_house_overlay",0xA3FF08)==entity;
}
static bool tgcx_NativeSlices(uintptr_t entity,const tgcx_Snapshot& sample,uintptr_t* slices_out) {
    tgcx_hover_stage="native ideology vector";
    char* manager=*reinterpret_cast<char**>(tgcx_base+0xE58A3C);
    if(!manager)return false;
    uintptr_t begin=*reinterpret_cast<uintptr_t*>(manager+0xC),end=*reinterpret_cast<uintptr_t*>(manager+0x10);
    if(!begin || end<begin || end-begin!=sample.array_entries*4)return false;
    int positive=0;
    for(unsigned int i=0;i<tgcx_ideology_count;++i) {
        if(reinterpret_cast<char**>(begin)[sample.indices[i]]!=tgcx_FindIdeology(manager,tgcx_ideology_candidates[i]))return false;
        if(sample.shares[i]>0)++positive;
    }
    tgcx_hover_stage="native slice vector";
    uintptr_t slices=*reinterpret_cast<uintptr_t*>(entity+0x158),end_slices=*reinterpret_cast<uintptr_t*>(entity+0x15C);
    if(!slices || end_slices<slices || end_slices-slices!=static_cast<uintptr_t>(positive)*36)return false;
    for(int i=0;i<positive;++i)if(reinterpret_cast<int*>(slices+i*36)[8]!=i)return false;
    *slices_out=slices;return true;
}
static void tgcx_PublishHover(uintptr_t renderer,const tgcx_GuiRect& gui,const tgcx_Snapshot& sample) {
    uintptr_t chart=tgcx_PoliticsEntity(renderer,"chart_upper_house",0xA3BD58);
    unsigned int seats[tgcx_ideology_count]={};
    if(!chart || !tgcx_AllocateSeats(sample,seats))return;
    tgcx_HoverFrame frame={};frame.view=tgcx_politics;frame.entity=chart;frame.gui=gui;frame.sample=sample;frame.tick=GetTickCount();
    tgcx_SeatGeometry(seats,frame.dots);
    AcquireSRWLockExclusive(&tgcx_hover_lock);tgcx_hover=frame;ReleaseSRWLockExclusive(&tgcx_hover_lock);
}
// Native scalar outputs only. -1 delegates to the original pie; 0 uses native no-hover; 1 selects a seat.
static int tgcx_QueryHoverImpl(uintptr_t entity,float x,float y,int* slice,int* weight) {
    tgcx_HoverFrame frame={};
    AcquireSRWLockShared(&tgcx_hover_lock);frame=tgcx_hover;ReleaseSRWLockShared(&tgcx_hover_lock);
    if(!entity || !frame.view || frame.view!=tgcx_politics || entity!=frame.entity ||
        !tgcx_chart_drawn || GetTickCount()-frame.tick>1000)return -1;
    __try {
        tgcx_hover_stage="view/position";
        tgcx_GuiRect gui={};tgcx_Snapshot sample={};bool fault=false;
        if(!tgcx_ReadPoliticsRect(&gui) || memcmp(&gui,&frame.gui,sizeof(gui)))return -1;
        uintptr_t renderer=*reinterpret_cast<uintptr_t*>(*reinterpret_cast<uintptr_t*>(tgcx_politics+0x4C)+0x90);
        tgcx_hover_stage="entity/snapshot";
        if(!*reinterpret_cast<unsigned char*>(renderer+0x6BCA0) ||
            tgcx_PoliticsEntity(renderer,"chart_upper_house",0xA3BD58)!=entity ||
            !tgcx_ReadSnapshot(&sample,&fault))return -1;
        // A loading/country/share change invalidates the published frame until a new successful draw.
        tgcx_hover_stage="changed frame";
        if(sample.country!=frame.sample.country || sample.world!=frame.sample.world || sample.array!=frame.sample.array ||
            sample.date_hours!=frame.sample.date_hours || !sample.shares_in_range ||
            memcmp(sample.indices,frame.sample.indices,sizeof(sample.indices)) ||
            memcmp(sample.shares,frame.sample.shares,sizeof(sample.shares)))return -1;
        uintptr_t slices=0;if(!tgcx_NativeSlices(entity,sample,&slices))return -1;
        int hit=tgcx_SeatAt(frame.dots,x-gui.left,y-gui.top);
        if(hit<0)return 0;
        unsigned int ideology=frame.dots[hit].ideology;
        int ordinal=0;
        for(unsigned int i=0;i<tgcx_ideology_count;++i)if(sample.shares[i]>0) {
            if(sample.indices[i]<sample.indices[ideology])++ordinal;
        }
        auto* record=reinterpret_cast<int*>(slices+ordinal*36);
        if(slice && weight) {
            *slice=ordinal;*weight=record[0];
            if(!(tgcx_hover_logged&(1u<<ideology))) {
                tgcx_hover_logged|=1u<<ideology;
                tgcx_Log("Hemicycle native hover ideology=%s index=%u slice=%d screen=(%.0f,%.0f)",
                    tgcx_ideology_candidates[ideology],sample.indices[ideology],ordinal,x,y);
            }
        }
        return 1;
    } __except(EXCEPTION_EXECUTE_HANDLER) {return -1;}
}
static int __cdecl tgcx_QueryBounds(uintptr_t entity,float x,float y) {
    tgcx_CpuScope cpu;return tgcx_QueryHoverImpl(entity,x,y,nullptr,nullptr);
}
static int __cdecl tgcx_QuerySlice(uintptr_t entity,int x,int y,int* slice,int* weight) {
    tgcx_CpuScope cpu;
    if(!slice || !weight)return -1;
    return tgcx_QueryHoverImpl(entity,static_cast<float>(x),static_cast<float>(y),slice,weight);
}
static uintptr_t tgcx_bounds_original=0,tgcx_slice_original=0;
// from V2DLL: V2TechButton.cpp, register-preservation pattern. Native scalar ABIs verified in HEMI-3.
__declspec(naked) static void tgcx_BoundsThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push dword ptr [ebx+44] } __asm { push dword ptr [ebx+40] } __asm { push dword ptr [ebx+24] }
    __asm { call tgcx_QueryBounds } __asm { add esp,12 }
    __asm { cmp eax,-1 } __asm { je delegate } __asm { test eax,eax } __asm { jz empty }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } __asm { fld1 } __asm { ret 32 }
empty:
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } __asm { fldz } __asm { ret 32 }
delegate:
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { jmp dword ptr [tgcx_bounds_original] }
}
// The original helper receives the entity in EAX and pops four stack arguments.
__declspec(naked) static void tgcx_SliceThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] } __asm { cld }
    __asm { push dword ptr [ebx+52] } __asm { push dword ptr [ebx+48] }
    __asm { push dword ptr [ebx+44] } __asm { push dword ptr [ebx+40] } __asm { push dword ptr [ebx+28] }
    __asm { call tgcx_QuerySlice } __asm { add esp,20 }
    __asm { cmp eax,-1 } __asm { je delegate }
    __asm { mov [ebx+28],eax }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd } __asm { ret 16 }
delegate:
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { jmp dword ptr [tgcx_slice_original] }
}
static bool tgcx_InstallHover() {
    unsigned int guards=0;
    for(const auto& signature:tgcx_signatures)
        if(signature.rva==0x2D52C6 || signature.rva==0xA3BDA8 || signature.rva==0x5E0B70 || signature.rva==0x5E0C90) {
            if(!tgcx_CheckSignature(signature))return false;
            ++guards;
        }
    if(guards!=4)return false;
    auto* site=reinterpret_cast<unsigned char*>(tgcx_base+0x2D52C6);
    auto* slot=reinterpret_cast<uintptr_t*>(tgcx_base+0xA3BDA8);
    DWORD protection=0,ignored=0;
    if(!VirtualProtect(site,5,PAGE_EXECUTE_READWRITE,&protection))return false;
    tgcx_bounds_original=tgcx_base+0x5E0B70;tgcx_slice_original=tgcx_base+0x5E0C90;
    if(!tgcx_ReplacePointer(slot,tgcx_bounds_original,reinterpret_cast<uintptr_t>(&tgcx_BoundsThunk))) {
        VirtualProtect(site,5,protection,&ignored);return false;
    }
    uint32_t displacement=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&tgcx_SliceThunk)-(tgcx_base+0x2D52CB));
    memcpy(site+1,&displacement,4);
    bool restored=VirtualProtect(site,5,protection,&ignored)!=0;
    bool flushed=FlushInstructionCache(GetCurrentProcess(),site,5)!=0;
    tgcx_Log("Native scalar hover installed CALL_RVA=2D52C6 bounds_slot_RVA=A3BDA8 protection_restored=%u cache_flushed=%u; tooltip slot 10 untouched",restored,flushed);
    return true;
}
static void tgcx_AfterEntityImpl(uintptr_t renderer,uintptr_t entity) {
    if(!tgcx_drawing_enabled || !tgcx_politics || tgcx_render_failed || InterlockedCompareExchange(&tgcx_render_busy,1,0)!=0) return;
    __try {
        if(renderer && (*reinterpret_cast<uintptr_t*>(renderer)==tgcx_base+0xA38324 ||
            *reinterpret_cast<uintptr_t*>(renderer)==tgcx_base+0xA19B8C) &&
            *reinterpret_cast<unsigned char*>(renderer+0x6BCA0)) {
            tgcx_BillAfterEntity(renderer,entity);
            tgcx_GuiRect gui={};tgcx_Snapshot sample={};bool fault=false;
            if(tgcx_ReadPoliticsRect(&gui) && tgcx_IsUpperHouseOverlay(renderer,entity)) {
                tgcx_chart_drawn=false;tgcx_ClearHover();
                if(!tgcx_ReadSnapshot(&sample,&fault)) {
                    InterlockedExchange(&tgcx_render_busy,0);return;
                }
                auto* device=*reinterpret_cast<IDirect3DDevice9**>(renderer+0x64);
                if(device) {
                    uintptr_t chart=tgcx_PoliticsEntity(renderer,"chart_upper_house",0xA3BD58),slices=0;
                    if(!chart || !tgcx_NativeSlices(chart,sample,&slices)) {
                        if(!tgcx_guard_logged)tgcx_Log("Hemicycle blocked: hover %s; original pie retained",tgcx_hover_stage);
                        tgcx_guard_logged=true;InterlockedExchange(&tgcx_render_busy,0);return;
                    }
                    // No BeginScene/EndScene: this callback is already inside the native UI scene.
                    HRESULT result=tgcx_DrawChart(device,sample,gui);
                    if(result==S_OK) {
                        tgcx_PublishHover(renderer,gui,sample);
                        ++tgcx_draw_count;
                        if(tgcx_draw_count==1)tgcx_Log("Hemicycle first ordered draw tag=%.4s seats=100 rows=7 root=(%d,%d) vector_entries=%u",sample.country_tag,gui.left,gui.top,sample.array_entries);
                    } else if(FAILED(result) && result!=D3DERR_DEVICELOST && result!=D3DERR_DEVICENOTRESET) {
                        tgcx_Log("Chart draw disabled HRESULT=%08X; original pie retained",static_cast<unsigned int>(result));tgcx_render_failed=true;
                    }
                }
            }
        }
    } __except(EXCEPTION_EXECUTE_HANDLER) {
        if(!tgcx_guard_logged)tgcx_Log("Hemicycle blocked: ordered GUI read fault");tgcx_guard_logged=true;
    }
    InterlockedExchange(&tgcx_render_busy,0);
}
static void __cdecl tgcx_AfterEntity(uintptr_t renderer,uintptr_t entity) {
    tgcx_CpuScope cpu;tgcx_AfterEntityImpl(renderer,entity);
}
static uintptr_t tgcx_entity_resume=0;
// from V2DLL: V2TechButton.cpp, entry-hook preservation pattern; original CMP is replicated exactly.
__declspec(naked) static void tgcx_OrderedEntityThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] }
    __asm { cld } __asm { push esi } __asm { push dword ptr [ebx+16] }
    __asm { call tgcx_AfterEntity } __asm { add esp,8 }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { cmp byte ptr [esi+0xF0],0 }
    __asm { jmp dword ptr [tgcx_entity_resume] }
}
// Final presentation supplies sampling and diagnostics only; never paints over completed UI.
static void tgcx_BeforePresentImpl(uintptr_t renderer) {
    __try {
        tgcx_BillTick();tgcx_FavourTick();tgcx_TplTick();tgcx_CfTick();
        ++tgcx_present_count;
        if(!tgcx_politics || GetTickCount()-tgcx_chart_tick>1000) tgcx_chart_drawn=false;
        DWORD previous=tgcx_last_sample;if(tgcx_drawing_enabled)tgcx_OnFramePump();
        bool report=tgcx_politics && (!tgcx_guard_logged || GetTickCount()-tgcx_guard_log_tick>=10000);
        if(report && !tgcx_chart_drawn) {
            tgcx_GuiRect gui={};
            if(!renderer || (*reinterpret_cast<uintptr_t*>(renderer)!=tgcx_base+0xA38324 && *reinterpret_cast<uintptr_t*>(renderer)!=tgcx_base+0xA19B8C))
                tgcx_Log("Hemicycle blocked: native renderer identity");
            else if(!tgcx_ReadPoliticsRect(&gui))tgcx_Log("Hemicycle blocked: GUI %s",tgcx_gui_stage);
            else tgcx_Log("Hemicycle waiting: ordered upper-house overlay draw (or rejected snapshot/backbuffer)");
        }
        if(report){tgcx_guard_logged=true;tgcx_guard_log_tick=GetTickCount();}
        if(previous!=tgcx_last_sample || report)tgcx_Log("render final_frames=%u ordered_draws=%u politics=%08X chart=%u",tgcx_present_count,tgcx_draw_count,tgcx_politics,tgcx_chart_drawn);
    } __except(EXCEPTION_EXECUTE_HANDLER) {if(!tgcx_guard_logged)tgcx_Log("Hemicycle blocked: native presentation read fault");tgcx_guard_logged=true;}
}
static void __cdecl tgcx_BeforePresent(uintptr_t renderer) {
    tgcx_CpuScope cpu;tgcx_BeforePresentImpl(renderer);
}
static uintptr_t tgcx_present_resume=0;
// from V2DLL: V2TechButton.cpp, entry-hook preservation pattern; original INC is replicated exactly.
__declspec(naked) static void tgcx_NativePresentThunk() {
    __asm { pushfd } __asm { pushad } __asm { mov ebx,esp }
    __asm { sub esp,528 } __asm { and esp,-16 } __asm { fxsave [esp] }
    __asm { cld } __asm { push esi } __asm { call tgcx_BeforePresent } __asm { add esp,4 }
    __asm { fxrstor [esp] } __asm { mov esp,ebx } __asm { popad } __asm { popfd }
    __asm { inc dword ptr [esi+0x6BC8C] }
    __asm { jmp dword ptr [tgcx_present_resume] }
}
static bool tgcx_InstallNativeStages() {
    const tgcx_Signature* present=nullptr;const tgcx_Signature* ordered=nullptr;
    for(const auto& entry:tgcx_signatures) {
        if(entry.rva==0x59A520)present=&entry;
        if(entry.rva==0x599F22)ordered=&entry;
    }
    if(!present || !ordered || !tgcx_CheckSignature(*present) || !tgcx_CheckSignature(*ordered))return false;
    auto* final_site=reinterpret_cast<unsigned char*>(tgcx_base+0x59A520);
    auto* draw_site=reinterpret_cast<unsigned char*>(tgcx_base+0x599F22);
    DWORD final_protection=0,draw_protection=0,ignored=0;
    if(!VirtualProtect(draw_site,7,PAGE_EXECUTE_READWRITE,&draw_protection))return false;
    if(!VirtualProtect(final_site,6,PAGE_EXECUTE_READWRITE,&final_protection)) {
        VirtualProtect(draw_site,7,draw_protection,&ignored);return false;
    }
    tgcx_present_resume=tgcx_base+0x59A526;tgcx_entity_resume=tgcx_base+0x599F29;
    unsigned char final_patch[6]={0xE9,0,0,0,0,0x90},draw_patch[7]={0xE9,0,0,0,0,0x90,0x90};
    uint32_t jump=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&tgcx_NativePresentThunk)-(tgcx_base+0x59A525));memcpy(final_patch+1,&jump,4);
    jump=static_cast<uint32_t>(reinterpret_cast<uintptr_t>(&tgcx_OrderedEntityThunk)-(tgcx_base+0x599F27));memcpy(draw_patch+1,&jump,4);
    memcpy(draw_site,draw_patch,7);memcpy(final_site,final_patch,6);
    bool draw_restored=VirtualProtect(draw_site,7,draw_protection,&ignored)!=0;
    bool final_restored=VirtualProtect(final_site,6,final_protection,&ignored)!=0;
    bool draw_flushed=FlushInstructionCache(GetCurrentProcess(),draw_site,7)!=0;
    bool final_flushed=FlushInstructionCache(GetCurrentProcess(),final_site,6)!=0;
    tgcx_Log("Native ordered draw/Present hooks installed RVA=599F22/59A520 protection_restored=%u cache_flushed=%u",draw_restored&&final_restored,draw_flushed&&final_flushed);
    return true;
}
// from V2DLL: V2TechButton.cpp, HookCreateDevice acquisition pattern; creation arguments forwarded unchanged.
static HRESULT WINAPI tgcx_CreateDevice(IDirect3D9* factory,UINT adapter,D3DDEVTYPE type,HWND window,DWORD flags,D3DPRESENT_PARAMETERS* parameters,IDirect3DDevice9** output) {
    uintptr_t* table=*reinterpret_cast<uintptr_t**>(factory);tgcx_CreateDeviceFn original=nullptr;
    for(const auto& entry:tgcx_factories)if(entry.table==table)original=entry.create;
    if(!original)return D3DERR_INVALIDCALL;
    HRESULT result=original(factory,adapter,type,window,flags,parameters,output);
    if(SUCCEEDED(result) && output && *output) {tgcx_CpuScope cpu;tgcx_HookDevice(*output);}
    return result;
}
// from V2DLL: V2TechButton.cpp, HookDirect3DCreate9 acquisition pattern; bounded shared-table records added.
static IDirect3D9* WINAPI tgcx_Create9(UINT version) {
    IDirect3D9* factory=tgcx_create9_original(version);
    if(factory) {
        tgcx_CpuScope cpu;uintptr_t* table=*reinterpret_cast<uintptr_t**>(factory);
        AcquireSRWLockExclusive(&tgcx_hook_lock);
        bool known=false;for(const auto& entry:tgcx_factories)if(entry.table==table)known=true;
        if(!known)for(auto& entry:tgcx_factories)if(!entry.table) {
            if(tgcx_ExecutablePointer(table[16])) {
                entry={table,reinterpret_cast<tgcx_CreateDeviceFn>(table[16])};
                if(!tgcx_ReplacePointer(table+16,reinterpret_cast<uintptr_t>(entry.create),reinterpret_cast<uintptr_t>(&tgcx_CreateDevice)))tgcx_Log("D3D9 CreateDevice hook rejected");
            }
            break;
        }
        ReleaseSRWLockExclusive(&tgcx_hook_lock);
    }
    return factory;
}

static bool tgcx_InstallRenderer() {
    // Keep DLL-0 fixture coverage while replacing its restricted time-advance hook in production.
    (void)&tgcx_PatchFramePumpCall;
    __try {
        auto* dos=reinterpret_cast<IMAGE_DOS_HEADER*>(tgcx_base);
        auto* nt=reinterpret_cast<IMAGE_NT_HEADERS32*>(tgcx_base+dos->e_lfanew);
        auto directory=nt->OptionalHeader.DataDirectory[IMAGE_DIRECTORY_ENTRY_IMPORT];
        if(!directory.VirtualAddress || directory.Size>tgcx_image_size || directory.VirtualAddress>tgcx_image_size-directory.Size)return false;
        auto* descriptor=reinterpret_cast<IMAGE_IMPORT_DESCRIPTOR*>(tgcx_base+directory.VirtualAddress);
        uintptr_t* slot=nullptr;
        for(unsigned int n=0;n<directory.Size/sizeof(*descriptor) && descriptor[n].Name;++n) {
            const auto& item=descriptor[n];
            if(!item.OriginalFirstThunk || _stricmp(reinterpret_cast<const char*>(tgcx_base+item.Name),"d3d9.dll"))continue;
            auto* lookup=reinterpret_cast<uint32_t*>(tgcx_base+item.OriginalFirstThunk);
            for(unsigned int i=0;i<1024 && lookup[i];++i) {
                if(IMAGE_SNAP_BY_ORDINAL32(lookup[i]))continue;
                auto* name=reinterpret_cast<IMAGE_IMPORT_BY_NAME*>(tgcx_base+lookup[i]);
                if(!strcmp(reinterpret_cast<const char*>(name->Name),"Direct3DCreate9"))slot=reinterpret_cast<uintptr_t*>(tgcx_base+item.FirstThunk)+i;
            }
        }
        HMODULE graphics=GetModuleHandleW(L"d3d9.dll");
        uintptr_t native=reinterpret_cast<uintptr_t>(graphics?GetProcAddress(graphics,"Direct3DCreate9"):nullptr);
        if(!slot || !native || !tgcx_ExecutablePointer(*slot))return false;
        uintptr_t expected=*slot;
        // MOD-1: another DLL (V2DLL) may already hook Direct3DCreate9; chain through it.
        if(expected!=native) {
            HMODULE owner=nullptr;char name[MAX_PATH]="unknown";
            if(GetModuleHandleExA(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS|GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
                                  reinterpret_cast<LPCSTR>(expected),&owner) && owner)GetModuleFileNameA(owner,name,sizeof(name));
            tgcx_Log("Direct3DCreate9 already hooked by %s; chaining",name);
        }
        uintptr_t* view=reinterpret_cast<uintptr_t*>(tgcx_base+0xA0E458);
        tgcx_show_original=tgcx_base+0x2D2C10;tgcx_hide_original=tgcx_base+0x2D2C40;
        tgcx_destroy_original=tgcx_base+0x2D2B00;
        if(view[1]!=tgcx_destroy_original || view[2]!=tgcx_show_original || view[4]!=tgcx_hide_original) {
            tgcx_Log("Drawing rejected: CPoliticsView slots 1/2/4 are not native");return false;
        }
        // Slot 10 (tooltip) is never written by TGCX (P27); another DLL may own it.
        if(view[10]!=tgcx_base+0x2D2DD0)tgcx_Log("CPoliticsView slot 10 is not native (FOREIGN); left alone");
        // All replacements compare-and-swap the validated original; independent failures are logged and reversible.
        bool destroy=tgcx_ReplacePointer(view+1,tgcx_destroy_original,reinterpret_cast<uintptr_t>(&tgcx_DestroyThunk));
        bool show=tgcx_ReplacePointer(view+2,tgcx_show_original,reinterpret_cast<uintptr_t>(&tgcx_ShowThunk));
        bool hide=tgcx_ReplacePointer(view+4,tgcx_hide_original,reinterpret_cast<uintptr_t>(&tgcx_HideThunk));
        tgcx_create9_original=reinterpret_cast<tgcx_Create9Fn>(expected);
        bool create=destroy&&show&&hide&&tgcx_ReplacePointer(slot,expected,reinterpret_cast<uintptr_t>(&tgcx_Create9));
        bool hover=create && tgcx_InstallHover();
        if(!hover) {
            if(create)tgcx_Log("Drawing rejected: native scalar hover guards or installation failed; original pie retained");
            if(create)tgcx_ReplacePointer(slot,reinterpret_cast<uintptr_t>(&tgcx_Create9),expected);
            if(destroy)tgcx_ReplacePointer(view+1,reinterpret_cast<uintptr_t>(&tgcx_DestroyThunk),tgcx_destroy_original);
            if(show)tgcx_ReplacePointer(view+2,reinterpret_cast<uintptr_t>(&tgcx_ShowThunk),tgcx_show_original);
            if(hide)tgcx_ReplacePointer(view+4,reinterpret_cast<uintptr_t>(&tgcx_HideThunk),tgcx_hide_original);
            return false;
        }
        tgcx_drawing_enabled=true;
        tgcx_Log("Drawing installed: Direct3DCreate9 IAT_RVA=%06X; Politics lifecycle and scalar hover guarded; native tooltip untouched",static_cast<unsigned int>(reinterpret_cast<uintptr_t>(slot)-tgcx_base));
        return true;
    } __except(EXCEPTION_EXECUTE_HANDLER) {return false;}
}
