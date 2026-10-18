// FUN_00435a30 @ 00435a30 body=[[00435a30, 00435a55]]


void FUN_00435a30(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar1 = *unaff_EDI;
  *unaff_ESI = uVar1;
  iVar2 = lua_gettop(uVar1);
  unaff_ESI[1] = iVar2 + 1;
  unaff_ESI[2] = unaff_EDI;
  lua_pushstring(*unaff_ESI,"diplomacy");
  return;
}

