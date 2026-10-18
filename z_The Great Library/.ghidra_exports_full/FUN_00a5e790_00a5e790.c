// FUN_00a5e790 @ 00a5e790 body=[[00a5e790, 00a5e9e7] [00a5e9eb, 00a5ea22]]


undefined4 *
FUN_00a5e790(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8,
            undefined4 param_9,undefined4 *param_10,undefined1 param_11,undefined1 param_12)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5240e;
  local_10 = ExceptionList;
  local_20 = *(undefined4 *)(in_ECX + 0x6b9bc);
  local_1c = *(undefined4 *)(in_ECX + 0x6b9c0);
  ExceptionList = &local_10;
  FUN_009d9070(param_1,CONCAT22((short)local_1c,(short)*(undefined4 *)(in_ECX + 0x6b9bc)));
  local_8 = 0;
  param_1[0x53] = in_ECX;
  puVar1 = param_1 + 0x54;
  *param_1 = &PTR_FUN_00e41f10;
  param_1[0x59] = 0xf;
  param_1[0x58] = 0;
  *(undefined1 *)puVar1 = 0;
  FUN_00408ed0(param_6,0,0xffffffff);
  uVar2 = DAT_00f092fc;
  local_8 = CONCAT31(local_8._1_3_,1);
  *(undefined1 *)(param_1 + 0x61) = 1;
  param_1[0x5c] = 0x18d;
  param_1[0x5b] = CColor::vftable;
  param_1[0x5d] = uVar2;
  param_1[0x5e] = uVar2;
  param_1[0x5f] = uVar2;
  param_1[0x60] = uVar2;
  param_1[0x62] = *param_3;
  param_1[99] = param_3[1];
  param_1[100] = *param_3;
  param_1[0x65] = param_3[1];
  param_1[0x66] = *param_7;
  uVar2 = param_7[1];
  param_1[0x68] = param_4;
  param_1[0x67] = uVar2;
  param_1[0x6b] = param_8;
  param_1[0x69] = param_5;
  param_1[0x6a] = param_9;
  param_1[0x6c] = *param_10;
  uVar2 = param_10[1];
  *(undefined1 *)(param_1 + 0x6e) = param_11;
  param_1[0x6d] = uVar2;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined1 *)(param_1 + 0x74) = param_12;
  piVar3 = (int *)FUN_00973bd0(param_2);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)FUN_00973bd0(param_2);
  }
  param_1[0x6f] = piVar3;
  iVar4 = (**(code **)(*piVar3 + 0x40))(local_3c);
  param_1[0x5c] = *(undefined4 *)(iVar4 + 4);
  *(undefined8 *)(param_1 + 0x5d) = *(undefined8 *)(iVar4 + 8);
  *(undefined8 *)(param_1 + 0x5f) = *(undefined8 *)(iVar4 + 0x10);
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(iVar4 + 0x18);
  if ((param_1[0x58] != 0) && (*(char *)(param_1 + 0x6e) != '\0')) {
    local_28 = 0xf;
    local_2c = 0;
    local_3c[0] = local_3c[0] & 0xffffff00;
    FUN_00408ed0(puVar1,0,0xffffffff);
    local_8 = CONCAT31(local_8._1_3_,2);
    local_18 = param_1[0x66];
    local_14 = param_1[0x67];
    (**(code **)(*(int *)param_1[0x6f] + 0x30))
              (puVar1,local_3c,param_1[0x68],param_1[0x69],&local_18);
    FUN_00408ed0(local_3c,0,0xffffffff);
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_3c[0]);
    }
  }
  if (param_1[0x69] == 0) {
    param_1[0x69] = 200;
  }
  if (param_1[0x68] == 0) {
    param_1[0x68] = 200;
  }
  ExceptionList = local_10;
  return param_1;
}

