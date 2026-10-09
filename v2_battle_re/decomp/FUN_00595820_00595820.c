// FUN_00595820 @ 00595820

void FUN_00595820(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int *in_ECX;
  char *pcVar5;
  undefined1 *puVar6;
  char local_108 [32];
  undefined1 local_e8 [112];
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined4 local_24;
  float local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4cb4b;
  local_10 = ExceptionList;
  if (999 < param_3) {
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("CombatLoss",10);
    local_8 = 0;
    (**(code **)(*in_ECX + 0x40))();
    local_24 = FUN_005c2ad0(local_5c);
    local_8 = 0xffffffff;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_5c[0]);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c[0] = local_5c[0] & 0xffffff00;
    FUN_00595a50(local_e8);
    local_8 = 1;
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfe280,1);
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    local_8._0_1_ = 3;
    pcVar3 = __itoa(param_3 / 1000,local_108,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 4;
    FUN_00448aa0(local_78,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_78[0]);
    }
    FUN_00408ed0(local_40,0,0xffffffff);
    puVar6 = local_e8;
    (**(code **)(*in_ECX + 0x38))(puVar6);
    piVar4 = (int *)FUN_00642220(param_2,local_24,puVar6);
    iVar2 = *(int *)(param_2 + 8);
    local_20[1] = 10.0;
    local_20[0] = (float)(*(int *)(iVar2 + 0x7c) - *(int *)(iVar2 + 0x74));
    local_20[2] = (float)(*(int *)(iVar2 + 0x80) - *(int *)(iVar2 + 0x78));
    if (*(char *)(param_1 + 0x18) == '\0') {
      local_20[0] = local_20[0] + 2.8;
      local_20[2] = local_20[2] + 2.8;
    }
    else {
      local_20[0] = local_20[0] - 2.8;
      local_20[2] = local_20[2] - 2.8;
    }
    (**(code **)(*piVar4 + 0x84))(local_20);
    if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40[0]);
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = local_40[0] & 0xffffff00;
    FUN_009dcbd0();
  }
  ExceptionList = local_10;
  return;
}


