// FUN_009a1550 @ 009a1550 body=[[009a1550, 009a168f] [009a1693, 009a16c8] [009a16d1, 009a16fb] [009a16ff, 009a1721] [009a1725, 009a1734]]


void FUN_009a1550(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int local_168 [65];
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = param_1;
  puStack_c = &LAB_00b4f540;
  local_10 = ExceptionList;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_8 = 1;
  ExceptionList = &local_10;
  while( true ) {
    piVar6 = *(int **)(iVar2 + 0x1c);
    if ((char)piVar6[0x44] == '\0') {
      iVar3 = (**(code **)(*piVar6 + 4))();
      piVar6[2] = iVar3;
      if (iVar3 == 0) {
        piVar6[3] = 0x13;
      }
      *(undefined1 *)(piVar6 + 0x44) = 1;
    }
    piVar6 = piVar6 + 3;
    piVar8 = local_168;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    if ((local_168[0] == 4) || (local_168[0] == 0x13)) break;
    (**(code **)(**(int **)(iVar2 + 0x1c) + 4))();
    puVar7 = (undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc);
    puVar9 = (undefined4 *)(iVar2 + 0x228);
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,2);
    pcVar4 = (char *)(iVar2 + 0x22c);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(iVar2 + 0x22c),(int)pcVar4 - (iVar2 + 0x22d));
    param_1 = CONCAT31(param_1._1_3_,10);
    iVar3 = FUN_005484e0(local_2c,&param_1,1);
    if (iVar3 == -1) {
      FUN_00408ed0(local_2c,0,0xffffffff);
    }
    else {
      FUN_009a1140();
      FUN_00409350("Unreadable String",0x11);
    }
    local_8._0_1_ = 1;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    uVar5 = FUN_00988f20(local_48);
    local_8._0_1_ = 3;
    FUN_00408ed0(uVar5,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  (**(code **)(**(int **)(iVar2 + 0x1c) + 4))();
  FUN_009d7230(local_64);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  ExceptionList = local_10;
  return;
}

