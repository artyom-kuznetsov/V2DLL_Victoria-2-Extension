// FUN_00b0b3d0 @ 00b0b3d0 body=[[00b0b3d0, 00b0b54f]]


void FUN_00b0b3d0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *in_ECX;
  uint uVar5;
  int iVar6;
  void *local_18;
  int local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b39362;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar2 = in_ECX[1];
  if ((uint)param_1[2] < param_1[1] + uVar2) {
    FUN_00adfdb0(param_1[1] + uVar2);
  }
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(*in_ECX + uVar5 * 4) + 0x10);
      if (iVar6 == -1) {
        iVar6 = 0;
      }
      piVar3 = (int *)FUN_00b15770(iVar6);
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      if ((*piVar3 != 0) && (FUN_00b13660(piVar3[1],0), local_18 != (void *)0x0)) {
        FID_conflict__memcpy(local_18,(void *)*piVar3,piVar3[1] + 1);
      }
      local_4 = 0;
      if ((local_14 != 0) && (iVar6 = FUN_00b0b550(&local_18), iVar6 == -1)) {
        iVar6 = param_1[1];
        uVar4 = iVar6 + 1;
        param_1[1] = uVar4;
        if ((uint)param_1[2] < uVar4) {
          FUN_00adfdb0(iVar6 + 2);
        }
        puVar1 = (undefined4 *)(*param_1 + (param_1[1] + -1) * 0xc);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (puVar1 != (undefined4 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          if (local_18 != (void *)0x0) {
            FUN_00b13660(local_14,0);
            if ((void *)*puVar1 != (void *)0x0) {
              FID_conflict__memcpy((void *)*puVar1,local_18,local_14 + 1);
            }
          }
        }
      }
      local_4 = 0xffffffff;
      FUN_00b13650();
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (in_ECX[0xe] != 0) {
    FUN_00b0b3d0(param_1);
  }
  ExceptionList = local_c;
  return;
}

