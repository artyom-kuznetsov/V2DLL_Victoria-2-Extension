// FUN_00871ee0 @ 00871ee0 body=[[00871ee0, 00871fac]]


int FUN_00871ee0(int param_1,undefined4 *param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EDI;
  bool bVar4;
  
  iVar1 = lua_gettop();
  iVar3 = -1;
  if (iVar1 == 0) {
    iVar3 = 0;
    bVar4 = *in_EAX == 0;
    if (0 < *in_EAX) {
      *in_EAX = 0;
      in_EAX[1] = param_1;
      in_EAX[0xb] = 1;
      goto LAB_00871f24;
    }
  }
  else {
    bVar4 = *in_EAX == -1;
  }
  if (bVar4) {
    in_EAX[in_EAX[0xb] + 1] = param_1;
    in_EAX[0xb] = in_EAX[0xb] + 1;
  }
LAB_00871f24:
  iVar2 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 4))();
  }
  if ((iVar3 == *in_EAX) && (in_EAX[0xb] == 1)) {
    iVar3 = (*(code *)*param_2)();
    if (iVar3 == 0) {
      lua_pushnil();
    }
    else {
      iVar2 = FUN_00ab0cbb(iVar3,0,&CCurrentGameState::RTTI_Type_Descriptor,
                           &luabind::wrap_base::RTTI_Type_Descriptor,0);
      if (iVar2 != 0) {
        FUN_00aa7300(unaff_EDI);
        iVar3 = lua_gettop();
        return iVar3 - iVar1;
      }
      FUN_00873790(iVar3);
    }
    iVar2 = lua_gettop();
    iVar2 = iVar2 - iVar1;
  }
  return iVar2;
}

