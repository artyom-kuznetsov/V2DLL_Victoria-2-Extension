// FUN_0069c350 @ 0069c350 body=[[0069c350, 0069c3e7] [0069c3eb, 0069c4e5] [0069c4e9, 0069c51f]]


undefined4 FUN_0069c350(undefined4 param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 local_fc [40];
  uint local_d4;
  undefined4 local_c4;
  uint local_c0;
  undefined1 local_94 [16];
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b44dfe;
  local_10 = ExceptionList;
  local_30 = 0;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = 0;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = 0;
  local_40 = 0;
  local_3c = 1;
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("default_listbox",0xf);
  local_8._0_1_ = 1;
  piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x28) + 0x7c))(local_2c);
  (**(code **)(*piVar2 + 0x2c))();
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_00698880();
  local_8 = CONCAT31(local_8._1_3_,2);
  iVar5 = *(int *)(in_ECX + 0x34) * 0x58;
  puVar3 = (undefined4 *)(param_2 + 0x14);
  if ((*(int *)(*(int *)(in_ECX + 0x3c) + 0x40 + iVar5) == 0) && (*(int *)(param_2 + 0x24) != 0)) {
    pcVar1 = *(code **)(*(int *)(in_ECX + 0x3c) + 8 + iVar5);
    if ((*(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) & 0xfffffffcU) != 0) {
      if (0xf < *(uint *)(param_2 + 0x28)) {
        puVar3 = (undefined4 *)*puVar3;
      }
      iVar5 = FUN_00aaf0c5(puVar3);
      if (iVar5 < 0) {
        (*pcVar1)(0,-iVar5,local_fc,local_94);
      }
      else {
        iVar4 = *(int *)(in_ECX + 0x6c) - *(int *)(in_ECX + 0x68) >> 2;
        if (iVar4 <= iVar5 % iVar4) {
          FUN_0040c830(param_1);
          FUN_00698b90();
          FUN_00459820();
          ExceptionList = local_10;
          return param_1;
        }
        (*pcVar1)(*(undefined4 *)(*(int *)(in_ECX + 0x68) + (iVar5 % iVar4) * 4),iVar5 / iVar4,
                  local_fc,local_94);
      }
    }
  }
  FUN_0040c830(param_1);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_d4);
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = local_d4 & 0xffffff00;
  FUN_00459820();
  ExceptionList = local_10;
  return param_1;
}

