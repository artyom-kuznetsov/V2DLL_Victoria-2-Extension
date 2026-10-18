// FUN_004c95c0 @ 004c95c0 body=[[004c95c0, 004c95ec]]


void FUN_004c95c0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  uVar1 = *unaff_EDI;
  *unaff_ESI = uVar1;
  iVar2 = lua_gettop(uVar1);
  unaff_ESI[1] = iVar2 + 1;
  uVar1 = *param_1;
  unaff_ESI[2] = unaff_EDI;
  lua_pushinteger(*unaff_ESI,uVar1);
  return;
}

