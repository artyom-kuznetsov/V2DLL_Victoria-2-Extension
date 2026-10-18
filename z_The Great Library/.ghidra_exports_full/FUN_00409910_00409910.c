// FUN_00409910 @ 00409910 body=[[00409910, 00409a39] [00409a3d, 00409ab6] [00409aba, 00409aeb]]


void FUN_00409910(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  int local_158 [65];
  undefined1 *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b5225b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    local_8 = 0xffffffff;
    piVar5 = *(int **)(param_1 + 0x1c);
    if ((char)piVar5[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar5 + 4))();
      piVar5[2] = iVar2;
      if (iVar2 == 0) {
        piVar5[3] = 0x13;
      }
      *(undefined1 *)(piVar5 + 0x44) = 1;
    }
    piVar5 = piVar5 + 3;
    piVar7 = local_158;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar7 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar7 = piVar7 + 1;
    }
    if ((local_158[0] == 4) || (local_158[0] == 0x13)) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      ExceptionList = local_10;
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    puVar6 = (undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc);
    puVar8 = (undefined4 *)(param_1 + 0x228);
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    local_8 = 1;
    pcVar3 = (char *)(param_1 + 0x22c);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x22c),(int)pcVar3 - (param_1 + 0x22d));
    local_14[0] = 10;
    iVar2 = FUN_005484e0(local_50,local_14,1);
    if (iVar2 == -1) {
      FUN_00408ed0(local_50,0,0xffffffff);
    }
    else {
      FUN_009a1140();
      FUN_00409350("Unreadable String",0x11);
    }
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_3c) break;
    local_18 = param_2[1];
    puVar4 = (undefined1 *)FUN_00aae9af(0x28);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_54 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0x0;
    }
    else {
      *(undefined4 *)(puVar4 + 0x14) = 0xf;
      *(undefined4 *)(puVar4 + 0x10) = 0;
      *puVar4 = 0;
      FUN_00408ed0(local_34,0,0xffffffff);
      *(int *)(puVar4 + 0x1c) = local_18;
      *(undefined4 *)(puVar4 + 0x20) = 0;
      puVar4[0x24] = 0;
    }
    iVar2 = param_2[2];
    param_2[1] = puVar4;
    param_2[2] = iVar2 + 1;
    if (iVar2 == 0) {
      *param_2 = puVar4;
    }
    else {
      *(undefined1 **)(local_18 + 0x20) = puVar4;
    }
    local_8 = 0xffffffff;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

