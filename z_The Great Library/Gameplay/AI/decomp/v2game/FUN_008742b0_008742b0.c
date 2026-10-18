// FUN_008742b0 @ 008742b0 body=[[008742b0, 00874313]]


int FUN_008742b0(uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  lua_pushlstring();
  lua_rawget();
  piVar2 = (int *)lua_touserdata();
  lua_settop();
  iVar1 = *piVar2;
  uVar4 = piVar2[1] - iVar1 >> 2;
  if ((uVar4 <= param_1) || (iVar3 = *(int *)(iVar1 + param_1 * 4), iVar3 == 0)) {
    if (uVar4 <= DAT_013f366c) {
      return 0;
    }
    iVar3 = *(int *)(iVar1 + DAT_013f366c * 4);
  }
  return iVar3;
}

