// FUN_009f5990 @ 009f5990 body=[[009f5990, 009f5abf]]


int FUN_009f5990(undefined4 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined4 *in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = (int)param_1;
  iVar3 = (**(code **)(**(int **)((int)param_1 + 0x78) + 0x48))();
  local_c = in_EAX[4];
  iVar5 = local_c / 2;
  param_1 = in_EAX;
  if (0xf < (uint)in_EAX[5]) {
    param_1 = (undefined4 *)*in_EAX;
  }
  iVar3 = (uint)*(ushort *)(iVar2 + 0x48) - iVar3;
  local_8 = (int)(local_c + (local_c >> 0x1f & 3U)) >> 2;
  local_c = local_c + -1;
  local_10 = 0;
  if (local_c != 0) {
    while( true ) {
      iVar4 = (**(code **)(**(int **)(iVar2 + 0x78) + 0x28))(param_1,iVar5);
      if (iVar3 < iVar4) {
        iVar4 = local_10 + local_8;
        local_c = iVar5;
      }
      else {
        iVar4 = local_c - local_8;
        local_10 = iVar5;
      }
      local_8 = local_8 / 2;
      if (local_8 < 2) break;
      iVar5 = iVar4;
      if (local_10 == local_c) {
        return local_10;
      }
    }
    if (local_10 != local_c) {
      iVar5 = (**(code **)(**(int **)(iVar2 + 0x78) + 0x28))(param_1,iVar4);
      pcVar1 = *(code **)(**(int **)(iVar2 + 0x78) + 0x28);
      if (iVar5 < iVar3) {
        iVar4 = iVar4 + 1;
        iVar5 = (*pcVar1)(param_1,iVar4);
        if (iVar5 < iVar3) {
          do {
            iVar4 = iVar4 + 1;
            iVar5 = (**(code **)(**(int **)(iVar2 + 0x78) + 0x28))(param_1,iVar4);
          } while (iVar5 < iVar3);
          return iVar4;
        }
      }
      else {
        iVar4 = iVar4 + -1;
        iVar5 = (*pcVar1)(param_1,iVar4);
        while (iVar3 <= iVar5) {
          iVar4 = iVar4 + -1;
          iVar5 = (**(code **)(**(int **)(iVar2 + 0x78) + 0x28))(param_1,iVar4);
        }
        iVar4 = iVar4 + 1;
      }
      return iVar4;
    }
  }
  return local_10;
}

