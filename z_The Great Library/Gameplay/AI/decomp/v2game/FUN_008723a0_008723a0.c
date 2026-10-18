// FUN_008723a0 @ 008723a0 body=[[008723a0, 0087242c]]


int FUN_008723a0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int *unaff_ESI;
  int local_8;
  
  iVar1 = lua_gettop();
  iVar2 = 0;
  local_8 = -1;
  if ((iVar1 == 0) && (local_8 = 0, 0 < *unaff_ESI)) {
    *unaff_ESI = 0;
    unaff_ESI[1] = param_1;
    unaff_ESI[0xb] = 1;
  }
  else if (local_8 == *unaff_ESI) {
    unaff_ESI[unaff_ESI[0xb] + 1] = param_1;
    unaff_ESI[0xb] = unaff_ESI[0xb] + 1;
  }
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((local_8 == *unaff_ESI) && (unaff_ESI[0xb] == 1)) {
    (*(code *)*param_2)();
    lua_pushboolean();
    iVar2 = lua_gettop();
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}

