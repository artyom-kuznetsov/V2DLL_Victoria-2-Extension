// FUN_00870560 @ 00870560 body=[[00870560, 00870603]]


int FUN_00870560(int param_1,undefined4 *param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = lua_gettop();
  iVar5 = -1;
  if (iVar1 == 0) {
    iVar5 = 0;
    bVar6 = *in_EAX == 0;
    if (0 < *in_EAX) {
      *in_EAX = 0;
      in_EAX[1] = param_1;
      in_EAX[0xb] = 1;
      goto LAB_008705a4;
    }
  }
  else {
    bVar6 = *in_EAX == -1;
  }
  if (bVar6) {
    in_EAX[in_EAX[0xb] + 1] = param_1;
    in_EAX[0xb] = in_EAX[0xb] + 1;
  }
LAB_008705a4:
  iVar2 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar5 == *in_EAX) && (in_EAX[0xb] == 1)) {
    puVar3 = (undefined4 *)(*(code *)*param_2)();
    puVar4 = (undefined4 *)lua_newuserdata();
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar3;
      puVar4[1] = puVar3;
    }
    lua_pushcclosure();
    iVar2 = lua_gettop();
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}

