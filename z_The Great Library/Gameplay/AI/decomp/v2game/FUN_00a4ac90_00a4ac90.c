// FUN_00a4ac90 @ 00a4ac90 body=[[00a4ac90, 00a4ad2f]]


int FUN_00a4ac90(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int in_ECX;
  byte *pbVar4;
  bool bVar5;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  
  pbVar2 = param_1;
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar2 = *(byte **)param_1;
  }
  pbVar4 = &DAT_00ded94d;
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 != *pbVar4) {
LAB_00a4acd1:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
      goto LAB_00a4acd6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar2[1];
    bVar5 = bVar1 < pbVar4[1];
    if (bVar1 != pbVar4[1]) goto LAB_00a4acd1;
    pbVar2 = pbVar2 + 2;
    pbVar4 = pbVar4 + 2;
  } while (bVar1 != 0);
  iVar3 = 0;
LAB_00a4acd6:
  if (iVar3 != 0) {
    pbVar2 = param_1 + 0x10;
    local_18 = 0;
    local_14 = 0;
    local_10 = 10;
    local_c = 10;
    if (0xf < *(uint *)(param_1 + 0x14)) {
      param_1 = *(byte **)param_1;
    }
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
              (*(int **)(in_ECX + 0x30),0,param_1,*(undefined4 *)pbVar2,&local_18,0x400,0xffffffff);
    return local_c - local_14;
  }
  return 0;
}

