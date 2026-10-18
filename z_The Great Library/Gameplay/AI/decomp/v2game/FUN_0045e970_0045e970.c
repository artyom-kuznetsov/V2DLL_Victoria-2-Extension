// FUN_0045e970 @ 0045e970 body=[[0045e970, 0045e9ad] [0045e9b0, 0045ea71] [0045ea75, 0045eac5] [0045eac9, 0045eadb]]


void FUN_0045e970(int param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  int iVar1;
  void **ppvVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 local_50 [5];
  uint local_3c;
  uint local_34 [4];
  int local_24;
  uint local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b93920;
  local_10 = ExceptionList;
  local_18 = param_3[1] - *param_3 >> 2;
  local_14 = 0;
  ExceptionList = &local_10;
  ppvVar2 = &local_10;
  if (0 < local_18) {
    do {
      ExceptionList = ppvVar2;
      iVar1 = *(int *)(*param_3 + local_14 * 4);
      if (((int)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x10) & 0xfffffffcU) < 1) ||
         (cVar3 = (**(code **)(*(int *)(iVar1 + 8) + 0x18))(param_1), cVar3 != '\0')) {
        *(undefined4 *)(iVar1 + 0x34) = 0;
        do {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          FUN_00409350(&DAT_00ded94d,0);
          local_8 = 0;
          uVar4 = *param_4 * 0x343fd + 0x269ec3;
          uVar5 = uVar4 * 0x343fd + 0x269ec3;
          *param_4 = uVar5;
          cVar3 = FUN_0045dd50((uVar5 >> 0x10 & 0x7fff) * (uVar4 >> 0x10 & 0x7fff),
                               *(undefined4 *)(param_1 + 0x28));
          if (local_24 != 0) {
            FUN_00448aa0(local_34,0,0xffffffff);
          }
          local_8 = 0xffffffff;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_34[0]);
          }
        } while (cVar3 != '\0');
        *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
      }
      local_14 = local_14 + 1;
      ppvVar2 = ExceptionList;
    } while (local_14 < local_18);
  }
  uVar6 = FUN_00989430(param_2,local_50);
  local_8 = 1;
  FUN_00408ed0(uVar6,0,0xffffffff);
  if (local_3c < 0x10) {
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

