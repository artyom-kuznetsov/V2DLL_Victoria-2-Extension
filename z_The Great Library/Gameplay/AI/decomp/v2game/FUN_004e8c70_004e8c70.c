// FUN_004e8c70 @ 004e8c70 body=[[004e8c70, 004e8dbb] [004e8dbf, 004e8de2] [004e8de6, 004e8e95] [004e8e99, 004e8ebd] [004e8ec1, 004e8efc] [004e8f00, 004e8f51] [004e8f55, 004e8f74] [004e8f78, 004e8f8c]]


undefined1 * FUN_004e8c70(int param_1,undefined1 *param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  longlong lVar6;
  char local_78 [32];
  uint local_58;
  undefined4 local_48;
  uint local_44;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b752e9;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  piVar2 = *(int **)(param_1 + 0xa4);
  local_1c = 1;
  local_14 = 0;
  local_18 = 0;
  while (piVar2 != (int *)0x0) {
    local_20 = *piVar2;
    piVar2 = (int *)piVar2[2];
    if (*(int *)(local_20 + 0x58) < *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x10) / 1000) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(local_20 + 0x58) /
              (((*(int *)(*(int *)(DAT_012586dc + 0x20) + 0x14) / 1000) * 1000) / 1000) + 1;
    }
    local_14 = local_14 + iVar3;
    iVar3 = FUN_00965930();
    local_18 = local_18 + iVar3;
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_8 = 1;
  pcVar4 = __itoa(local_14,local_78,10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = 2;
  uVar5 = FUN_0042c180();
  local_8._0_1_ = 3;
  FUN_00448aa0(uVar5);
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740();
  lVar6 = __allmul(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0x1f40000,0);
  iVar3 = FUN_004e9360(param_1);
  __alldiv((longlong)(iVar3 * 1000) *
           (longlong)
           (int)((uint)(lVar6 >> 0xf) >> 0xf | (int)((ulonglong)(lVar6 >> 0xf) >> 0x20) << 0x11),
           1000,0);
  FUN_00988a50(local_3c);
  local_8 = 4;
  uVar5 = FUN_0042c180();
  local_8._0_1_ = 5;
  FUN_00448aa0(uVar5);
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_00448740();
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  local_8 = 6;
  pcVar4 = __itoa(local_18,local_78,10);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00409350();
  local_8 = 7;
  uVar5 = FUN_0042c180();
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_00448aa0(uVar5);
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

