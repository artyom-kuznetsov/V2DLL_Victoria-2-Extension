// FUN_005db1e0 @ 005db1e0 body=[[005db1e0, 005db26c]]


void FUN_005db1e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  undefined8 uVar3;
  
  iVar2 = param_1 >> 0x1f;
  uVar3 = __allmul(*(int *)(unaff_ESI + 8),*(int *)(unaff_ESI + 8) >> 0x1f,param_1,iVar2);
  uVar1 = __alldiv(uVar3,1000,0);
  *(undefined4 *)(unaff_ESI + 8) = uVar1;
  uVar3 = __allmul(*(int *)(unaff_ESI + 0xc),*(int *)(unaff_ESI + 0xc) >> 0x1f,param_1,iVar2);
  uVar1 = __alldiv(uVar3,1000,0);
  *(undefined4 *)(unaff_ESI + 0xc) = uVar1;
  uVar3 = __allmul(*(int *)(unaff_ESI + 0x10),*(int *)(unaff_ESI + 0x10) >> 0x1f,param_1,iVar2);
  uVar1 = __alldiv(uVar3,1000,0);
  *(undefined4 *)(unaff_ESI + 0x10) = uVar1;
  uVar3 = __allmul(*(int *)(unaff_ESI + 0x14),*(int *)(unaff_ESI + 0x14) >> 0x1f,param_1,iVar2);
  uVar1 = __alldiv(uVar3,1000,0);
  *(undefined4 *)(unaff_ESI + 0x14) = uVar1;
  return;
}

