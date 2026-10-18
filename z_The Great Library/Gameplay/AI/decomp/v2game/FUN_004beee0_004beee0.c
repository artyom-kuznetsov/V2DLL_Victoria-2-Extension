// FUN_004beee0 @ 004beee0 body=[[004beee0, 004befde] [004befe2, 004bf005] [004bf01b, 004bf0fb]]


void FUN_004beee0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint in_ECX;
  int *in_EDX;
  int iVar5;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d160;
  local_10 = ExceptionList;
  if (in_ECX != 0) {
    iVar2 = in_EDX[1];
    iVar3 = iVar2 - *in_EDX >> 3;
    if (0x1fffffffU - iVar3 < in_ECX) {
      ExceptionList = &local_10;
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar1 = iVar3 + in_ECX;
    local_18 = in_EDX[2] - *in_EDX >> 3;
    if (local_18 < uVar1) {
      if (0x1fffffff - (local_18 >> 1) < local_18) {
        local_18 = 0;
      }
      else {
        local_18 = local_18 + (local_18 >> 1);
      }
      if (local_18 < uVar1) {
        local_18 = uVar1;
      }
      ExceptionList = &local_10;
      iVar3 = FUN_00810880();
      local_8 = 0;
      FUN_004bfc70(iVar3 + (param_1 - *in_EDX >> 3) * 8,param_1);
      FUN_007e72f0(*in_EDX,param_1);
      FUN_007e72f0(param_1,param_1);
      iVar2 = *in_EDX;
      if (iVar2 == 0) {
        in_EDX[2] = iVar3 + local_18 * 8;
        in_EDX[1] = iVar3 + (in_ECX + (in_EDX[1] - iVar2 >> 3)) * 8;
        *in_EDX = iVar3;
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar2);
    }
    if ((uint)(iVar2 - param_1 >> 3) < in_ECX) {
      ExceptionList = &local_10;
      FUN_007e72f0(param_1,param_1);
      local_8 = 2;
      FUN_004bfc70(in_EDX[1],param_1);
      in_EDX[1] = in_EDX[1] + in_ECX * 8;
    }
    else {
      iVar5 = iVar2 + in_ECX * -8;
      ExceptionList = &local_10;
      iVar3 = FUN_007e72f0(iVar5,param_1);
      in_EDX[1] = iVar3;
      if (param_1 != iVar5) {
        iVar3 = iVar5;
        do {
          iVar4 = iVar3 + -8;
          *(undefined4 *)((iVar2 - iVar5) + iVar4) = *(undefined4 *)(iVar3 + -8);
          *(undefined4 *)((iVar2 - iVar5) + 4 + iVar4) = *(undefined4 *)(iVar3 + -4);
          iVar3 = iVar4;
        } while (param_1 != iVar4);
      }
    }
    FUN_0093e940(param_1);
  }
  ExceptionList = local_10;
  return;
}

