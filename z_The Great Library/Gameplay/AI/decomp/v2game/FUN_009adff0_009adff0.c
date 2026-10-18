// FUN_009adff0 @ 009adff0 body=[[009adff0, 009ae0f9] [009ae0fd, 009ae15f]]


void FUN_009adff0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3d918;
  local_10 = ExceptionList;
  iVar2 = (param_3 - param_1) / 0x1c;
  iVar1 = (param_2 - param_1) / 0x1c;
  iVar3 = iVar1;
  param_2 = iVar2;
  while (iVar4 = iVar3, iVar4 != 0) {
    iVar3 = param_2 % iVar4;
    param_2 = iVar4;
  }
  if ((param_2 < iVar2) && (0 < param_2)) {
    local_18 = iVar1 * 0x1c;
    local_14 = param_1 + param_2 * 0x1c;
    ExceptionList = &local_10;
    do {
      iVar2 = local_14;
      iVar3 = param_1;
      if (local_14 + local_18 != param_3) {
        iVar3 = local_14 + local_18;
      }
      do {
        local_8 = 0xffffffff;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00408ed0(iVar2,0,0xffffffff);
        local_8 = 0;
        FUN_00408ed0(iVar3,0,0xffffffff);
        FUN_00408ed0(local_34,0,0xffffffff);
        local_8 = 0xffffffff;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        iVar2 = (param_3 - iVar3) / 0x1c;
        if (iVar1 < iVar2) {
          iVar4 = iVar3 + local_18;
        }
        else {
          iVar4 = param_1 + (iVar1 - iVar2) * 0x1c;
        }
        iVar2 = iVar3;
        iVar3 = iVar4;
      } while (iVar4 != local_14);
      local_14 = local_14 + -0x1c;
      param_2 = param_2 + -1;
    } while (0 < param_2);
  }
  ExceptionList = local_10;
  return;
}

