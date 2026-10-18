// FUN_00873740 @ 00873740 body=[[00873740, 00873784]]


void FUN_00873740(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  undefined4 unaff_EDI;
  
  iVar1 = *in_EAX;
  if (iVar1 == 0) {
    lua_pushnil();
    return;
  }
  iVar2 = FUN_00ab0cbb(iVar1,0,&CCountry::RTTI_Type_Descriptor,
                       &luabind::wrap_base::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    FUN_00aa7300(unaff_EDI);
    return;
  }
  FUN_008739e0(iVar1);
  return;
}

