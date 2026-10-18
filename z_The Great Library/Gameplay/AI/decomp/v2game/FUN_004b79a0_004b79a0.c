// FUN_004b79a0 @ 004b79a0 body=[[004b79a0, 004b7a61]]


int * FUN_004b79a0(int *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar2 = FUN_004b7ae0();
  iVar2 = iVar2 * 1000;
  uVar5 = __allmul(iVar2,iVar2 >> 0x1f,200000,0);
  iVar3 = __alldiv(uVar5,1000,0);
  iVar4 = *(int *)(DAT_012587e4 + 4);
  iVar1 = *(int *)(*(int *)(iVar4 + *(int *)(in_EAX + 300) * 4) + 0xde4);
  *param_1 = iVar3;
  if (iVar1 != 0) {
    iVar4 = *(int *)(*(int *)(iVar4 + *(int *)(in_EAX + 300) * 4) + 0xde4) * 1000;
    uVar5 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
    iVar4 = __alldiv(uVar5,iVar4,iVar4 >> 0x1f);
    *param_1 = iVar4;
  }
  if (iVar2 < *param_1) {
    *param_1 = iVar2;
  }
  if (*param_1 < 1000) {
    *param_1 = 1000;
  }
  return param_1;
}

