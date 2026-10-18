// FUN_00560db0 @ 00560db0 body=[[00560db0, 00560ec6] [00560eca, 00560f2c] [00560f30, 00560ff2] [00560ff6, 00561079]]


/* WARNING: Removing unreachable block (ram,0x00560ebd) */
/* WARNING: Removing unreachable block (ram,0x00560fe9) */

void FUN_00560db0(int param_1,int param_2)

{
  char cVar1;
  void **ppvVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int in_ECX;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_128 [8];
  int aiStack_120 [66];
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b51326;
  local_14 = ExceptionList;
  if (0x68b < param_2) {
    if (param_2 == 0x75d) {
      ExceptionList = &local_14;
      puVar5 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_128,param_1 + 0x22c);
      *(undefined4 *)(in_ECX + 0x10) = *puVar5;
      *(undefined4 *)(in_ECX + 0x14) = puVar5[1];
    }
    else if (param_2 == 0x95e) {
      ExceptionList = &local_14;
      FUN_009a1d40();
      ExceptionList = local_14;
      return;
    }
    ExceptionList = local_14;
    return;
  }
  ppvVar2 = &local_14;
  if (param_2 == 0x68b) {
    while( true ) {
      ExceptionList = ppvVar2;
      uStack_c = 0xffffffff;
      piVar7 = *(int **)(param_1 + 0x1c);
      if ((char)piVar7[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar3;
        if (iVar3 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar7 = piVar7 + 3;
      piVar8 = aiStack_120;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      pcVar6 = (char *)(*(int *)(param_1 + 0x1c) + 0x10);
      pcVar4 = pcVar6;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar6,(int)pcVar4 - (*(int *)(param_1 + 0x1c) + 0x11));
      uStack_c = 1;
      FUN_00a840b0();
      ppvVar2 = ExceptionList;
    }
  }
  else {
    if (param_2 == 0x55) {
      ExceptionList = &local_14;
      (**(code **)(*(int *)(in_ECX + 0x54) + 0xc))(param_1);
      ExceptionList = pvStack_18;
      return;
    }
    ppvVar2 = &local_14;
    if (param_2 != 0x68a) {
      return;
    }
    while( true ) {
      ExceptionList = ppvVar2;
      uStack_c = 0xffffffff;
      piVar7 = *(int **)(param_1 + 0x1c);
      if ((char)piVar7[0x44] == '\0') {
        iVar3 = (**(code **)(*piVar7 + 4))();
        piVar7[2] = iVar3;
        if (iVar3 == 0) {
          piVar7[3] = 0x13;
        }
        *(undefined1 *)(piVar7 + 0x44) = 1;
      }
      piVar7 = piVar7 + 3;
      piVar8 = aiStack_120;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
      }
      if ((aiStack_120[0] == 4) || (aiStack_120[0] == 0x13)) break;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      pcVar6 = (char *)(*(int *)(param_1 + 0x1c) + 0x10);
      pcVar4 = pcVar6;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      FUN_00409350(pcVar6,(int)pcVar4 - (*(int *)(param_1 + 0x1c) + 0x11));
      uStack_c = 0;
      FUN_00a840b0();
      ppvVar2 = ExceptionList;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  ExceptionList = local_14;
  return;
}

