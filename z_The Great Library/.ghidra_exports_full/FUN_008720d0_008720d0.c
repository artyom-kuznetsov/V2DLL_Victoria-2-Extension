// FUN_008720d0 @ 008720d0 body=[[008720d0, 008721dd]]


int FUN_008720d0(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  int local_c;
  int local_8;
  
  local_8 = lua_gettop(param_1);
  iVar4 = -1;
  iVar1 = FUN_004f5fc0();
  if (iVar1 == local_8) {
    iVar4 = lua_type(param_1,1);
    local_c = -(uint)(iVar4 != 3);
    piVar2 = &local_c;
    iVar1 = 0;
    do {
      iVar4 = *piVar2;
      if (iVar4 < 0) break;
      iVar4 = iVar1 + iVar4;
      piVar2 = piVar2 + 1;
      iVar1 = iVar4;
    } while (piVar2 != &local_8);
    if (iVar4 < 0) goto LAB_00872145;
    bVar5 = iVar4 == *in_EAX;
    if (iVar4 < *in_EAX) {
      *in_EAX = iVar4;
      in_EAX[1] = param_2;
      in_EAX[0xb] = 1;
      goto LAB_00872156;
    }
  }
  else {
LAB_00872145:
    bVar5 = iVar4 == *in_EAX;
  }
  if (bVar5) {
    in_EAX[in_EAX[0xb] + 1] = param_2;
    in_EAX[0xb] = in_EAX[0xb] + 1;
  }
LAB_00872156:
  iVar1 = 0;
  if (*(int **)(param_2 + 0x24) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 4))(param_1);
  }
  if ((iVar4 == *in_EAX) && (in_EAX[0xb] == 1)) {
    uVar3 = lua_tointeger(param_1,1);
    uVar3 = (*(code *)*param_3)(uVar3);
    iVar4 = FUN_00ab0cbb(uVar3,0,&CProvince::RTTI_Type_Descriptor,
                         &luabind::wrap_base::RTTI_Type_Descriptor,0);
    if (iVar4 != 0) {
      FUN_00aa7300(param_1);
      iVar4 = lua_gettop(param_1);
      return iVar4 - local_8;
    }
    FUN_00873c10(uVar3);
    iVar1 = lua_gettop(param_1);
    iVar1 = iVar1 - local_8;
  }
  return iVar1;
}

