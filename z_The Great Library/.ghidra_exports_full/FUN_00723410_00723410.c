// FUN_00723410 @ 00723410 body=[[00723410, 0072352f] [00723533, 00723557] [0072355b, 00723571] [00723575, 0072358b] [0072358f, 007235ac] [007235b0, 007235dc]]


void FUN_00723410(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  char *pcVar5;
  char local_bc [32];
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
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
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8a703;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(DAT_012588e8 + 0xd11) != '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 0;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    piVar2 = *(int **)(DAT_012588e8 + 0xb24);
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    local_8._0_1_ = 2;
    pcVar3 = __itoa(*(int *)(param_2 + 8),local_bc,10);
    pcVar5 = pcVar3;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
    local_8._0_1_ = 3;
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    FUN_00409350("goods_selected_",0xf);
    local_8._0_1_ = 4;
    uVar4 = FUN_00988f20(local_64);
    local_8 = CONCAT31(local_8._1_3_,5);
    (**(code **)(*piVar2 + 0x120))(uVar4,local_2c,local_48,0);
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_9c);
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80 = local_80 & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_8 = 0xffffffff;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
  }
  local_8 = 0xffffffff;
  *(int *)(param_1 + 0x6c) = param_2;
  FUN_0071faa0(param_1,1);
  ExceptionList = local_10;
  return;
}

