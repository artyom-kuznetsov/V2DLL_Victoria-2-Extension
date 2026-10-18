// FUN_00a6f830 @ 00a6f830 body=[[00a6f830, 00a6f918]]


int * FUN_00a6f830(int param_1,void *param_2)

{
  int *piVar1;
  void *_Dst;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int local_8;
  
  piVar1 = (int *)FUN_00aae9af(0x10);
  *piVar1 = param_1;
  _Dst = _malloc(param_1 * 0x54);
  piVar1[2] = (int)_Dst;
  pvVar2 = _malloc(param_1 * 0x30);
  piVar1[1] = (int)pvVar2;
  pvVar2 = _malloc(param_1 << 5);
  piVar1[3] = (int)pvVar2;
  FID_conflict__memcpy(_Dst,param_2,param_1 * 0x54);
  if (0 < param_1) {
    iVar4 = 0;
    local_8 = 0;
    puVar5 = (undefined4 *)((int)param_2 + 8);
    do {
      iVar3 = piVar1[1];
      *(undefined4 *)(iVar3 + iVar4) = puVar5[-2];
      iVar3 = iVar3 + iVar4;
      *(undefined4 *)(iVar3 + 0x10) = puVar5[-1];
      *(undefined4 *)(iVar3 + 0x20) = *puVar5;
      *(undefined4 *)(iVar3 + 4) = puVar5[1];
      *(undefined4 *)(iVar3 + 0x14) = puVar5[2];
      *(undefined4 *)(iVar3 + 0x24) = puVar5[3];
      *(undefined4 *)(iVar3 + 8) = puVar5[4];
      *(undefined4 *)(iVar3 + 0x18) = puVar5[5];
      *(undefined4 *)(iVar3 + 0x28) = puVar5[6];
      *(undefined4 *)(iVar3 + 0xc) = puVar5[7];
      *(undefined4 *)(iVar3 + 0x1c) = puVar5[8];
      *(undefined4 *)(iVar3 + 0x2c) = puVar5[9];
      _strncpy((char *)(piVar1[3] + local_8),(char *)((int)puVar5 + 0x29),0x20);
      local_8 = local_8 + 0x20;
      iVar4 = iVar4 + 0x30;
      puVar5 = puVar5 + 0x15;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return piVar1;
}

