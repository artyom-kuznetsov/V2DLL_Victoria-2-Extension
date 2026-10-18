// FUN_0043bc10 @ 0043bc10 body=[[0043bc10, 0043bd42] [0043bd46, 0043bd5d] [0043bd61, 0043bd7b] [0043bd7f, 0043bd9f]]


void FUN_0043bc10(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int local_184 [65];
  undefined **local_80;
  undefined4 local_7c;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d8f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  while( true ) {
    local_8 = 0xffffffff;
    piVar4 = *(int **)(param_1 + 0x1c);
    if ((char)piVar4[0x44] == '\0') {
      iVar2 = (**(code **)(*piVar4 + 4))();
      piVar4[2] = iVar2;
      if (iVar2 == 0) {
        piVar4[3] = 0x13;
      }
      *(undefined1 *)(piVar4 + 0x44) = 1;
    }
    piVar4 = piVar4 + 3;
    piVar5 = local_184;
    for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    if (local_184[0] == 0x13) {
      ExceptionList = local_10;
      return;
    }
    FUN_009a1440(param_1);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    pcVar3 = (char *)(param_1 + 0x24);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350((char *)(param_1 + 0x24),(int)pcVar3 - (param_1 + 0x25));
    local_8 = 0;
    local_7c = 0x18d;
    local_80 = &PTR_FUN_00e3aef0;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    FUN_00408ed0(local_2c,0,0xffffffff);
    local_8._0_1_ = 1;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_40 = 0xffffffff;
    local_3c = 0xffffffff;
    local_38 = 0;
    local_34 = 1;
    local_30 = 100;
    local_80 = CEU3SoundConfigurator::vftable;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_009a2a90(param_1);
    local_80 = &PTR_FUN_00e3aef0;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = local_5c & 0xffffff00;
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_78);
    }
    local_8 = 0xffffffff;
    local_64 = 0xf;
    local_68 = 0;
    local_78 = local_78 & 0xffffff00;
    if (0xf < local_18) break;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_2c[0]);
}

