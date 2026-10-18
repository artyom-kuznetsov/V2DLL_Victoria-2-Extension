// FUN_004c9560 @ 004c9560 body=[[004c9560, 004c9585]]


void FUN_004c9560(void)

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
  lua_pushstring(*unaff_ESI,"tweaks");
  return;
}

