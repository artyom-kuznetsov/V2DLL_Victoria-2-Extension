// FUN_006a08b0 @ 006a08b0 body=[[006a08b0, 006a0924] [006a0928, 006a0b6f]]


void FUN_006a08b0(int *param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 auStack_d0 [16];
  undefined4 local_c0 [5];
  uint uStack_ac;
  undefined1 auStack_a4 [56];
  undefined1 auStack_6c [56];
  undefined1 auStack_34 [32];
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b92a46;
  pvStack_14 = ExceptionList;
  piVar4 = param_1 + 0x6a;
  ExceptionList = &pvStack_14;
  if (param_4 != 0) {
    ExceptionList = &pvStack_14;
    uVar2 = (**(code **)(*param_1 + 0x1c))(local_c0);
    uStack_c = 0;
    FUN_00408ed0(uVar2,0,0xffffffff);
    uStack_c = 0xffffffff;
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0[0]);
    }
  }
  uStack_c = 0xffffffff;
  switch(param_2) {
  case 0:
    uVar2 = (**(code **)(*param_1 + 0x1c))(auStack_a4);
    uStack_c = 1;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    break;
  case 1:
    iVar1 = *piVar4;
    *param_3 = 0xd;
    param_3[0x16] = iVar1;
    ExceptionList = pvStack_14;
    return;
  case 2:
    puVar3 = (undefined4 *)FUN_00969f90(piVar4);
    *param_3 = 8;
    param_3[0x14] = *puVar3;
    param_3[0x15] = puVar3[1];
    param_3[1] = 2;
    ExceptionList = pvStack_14;
    return;
  case 3:
    puVar3 = (undefined4 *)FUN_00969ed0(piVar4);
    *param_3 = 8;
    param_3[0x14] = *puVar3;
    param_3[0x15] = puVar3[1];
    param_3[1] = 2;
    ExceptionList = pvStack_14;
    return;
  case 4:
    *param_3 = 10;
    param_3[0x14] = 0;
    param_3[0x15] = 0;
    if (0 < *(int *)(param_1[0x62] + 0x84)) {
      ExceptionList = pvStack_14;
      return;
    }
    puVar3 = (undefined4 *)FUN_0096ba50(auStack_d0);
    *param_3 = 10;
    param_3[0x14] = *puVar3;
    param_3[0x15] = puVar3[1];
    ExceptionList = pvStack_14;
    return;
  case 5:
    uVar2 = FUN_00969210(piVar4);
    uVar2 = FUN_00567250(uVar2);
    uStack_c = 2;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    break;
  case 6:
    uVar2 = FUN_009692c0();
    uVar2 = FUN_00974c50(uVar2);
    uStack_c = 3;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    break;
  case 7:
    piVar4 = (int *)FUN_009694d0();
    uVar2 = (**(code **)(*piVar4 + 0x18))(auStack_6c);
    uStack_c = 4;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    break;
  case 8:
    piVar4 = (int *)FUN_00969480();
    uVar2 = (**(code **)(*piVar4 + 0x18))(auStack_34);
    uStack_c = 5;
    *param_3 = 3;
    FUN_00408ed0(uVar2,0,0xffffffff);
    break;
  default:
    goto switchD_006a0934_default;
  }
  FUN_00408ad0();
switchD_006a0934_default:
  ExceptionList = pvStack_14;
  return;
}

