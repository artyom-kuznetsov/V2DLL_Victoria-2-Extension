// FUN_004c9630 @ 004c9630 body=[[004c9630, 004c965a]]


void FUN_004c9630(undefined4 param_1)

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
  lua_pushstring(*unaff_ESI,param_1);
  return;
}

