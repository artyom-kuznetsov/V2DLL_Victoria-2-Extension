// FUN_008688b0 @ 008688b0 body=[[008688b0, 00869563]]


void FUN_008688b0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  TypeDescriptor **ppTVar3;
  TypeDescriptor **ppTVar4;
  TypeDescriptor **ppTStack_ac;
  TypeDescriptor **ppTStack_a8;
  TypeDescriptor **ppTStack_a4;
  TypeDescriptor **ppTStack_a0;
  TypeDescriptor TStack_9c;
  undefined1 local_88 [8];
  undefined1 *local_80;
  undefined1 local_7c [8];
  undefined1 *local_74;
  undefined1 local_70 [8];
  undefined1 *local_68;
  undefined1 local_64 [8];
  undefined1 *local_5c;
  undefined1 local_58 [8];
  undefined1 *local_50;
  char local_4c [8];
  char *local_44;
  TypeDescriptor **local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  TypeDescriptor **local_2c;
  TypeDescriptor **local_28;
  TypeDescriptor **local_20;
  TypeDescriptor *local_1c;
  TypeDescriptor *local_18;
  char local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52b74;
  local_10 = ExceptionList;
  TStack_9c.spare = (void *)0x8688d5;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_009be180();
  TStack_9c.spare = (void *)*puVar2;
  TStack_9c.pVFTable = (void *)0x8688e0;
  local_20 = TStack_9c.spare;
  FUN_00aaa160();
  TStack_9c.pVFTable = (void *)0x8688ea;
  local_1c = (TypeDescriptor *)&TStack_9c.spare;
  FUN_00869720();
  local_18 = &TStack_9c;
  local_8 = 0;
  ppTStack_a0 = (TypeDescriptor **)0x8688fc;
  FUN_00869700();
  local_28 = (TypeDescriptor **)&ppTStack_a0;
  local_8._0_1_ = 1;
  ppTStack_a4 = (TypeDescriptor **)0x86890b;
  FUN_008696e0();
  local_2c = (TypeDescriptor **)&ppTStack_a4;
  local_8._0_1_ = 2;
  ppTStack_a8 = (TypeDescriptor **)0x86891a;
  FUN_008696c0();
  local_30 = &ppTStack_a8;
  local_8._0_1_ = 3;
  ppTStack_ac = (TypeDescriptor **)0x868929;
  FUN_008696a0();
  local_34 = &ppTStack_ac;
  local_8._0_1_ = 4;
  FUN_008695f0(&ppTStack_ac);
  local_8._0_1_ = 5;
  FUN_008695d0();
  local_8._0_1_ = 7;
  FUN_00aa9c00();
  local_8._0_1_ = 8;
  ppTStack_ac = (TypeDescriptor **)0x868962;
  FUN_00aa9c00();
  local_8._0_1_ = 9;
  ppTStack_a8 = (TypeDescriptor **)0x86896d;
  FUN_00aa9c00();
  local_8._0_1_ = 10;
  ppTStack_a4 = (TypeDescriptor **)0x868978;
  FUN_00aa9c00();
  local_8._0_1_ = 0xb;
  ppTStack_a0 = (TypeDescriptor **)0x868983;
  FUN_00aa9c00();
  local_8._0_1_ = 0xc;
  TStack_9c.pVFTable = (void *)0x86898e;
  TStack_9c.spare = (void *)FUN_00aa9c00();
  TStack_9c.pVFTable = (void *)0x868997;
  FUN_00aa9be0();
  local_8._0_1_ = 0xd;
  TStack_9c.spare = "CCurrentGameState";
  TStack_9c.pVFTable = (void *)0x8689a8;
  FUN_00aab770();
  local_8._0_1_ = 0xe;
  TStack_9c.spare = DAT_013f3630;
  local_44 = local_4c;
  TStack_9c.pVFTable = &local_18;
  ppTStack_a0 = DAT_013f362c;
  ppTStack_a4 = &local_1c;
  local_18 = &luabind::detail::null_type::RTTI_Type_Descriptor;
  local_1c = &CCurrentGameState::RTTI_Type_Descriptor;
  ppTStack_a8 = (TypeDescriptor **)0x8689df;
  FUN_00aaaa10();
  TStack_9c.spare = (void *)0x14;
  local_8._0_1_ = 0xf;
  TStack_9c.pVFTable = (void *)0x8689eb;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x10;
  local_34 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    TStack_9c.spare = (undefined4 *)0x0;
  }
  else {
    TStack_9c.spare = (void *)0x868a02;
    FUN_00aa9ba0();
    *puVar2 = luabind::detail::
              memfun_registration<CCurrentGameState,class_CCurrentGameState_const*_(__cdecl*)(void),luabind::detail::null_type>
              ::vftable;
    puVar2[2] = "GetInstance";
    puVar2[3] = &LAB_00490f30;
    TStack_9c.spare = puVar2;
  }
  local_8._0_1_ = 0xf;
  TStack_9c.pVFTable = (void *)0x868a26;
  FUN_00aaaae0();
  TStack_9c.spare = local_14;
  local_8._0_1_ = 0x12;
  TStack_9c.pVFTable = (void *)0x868a36;
  FUN_00aaaa40();
  pcVar1 = local_44;
  local_8._0_1_ = 0x11;
  TStack_9c.spare = (void *)0x868a45;
  FUN_0086a050();
  local_34 = &TStack_9c.spare;
  TStack_9c.pVFTable = pcVar1;
  ppTStack_a0 = (TypeDescriptor **)0x868a51;
  FUN_00aa9be0();
  TStack_9c.pVFTable = "CString";
  local_8._0_1_ = 0x13;
  ppTStack_a0 = (TypeDescriptor **)0x868a65;
  FUN_00aab770();
  local_8._0_1_ = 0x14;
  TStack_9c.pVFTable = DAT_013f3630;
  local_80 = local_88;
  ppTStack_a0 = &local_1c;
  ppTStack_a4 = DAT_013f366c;
  ppTStack_a8 = &local_18;
  local_1c = &luabind::detail::null_type::RTTI_Type_Descriptor;
  local_18 = &CString::RTTI_Type_Descriptor;
  ppTStack_ac = (TypeDescriptor **)0x868a9d;
  FUN_00aaaa10();
  local_8._0_1_ = 0x15;
  TStack_9c.pVFTable = (void *)0x868aad;
  ppTVar3 = (TypeDescriptor **)FUN_0086a5e0();
  TStack_9c.pVFTable = (void *)0x14;
  ppTStack_a0 = (TypeDescriptor **)0x868ab6;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x16;
  local_30 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    TStack_9c.pVFTable = (undefined4 *)0x0;
  }
  else {
    TStack_9c.pVFTable = (void *)0x868acd;
    FUN_00aa9ba0();
    *puVar2 = luabind::detail::
              memfun_registration<CString,char_const*_(__thiscall_CString::*)(void)const_,luabind::detail::null_type>
              ::vftable;
    puVar2[2] = "GetCharPtr";
    puVar2[3] = FUN_00408fc0;
    TStack_9c.pVFTable = puVar2;
  }
  local_8._0_1_ = 0x15;
  ppTStack_a0 = (TypeDescriptor **)0x868af0;
  FUN_00aaaae0();
  TStack_9c.pVFTable = (void *)0x14;
  ppTStack_a0 = (TypeDescriptor **)0x868af7;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x17;
  local_30 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    TStack_9c.pVFTable = (undefined4 *)0x0;
  }
  else {
    TStack_9c.pVFTable = (void *)0x868b0e;
    FUN_00aa9ba0();
    *puVar2 = luabind::detail::
              memfun_registration<CString,class_std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_(__thiscall_CString::*)(void)const_,luabind::detail::null_type>
              ::vftable;
    puVar2[2] = "GetString";
    puVar2[3] = FUN_00989b00;
    TStack_9c.pVFTable = puVar2;
  }
  local_8._0_1_ = 0x15;
  ppTStack_a0 = (TypeDescriptor **)0x868b31;
  FUN_00aaaae0();
  TStack_9c.pVFTable = (void *)0x14;
  ppTStack_a0 = (TypeDescriptor **)0x868b38;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x18;
  local_30 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    TStack_9c.pVFTable = (undefined4 *)0x0;
  }
  else {
    TStack_9c.pVFTable = (void *)0x868b4f;
    FUN_00aa9ba0();
    *puVar2 = luabind::detail::
              memfun_registration<CString,void_(__cdecl*)(lua_State*,CString_const&),luabind::detail::null_type>
              ::vftable;
    puVar2[2] = "__tostring";
    puVar2[3] = FUN_00869f00;
    TStack_9c.pVFTable = puVar2;
  }
  local_8._0_1_ = 0x15;
  ppTStack_a0 = (TypeDescriptor **)0x868b72;
  FUN_00aaaae0();
  TStack_9c.pVFTable = (void *)0x14;
  ppTStack_a0 = (TypeDescriptor **)0x868b79;
  puVar2 = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x19;
  local_30 = puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    TStack_9c.pVFTable = (undefined4 *)0x0;
  }
  else {
    TStack_9c.pVFTable = (void *)0x868b90;
    FUN_00aa9ba0();
    *puVar2 = luabind::detail::
              memfun_registration<CString,void_(__cdecl*)(lua_State*,CString_const&,CString_const&),luabind::detail::null_type>
              ::vftable;
    puVar2[2] = &DAT_00e29500;
    puVar2[3] = FUN_00869f50;
    TStack_9c.pVFTable = puVar2;
  }
  local_8._0_1_ = 0x15;
  ppTStack_a0 = (TypeDescriptor **)0x868bb3;
  FUN_00aaaae0();
  local_30 = &TStack_9c.pVFTable;
  ppTStack_a4 = (TypeDescriptor **)0x868bbf;
  ppTStack_a0 = ppTVar3;
  FUN_00aa9be0();
  ppTStack_a0 = (TypeDescriptor **)0xe295bc;
  local_8._0_1_ = 0x1a;
  ppTStack_a4 = (TypeDescriptor **)0x868bd0;
  FUN_00aab770();
  local_8._0_1_ = 0x1b;
  ppTStack_a0 = DAT_013f3630;
  local_74 = local_7c;
  ppTStack_a4 = &local_1c;
  ppTStack_a8 = DAT_013f3640;
  ppTStack_ac = &local_18;
  local_1c = &luabind::detail::null_type::RTTI_Type_Descriptor;
  local_18 = &CFixedPoint::RTTI_Type_Descriptor;
  FUN_00aaaa10();
  local_8._0_1_ = 0x1c;
  ppTStack_a0 = (TypeDescriptor **)0x868c12;
  FUN_0086a4a0();
  ppTStack_a0 = (TypeDescriptor **)0x868c19;
  ppTVar3 = (TypeDescriptor **)FUN_0086a540();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868c22;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x1d;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868c39;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,float_(__thiscall_CFixedPoint::*)(void)const_,luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e295c8;
    ppTVar4[3] = (TypeDescriptor *)FUN_004010e0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868c5c;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868c63;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x1e;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868c7a;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,int_(__thiscall_CFixedPoint::*)(void)const_,luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"GetTruncated";
    ppTVar4[3] = (TypeDescriptor *)&LAB_00414c90;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868c9d;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868ca4;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x1f;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868cbb;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,class_CFixedPoint_(__thiscall_CFixedPoint::*)(void),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e295dc;
    ppTVar4[3] = (TypeDescriptor *)FUN_00868740;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868cde;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868ce5;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x20;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868cfc;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__add";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869740;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868d1f;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868d26;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x21;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868d3d;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__sub";
    ppTVar4[3] = (TypeDescriptor *)FUN_008697b0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868d60;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868d67;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x22;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868d7e;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__mul";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869820;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868da1;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868da8;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x23;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868dbf;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__div";
    ppTVar4[3] = (TypeDescriptor *)FUN_008698a0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868de2;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868de9;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x24;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868e00;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29500;
    ppTVar4[3] = (TypeDescriptor *)FUN_008698c0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868e23;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868e2a;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x25;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868e41;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29510;
    ppTVar4[3] = (TypeDescriptor *)FUN_008698f0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868e64;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868e6b;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x26;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868e82;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29508;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869920;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868ea5;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868eac;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x27;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868ec3;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__add";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869950;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868ee6;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868eed;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x28;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868f04;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__sub";
    ppTVar4[3] = (TypeDescriptor *)FUN_008699f0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868f27;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868f2e;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x29;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868f45;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__mul";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869a90;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868f68;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868f6f;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x2a;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868f86;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__div";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869ab0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868fa9;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868fb0;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x2b;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x868fc7;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29500;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869ad0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x868fea;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x868ff1;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x2c;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x869008;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29510;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869b30;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x86902b;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x869032;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x2d;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x869049;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&,float),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29508;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869b90;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x86906c;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x869073;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x2e;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x86908a;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__add";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869bf0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x8690ad;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x8690b4;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x2f;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x8690cb;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__sub";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869c60;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x8690ee;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x8690f5;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x30;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x86910c;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__mul";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869cd0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x86912f;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x869136;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x31;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x86914d;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__div";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869d60;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x869170;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x869177;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x32;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x86918e;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29500;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869d90;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x8691b1;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x8691b8;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x33;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x8691cf;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29510;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869df0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x8691f2;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x8691f9;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x34;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x869210;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,float,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)&DAT_00e29508;
    ppTVar4[3] = (TypeDescriptor *)FUN_00869e50;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x869233;
  FUN_00aaaae0();
  ppTStack_a0 = (TypeDescriptor **)0x14;
  ppTStack_a4 = (TypeDescriptor **)0x86923a;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x35;
  local_2c = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a0 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a0 = (TypeDescriptor **)0x869251;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CFixedPoint,void_(__cdecl*)(lua_State*,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"__tostring";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869eb0;
    ppTStack_a0 = ppTVar4;
  }
  local_8._0_1_ = 0x1c;
  ppTStack_a4 = (TypeDescriptor **)0x869274;
  FUN_00aaaae0();
  local_2c = (TypeDescriptor **)&ppTStack_a0;
  ppTStack_a8 = (TypeDescriptor **)0x869280;
  ppTStack_a4 = ppTVar3;
  FUN_00aa9be0();
  ppTStack_a4 = (TypeDescriptor **)0xe295b0;
  local_8._0_1_ = 0x36;
  ppTStack_a8 = (TypeDescriptor **)0x869291;
  FUN_00aab770();
  local_8._0_1_ = 0x37;
  ppTStack_a4 = DAT_013f3630;
  local_68 = local_70;
  ppTStack_a8 = &local_1c;
  ppTStack_ac = DAT_013f3660;
  local_1c = &luabind::detail::null_type::RTTI_Type_Descriptor;
  local_18 = &CArray<CFixedPoint>::RTTI_Type_Descriptor;
  FUN_00aaaa10(&local_18);
  local_8._0_1_ = 0x38;
  ppTStack_a4 = (TypeDescriptor **)0x8692d3;
  ppTVar3 = (TypeDescriptor **)FUN_0086a400();
  ppTStack_a4 = (TypeDescriptor **)0x14;
  ppTStack_a8 = (TypeDescriptor **)0x8692dc;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x39;
  local_28 = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a4 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a4 = (TypeDescriptor **)0x8692f3;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CArray<CFixedPoint>,void_(__thiscall_CArray<class_CFixedPoint>::*)(unsigned_int,CFixedPoint_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"SetAt";
    ppTVar4[3] = (TypeDescriptor *)FUN_00869580;
    ppTStack_a4 = ppTVar4;
  }
  local_8._0_1_ = 0x38;
  ppTStack_a8 = (TypeDescriptor **)0x869316;
  FUN_00aaaae0();
  ppTStack_a4 = (TypeDescriptor **)0x14;
  ppTStack_a8 = (TypeDescriptor **)0x86931d;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x3a;
  local_28 = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a4 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a4 = (TypeDescriptor **)0x869334;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CArray<CFixedPoint>,class_CFixedPoint_const&_(__thiscall_CArray<class_CFixedPoint>::*)(unsigned_int),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"GetAt";
    ppTVar4[3] = (TypeDescriptor *)FUN_008695a0;
    ppTStack_a4 = ppTVar4;
  }
  local_8._0_1_ = 0x38;
  ppTStack_a8 = (TypeDescriptor **)0x869357;
  FUN_00aaaae0();
  local_28 = (TypeDescriptor **)&ppTStack_a4;
  ppTStack_ac = (TypeDescriptor **)0x869363;
  ppTStack_a8 = ppTVar3;
  FUN_00aa9be0();
  ppTStack_a8 = (TypeDescriptor **)0xe29594;
  local_8._0_1_ = 0x3b;
  ppTStack_ac = (TypeDescriptor **)0x869374;
  FUN_00aab770();
  local_8._0_1_ = 0x3c;
  ppTStack_a8 = DAT_013f3630;
  local_5c = local_64;
  ppTStack_ac = &local_1c;
  local_1c = &luabind::detail::null_type::RTTI_Type_Descriptor;
  local_18 = &CArray<float>::RTTI_Type_Descriptor;
  FUN_00aaaa10(&local_18,DAT_013f3678);
  local_8._0_1_ = 0x3d;
  ppTStack_a8 = (TypeDescriptor **)0x8693b7;
  ppTVar3 = (TypeDescriptor **)FUN_0086a360();
  ppTStack_a8 = (TypeDescriptor **)0x14;
  ppTStack_ac = (TypeDescriptor **)0x8693c0;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x3e;
  local_38 = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a8 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a8 = (TypeDescriptor **)0x8693d7;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CArray<float>,void_(__thiscall_CArray<float>::*)(unsigned_int,float_const&),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"SetAt";
    ppTVar4[3] = (TypeDescriptor *)FUN_008695b0;
    ppTStack_a8 = ppTVar4;
  }
  local_8._0_1_ = 0x3d;
  ppTStack_ac = (TypeDescriptor **)0x8693fa;
  FUN_00aaaae0();
  ppTStack_a8 = (TypeDescriptor **)0x14;
  ppTStack_ac = (TypeDescriptor **)0x869401;
  ppTVar4 = (TypeDescriptor **)FUN_00aae9af();
  local_8._0_1_ = 0x3f;
  local_38 = ppTVar4;
  if (ppTVar4 == (TypeDescriptor **)0x0) {
    ppTStack_a8 = (TypeDescriptor **)0x0;
  }
  else {
    ppTStack_a8 = (TypeDescriptor **)0x869418;
    FUN_00aa9ba0();
    *ppTVar4 = (TypeDescriptor *)
               luabind::detail::
               memfun_registration<CArray<float>,float_const&_(__thiscall_CArray<float>::*)(unsigned_int),luabind::detail::null_type>
               ::vftable;
    ppTVar4[2] = (TypeDescriptor *)"GetAt";
    ppTVar4[3] = (TypeDescriptor *)FUN_008695a0;
    ppTStack_a8 = ppTVar4;
  }
  local_8._0_1_ = 0x3d;
  ppTStack_ac = (TypeDescriptor **)0x86943b;
  FUN_00aaaae0();
  local_38 = (TypeDescriptor **)&ppTStack_a8;
  ppTStack_ac = ppTVar3;
  FUN_00aa9be0();
  ppTStack_ac = (TypeDescriptor **)&DAT_00e29590;
  local_8._0_1_ = 0x40;
  FUN_00aab770();
  local_8._0_1_ = 0x41;
  ppTStack_ac = DAT_013f3630;
  local_50 = local_58;
  local_1c = &luabind::detail::null_type::RTTI_Type_Descriptor;
  local_18 = &CID::RTTI_Type_Descriptor;
  FUN_00aaaa10(&local_18,DAT_013f3658,&local_1c);
  local_8._0_1_ = 0x42;
  ppTStack_ac = (TypeDescriptor **)0x869499;
  FUN_0086a2c0();
  local_8._0_1_ = 0x43;
  ppTStack_ac = (TypeDescriptor **)0x8694a4;
  FUN_00aa9c00();
  local_8._0_1_ = 0x45;
  ppTStack_a8 = (TypeDescriptor **)0x8694af;
  FUN_00aa9c00();
  local_8._0_1_ = 0x48;
  ppTStack_a4 = (TypeDescriptor **)0x8694ba;
  FUN_00aa9c00();
  local_8._0_1_ = 0x4c;
  ppTStack_a0 = (TypeDescriptor **)0x8694c5;
  FUN_00aa9c00();
  local_8._0_1_ = 0x51;
  TStack_9c.pVFTable = (void *)0x8694d1;
  TStack_9c.pVFTable = (void *)FUN_00aa9c00();
  local_38 = &TStack_9c.spare;
  ppTStack_a0 = (TypeDescriptor **)0x8694dd;
  FUN_00aa9be0();
  TStack_9c.pVFTable = (void *)0x0;
  ppTStack_a0 = local_20;
  local_8._0_1_ = 0x52;
  ppTStack_a4 = (TypeDescriptor **)0x8694ef;
  FUN_00aa9cb0();
  local_8._0_1_ = 0x51;
  TStack_9c.pVFTable = (void *)0x8694fa;
  FUN_00aa9cd0();
  local_8._0_1_ = 0x50;
  TStack_9c.spare = (void *)0x869505;
  FUN_0086a050();
  local_8._0_1_ = 0x4f;
  TStack_9c.spare = (void *)0x869511;
  FUN_0086a050();
  local_8._0_1_ = 0x4e;
  TStack_9c.spare = (void *)0x86951d;
  FUN_0086a050();
  local_8._0_1_ = 0x4d;
  TStack_9c.spare = (void *)0x869529;
  FUN_0086a050();
  local_8._0_1_ = 0x11;
  TStack_9c.spare = (void *)0x869538;
  FUN_0086a050();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  TStack_9c.spare = (void *)0x869544;
  FUN_0086a050();
  local_8 = 0xffffffff;
  TStack_9c.spare = (void *)0x869553;
  FUN_0086a050();
  ExceptionList = local_10;
  return;
}

